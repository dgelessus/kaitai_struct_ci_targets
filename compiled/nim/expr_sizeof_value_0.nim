import ../../runtime/nim/kaitai
import options

{.experimental: "dotOperators".}

type
  Block* = ref BlockObj
  BlockObj* = object
    io: KaitaiStream
    root*: ExprSizeofValue0
    parent*: ExprSizeofValue0
    a*: uint8
    b*: uint32
    c*: seq[byte]
  ExprSizeofValue0* = ref ExprSizeofValue0Obj
  ExprSizeofValue0Obj* = object
    io: KaitaiStream
    root*: ExprSizeofValue0
    parent*: ref RootObj
    block1*: Block
    more*: uint16
    selfSizeofInst: proc(): int
    sizeofBlockInst: proc(): int
    sizeofBlockBInst: proc(): int
    sizeofBlockAInst: proc(): int
    sizeofBlockCInst: proc(): int

# Block
proc read*(_: typedesc[Block], io: KaitaiStream, root: ExprSizeofValue0, parent: ExprSizeofValue0): owned Block =
  result = new(Block)
  let root = if root == nil: cast[ExprSizeofValue0](result) else: root
  result.io = io
  result.root = root
  result.parent = parent

  result.a = readU1(io)
  result.b = readU4le(io)
  result.c = readBytes(io, int(2))

proc fromFile*(_: typedesc[Block], filename: string): owned Block =
  Block.read(newKaitaiStream(filename), nil, nil)

proc `=destroy`(x: var BlockObj) =
  close(x.io)

# ExprSizeofValue0
template `.`*(a: ExprSizeofValue0, b: untyped): untyped =
  (a.`b inst`)()

proc read*(_: typedesc[ExprSizeofValue0], io: KaitaiStream, root: ExprSizeofValue0, parent: ref RootObj): owned ExprSizeofValue0 =
  result = new(ExprSizeofValue0)
  let root = if root == nil: cast[ExprSizeofValue0](result) else: root
  result.io = io
  result.root = root
  result.parent = parent

  result.block1 = Block.read(io, root, result)
  result.more = readU2le(io)

proc fromFile*(_: typedesc[ExprSizeofValue0], filename: string): owned ExprSizeofValue0 =
  ExprSizeofValue0.read(newKaitaiStream(filename), nil, nil)

proc `=destroy`(x: var ExprSizeofValue0Obj) =
  close(x.io)

