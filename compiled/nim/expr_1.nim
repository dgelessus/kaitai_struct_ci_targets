import kaitai_struct_nim_runtime
import options

type
  Expr1* = ref object of KaitaiStruct
    `lenOf1`*: uint16
    `str1`*: string
    `parent`*: KaitaiStruct
    `lenOf1ModInst`*: int
    `str1LenInst`*: int

proc read*(_: typedesc[Expr1], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): Expr1

proc lenOf1Mod*(this: Expr1): int
proc str1Len*(this: Expr1): int

proc read*(_: typedesc[Expr1], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): Expr1 =
  template this: untyped = result
  this = new(Expr1)
  let root = if root == nil: cast[Expr1](this) else: cast[Expr1](root)
  this.io = io
  this.root = root
  this.parent = parent

  let lenOf1Expr = this.io.readU2le()
  this.lenOf1 = lenOf1Expr
  let str1Expr = encode(this.io.readBytes(int(this.lenOf1Mod)), "ASCII")
  this.str1 = str1Expr

proc lenOf1Mod(this: Expr1): int = 
  if this.lenOf1ModInst != nil:
    return this.lenOf1ModInst
  let lenOf1ModInstExpr = int((this.lenOf1 - 2))
  this.lenOf1ModInst = lenOf1ModInstExpr
  if this.lenOf1ModInst != nil:
    return this.lenOf1ModInst

proc str1Len(this: Expr1): int = 
  if this.str1LenInst != nil:
    return this.str1LenInst
  let str1LenInstExpr = int(len(this.str1))
  this.str1LenInst = str1LenInstExpr
  if this.str1LenInst != nil:
    return this.str1LenInst

proc fromFile*(_: typedesc[Expr1], filename: string): Expr1 =
  Expr1.read(newKaitaiFileStream(filename), nil, nil)

