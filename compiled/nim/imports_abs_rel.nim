import ../../runtime/nim/kaitai



type
  ImportsAbsRel* = ref ImportsAbsRelObj
  ImportsAbsRelObj* = object
    io: KaitaiStream
    root*: ImportsAbsRel
    parent*: ref RootObj
    one*: uint8
    two*: ImportedAndRel

# ImportsAbsRel
proc read*(_: typedesc[ImportsAbsRel], io: KaitaiStream, root: ImportsAbsRel, parent: ref RootObj): owned ImportsAbsRel =
  result = new(ImportsAbsRel)
  let root = if root == nil: cast[ImportsAbsRel](result) else: root
  result.io = io
  result.root = root
  result.parent = parent

  result.one = readU1(io)
  result.two = ImportedAndRel.read(io)

proc fromFile*(_: typedesc[ImportsAbsRel], filename: string): owned ImportsAbsRel =
  ImportsAbsRel.read(newKaitaiStream(filename), nil, nil)

proc `=destroy`(x: var ImportsAbsRelObj) =
  close(x.io)

