import kaitai_struct_nim_runtime
import options

type
  NonStandard* = ref NonStandardObj
  NonStandardObj* = object
    foo*: uint8
    bar*: uint32
    io*: KaitaiStream
    root*: NonStandard
    parent*: ref RootObj
    viInst*: Option[uint8]
    piInst*: Option[uint8]

### NonStandard ###
proc vi*(this: NonStandard): uint8
proc pi*(this: NonStandard): uint8
proc vi(this: NonStandard): uint8 = 
  if isSome(this.viInst):
    return get(this.viInst)
  let viInst = this.foo
  this.viInst = some(viInst)
  return get(this.viInst)

proc pi(this: NonStandard): uint8 = 
  if isSome(this.piInst):
    return get(this.piInst)
  let pos = this.io.pos()
  this.io.seek(0)
  let piInst = this.io.readU1()
  this.piInst = some(piInst)
  this.io.seek(pos)
  return get(this.piInst)

proc read*(_: typedesc[NonStandard], io: KaitaiStream, root: NonStandard, parent: ref RootObj): NonStandard =
  let this = new(NonStandard)
  let root = if root == nil: cast[NonStandard](result) else: root
  this.io = io
  this.root = root
  this.parent = parent

  let foo = this.io.readU1()
  this.foo = foo
  let bar = uint32(this.io.readU2le())
  this.bar = bar
  let bar = this.io.readU4le()
  this.bar = bar
  result = this

proc fromFile*(_: typedesc[NonStandard], filename: string): NonStandard =
  NonStandard.read(newKaitaiFileStream(filename), nil, nil)

proc `=destroy`(x: var NonStandardObj) =
  close(x.io)
