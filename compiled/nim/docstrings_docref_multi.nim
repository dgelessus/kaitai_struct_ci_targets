import kaitai_struct_nim_runtime
import options

type
  DocstringsDocrefMulti* = ref object of KaitaiStruct
    `parent`*: KaitaiStruct

proc read*(_: typedesc[DocstringsDocrefMulti], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): DocstringsDocrefMulti



##[
Sample docstring
@see "Plain text description of doc ref, page 42"
@see <a href="http://www.example.com/some/path/?even_with=query&amp;more=2">Source</a>
@see <a href="http://www.example.com/three">Documentation name</a>
]##
proc read*(_: typedesc[DocstringsDocrefMulti], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): DocstringsDocrefMulti =
  template this: untyped = result
  this = new(DocstringsDocrefMulti)
  let root = if root == nil: cast[DocstringsDocrefMulti](this) else: cast[DocstringsDocrefMulti](root)
  this.io = io
  this.root = root
  this.parent = parent


proc fromFile*(_: typedesc[DocstringsDocrefMulti], filename: string): DocstringsDocrefMulti =
  DocstringsDocrefMulti.read(newKaitaiFileStream(filename), nil, nil)

