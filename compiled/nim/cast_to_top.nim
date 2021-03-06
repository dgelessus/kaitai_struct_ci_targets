import kaitai_struct_nim_runtime
import options

type
  CastToTop* = ref object of KaitaiStruct
    `code`*: uint8
    `parent`*: KaitaiStruct
    `headerInst`*: CastToTop
    `headerCastedInst`*: CastToTop

proc read*(_: typedesc[CastToTop], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): CastToTop

proc header*(this: CastToTop): CastToTop
proc headerCasted*(this: CastToTop): CastToTop

proc read*(_: typedesc[CastToTop], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): CastToTop =
  template this: untyped = result
  this = new(CastToTop)
  let root = if root == nil: cast[CastToTop](this) else: cast[CastToTop](root)
  this.io = io
  this.root = root
  this.parent = parent

  let codeExpr = this.io.readU1()
  this.code = codeExpr

proc header(this: CastToTop): CastToTop = 
  if this.headerInst != nil:
    return this.headerInst
  let pos = this.io.pos()
  this.io.seek(int(1))
  let headerInstExpr = CastToTop.read(this.io, this.root, this)
  this.headerInst = headerInstExpr
  this.io.seek(pos)
  if this.headerInst != nil:
    return this.headerInst

proc headerCasted(this: CastToTop): CastToTop = 
  if this.headerCastedInst != nil:
    return this.headerCastedInst
  let headerCastedInstExpr = CastToTop((CastToTop(this.header)))
  this.headerCastedInst = headerCastedInstExpr
  if this.headerCastedInst != nil:
    return this.headerCastedInst

proc fromFile*(_: typedesc[CastToTop], filename: string): CastToTop =
  CastToTop.read(newKaitaiFileStream(filename), nil, nil)

