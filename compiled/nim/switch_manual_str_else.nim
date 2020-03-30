import kaitai_struct_nim_runtime
import options
import encodings

type
  SwitchManualStrElse_Opcode_Intval* = ref SwitchManualStrElse_Opcode_IntvalObj
  SwitchManualStrElse_Opcode_IntvalObj* = object
    value*: uint8
    io*: KaitaiStream
    root*: SwitchManualStrElse
    parent*: SwitchManualStrElse_Opcode
  SwitchManualStrElse_Opcode_Strval* = ref SwitchManualStrElse_Opcode_StrvalObj
  SwitchManualStrElse_Opcode_StrvalObj* = object
    value*: string
    io*: KaitaiStream
    root*: SwitchManualStrElse
    parent*: SwitchManualStrElse_Opcode
  SwitchManualStrElse_Opcode_Noneval* = ref SwitchManualStrElse_Opcode_NonevalObj
  SwitchManualStrElse_Opcode_NonevalObj* = object
    filler*: uint32
    io*: KaitaiStream
    root*: SwitchManualStrElse
    parent*: SwitchManualStrElse_Opcode
  SwitchManualStrElse_Opcode* = ref SwitchManualStrElse_OpcodeObj
  SwitchManualStrElse_OpcodeObj* = object
    code*: string
    body*: ref RootObj
    io*: KaitaiStream
    root*: SwitchManualStrElse
    parent*: SwitchManualStrElse
  SwitchManualStrElse* = ref SwitchManualStrElseObj
  SwitchManualStrElseObj* = object
    opcodes*: seq[SwitchManualStrElse_Opcode]
    io*: KaitaiStream
    root*: SwitchManualStrElse
    parent*: ref RootObj

### SwitchManualStrElse_Opcode_Intval ###
proc read*(_: typedesc[SwitchManualStrElse_Opcode_Intval], io: KaitaiStream, root: SwitchManualStrElse, parent: SwitchManualStrElse_Opcode): SwitchManualStrElse_Opcode_Intval =
  let this = new(SwitchManualStrElse_Opcode_Intval)
  let root = if root == nil: cast[SwitchManualStrElse](result) else: root
  this.io = io
  this.root = root
  this.parent = parent

  let value = this.io.readU1()
  this.value = value
  result = this

proc fromFile*(_: typedesc[SwitchManualStrElse_Opcode_Intval], filename: string): SwitchManualStrElse_Opcode_Intval =
  SwitchManualStrElse_Opcode_Intval.read(newKaitaiFileStream(filename), nil, nil)

proc `=destroy`(x: var SwitchManualStrElse_Opcode_IntvalObj) =
  close(x.io)

### SwitchManualStrElse_Opcode_Strval ###
proc read*(_: typedesc[SwitchManualStrElse_Opcode_Strval], io: KaitaiStream, root: SwitchManualStrElse, parent: SwitchManualStrElse_Opcode): SwitchManualStrElse_Opcode_Strval =
  let this = new(SwitchManualStrElse_Opcode_Strval)
  let root = if root == nil: cast[SwitchManualStrElse](result) else: root
  this.io = io
  this.root = root
  this.parent = parent

  let value = convert(this.io.readBytesTerm(0, false, true, true), srcEncoding = "ASCII")
  this.value = value
  result = this

proc fromFile*(_: typedesc[SwitchManualStrElse_Opcode_Strval], filename: string): SwitchManualStrElse_Opcode_Strval =
  SwitchManualStrElse_Opcode_Strval.read(newKaitaiFileStream(filename), nil, nil)

proc `=destroy`(x: var SwitchManualStrElse_Opcode_StrvalObj) =
  close(x.io)

### SwitchManualStrElse_Opcode_Noneval ###
proc read*(_: typedesc[SwitchManualStrElse_Opcode_Noneval], io: KaitaiStream, root: SwitchManualStrElse, parent: SwitchManualStrElse_Opcode): SwitchManualStrElse_Opcode_Noneval =
  let this = new(SwitchManualStrElse_Opcode_Noneval)
  let root = if root == nil: cast[SwitchManualStrElse](result) else: root
  this.io = io
  this.root = root
  this.parent = parent

  let filler = this.io.readU4le()
  this.filler = filler
  result = this

proc fromFile*(_: typedesc[SwitchManualStrElse_Opcode_Noneval], filename: string): SwitchManualStrElse_Opcode_Noneval =
  SwitchManualStrElse_Opcode_Noneval.read(newKaitaiFileStream(filename), nil, nil)

proc `=destroy`(x: var SwitchManualStrElse_Opcode_NonevalObj) =
  close(x.io)

### SwitchManualStrElse_Opcode ###
proc read*(_: typedesc[SwitchManualStrElse_Opcode], io: KaitaiStream, root: SwitchManualStrElse, parent: SwitchManualStrElse): SwitchManualStrElse_Opcode =
  let this = new(SwitchManualStrElse_Opcode)
  let root = if root == nil: cast[SwitchManualStrElse](result) else: root
  this.io = io
  this.root = root
  this.parent = parent

  let code = convert(this.io.readBytes(int(1)), srcEncoding = "ASCII")
  this.code = code
  let body = SwitchManualStrElse_Opcode_Intval.read(this.io, this.root, this)
  this.body = body
  let body = SwitchManualStrElse_Opcode_Strval.read(this.io, this.root, this)
  this.body = body
  let body = SwitchManualStrElse_Opcode_Noneval.read(this.io, this.root, this)
  this.body = body
  result = this

proc fromFile*(_: typedesc[SwitchManualStrElse_Opcode], filename: string): SwitchManualStrElse_Opcode =
  SwitchManualStrElse_Opcode.read(newKaitaiFileStream(filename), nil, nil)

proc `=destroy`(x: var SwitchManualStrElse_OpcodeObj) =
  close(x.io)

### SwitchManualStrElse ###
proc read*(_: typedesc[SwitchManualStrElse], io: KaitaiStream, root: SwitchManualStrElse, parent: ref RootObj): SwitchManualStrElse =
  let this = new(SwitchManualStrElse)
  let root = if root == nil: cast[SwitchManualStrElse](result) else: root
  this.io = io
  this.root = root
  this.parent = parent

  this.opcodes = newSeq[SwitchManualStrElse_Opcode]()
  block:
    var i: int
    while not this.io.eof:
      this.opcodes.add(SwitchManualStrElse_Opcode.read(this.io, this.root, this))
      inc i
  result = this

proc fromFile*(_: typedesc[SwitchManualStrElse], filename: string): SwitchManualStrElse =
  SwitchManualStrElse.read(newKaitaiFileStream(filename), nil, nil)

proc `=destroy`(x: var SwitchManualStrElseObj) =
  close(x.io)
