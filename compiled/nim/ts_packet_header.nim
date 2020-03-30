import kaitai_struct_nim_runtime
import options

type
  TsPacketHeader* = ref TsPacketHeaderObj
  TsPacketHeaderObj* = object
    syncByte*: uint8
    transportErrorIndicator*: bool
    payloadUnitStartIndicator*: bool
    transportPriority*: bool
    pid*: uint64
    transportScramblingControl*: uint64
    adaptationFieldControl*: TsPacketHeader_AdaptationFieldControlEnum
    continuityCounter*: uint64
    tsPacketRemain*: string
    io*: KaitaiStream
    root*: TsPacketHeader
    parent*: ref RootObj
  TsPacketHeader_adaptation_field_control_enum* = enum
    reserved = 0
    payload_only = 1
    adaptation_field_only = 2
    adaptation_field_and_payload = 3

### TsPacketHeader ###
proc read*(_: typedesc[TsPacketHeader], io: KaitaiStream, root: TsPacketHeader, parent: ref RootObj): TsPacketHeader =
  let this = new(TsPacketHeader)
  let root = if root == nil: cast[TsPacketHeader](result) else: root
  this.io = io
  this.root = root
  this.parent = parent

  let syncByte = this.io.readU1()
  this.syncByte = syncByte
  let transportErrorIndicator = this.io.readBitsInt(1) != 0
  this.transportErrorIndicator = transportErrorIndicator
  let payloadUnitStartIndicator = this.io.readBitsInt(1) != 0
  this.payloadUnitStartIndicator = payloadUnitStartIndicator
  let transportPriority = this.io.readBitsInt(1) != 0
  this.transportPriority = transportPriority
  let pid = this.io.readBitsInt(13)
  this.pid = pid
  let transportScramblingControl = this.io.readBitsInt(2)
  this.transportScramblingControl = transportScramblingControl
  let adaptationFieldControl = TsPacketHeader_AdaptationFieldControlEnum(this.io.readBitsInt(2))
  this.adaptationFieldControl = adaptationFieldControl
  let continuityCounter = this.io.readBitsInt(4)
  this.continuityCounter = continuityCounter
  alignToByte(this.io)
  let tsPacketRemain = this.io.readBytes(int(184))
  this.tsPacketRemain = tsPacketRemain
  result = this

proc fromFile*(_: typedesc[TsPacketHeader], filename: string): TsPacketHeader =
  TsPacketHeader.read(newKaitaiFileStream(filename), nil, nil)

proc `=destroy`(x: var TsPacketHeaderObj) =
  close(x.io)
