import kaitai_struct_nim_runtime
import options
import encodings

type
  ValidLong* = ref ValidLongObj
  ValidLongObj* = object
    magic1*: string
    uint8*: uint8
    sint8*: int8
    magicUint*: string
    uint16*: uint16
    uint32*: uint32
    uint64*: uint64
    magicSint*: string
    sint16*: int16
    sint32*: int32
    sint64*: int64
    io*: KaitaiStream
    root*: ValidLong
    parent*: ref RootObj

### ValidLong ###
proc read*(_: typedesc[ValidLong], io: KaitaiStream, root: ValidLong, parent: ref RootObj): ValidLong =
  let this = new(ValidLong)
  let root = if root == nil: cast[ValidLong](result) else: root
  this.io = io
  this.root = root
  this.parent = parent

  let magic1 = this.io.readBytes(int(6))
  this.magic1 = magic1
  let uint8 = this.io.readU1()
  this.uint8 = uint8
  let sint8 = this.io.readS1()
  this.sint8 = sint8
  let magicUint = convert(this.io.readBytes(int(10)), srcEncoding = "utf-8")
  this.magicUint = magicUint
  let uint16 = this.io.readU2le()
  this.uint16 = uint16
  let uint32 = this.io.readU4le()
  this.uint32 = uint32
  let uint64 = this.io.readU8le()
  this.uint64 = uint64
  let magicSint = convert(this.io.readBytes(int(10)), srcEncoding = "utf-8")
  this.magicSint = magicSint
  let sint16 = this.io.readS2le()
  this.sint16 = sint16
  let sint32 = this.io.readS4le()
  this.sint32 = sint32
  let sint64 = this.io.readS8le()
  this.sint64 = sint64
  result = this

proc fromFile*(_: typedesc[ValidLong], filename: string): ValidLong =
  ValidLong.read(newKaitaiFileStream(filename), nil, nil)

proc `=destroy`(x: var ValidLongObj) =
  close(x.io)
