# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

import ../../../runtime/nim/kaitai

type
  Expr0* = ref object
    lenOf1*: uint16
    root*: Expr0
    parent*: ref RootObj

proc read*(_: typedesc[Expr0], stream: KaitaiStream, root: Expr0, parent: ref RootObj): owned Expr0 =
  result = new(Expr0)
  let root = if root == nil: result else: root
  result.lenOf1 = readU2le(stream)
  result.root = root
  result.parent = parent

proc fromFile*(_: typedesc[Expr0], filename: string): owned Expr0 =
  var stream = newKaitaiStream(filename)
  Expr0.read(stream, nil, nil)
