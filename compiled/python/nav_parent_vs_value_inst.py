# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

import array
import struct
import zlib
from enum import Enum
from pkg_resources import parse_version

from kaitaistruct import __version__ as ks_version, KaitaiStruct, KaitaiStream, BytesIO


if parse_version(ks_version) < parse_version('0.7'):
    raise Exception("Incompatible Kaitai Struct Python API: 0.7 or later is required, but you have %s" % (ks_version))

class NavParentVsValueInst(KaitaiStruct):
    def __init__(self, _io, _parent=None, _root=None):
        self._io = _io
        self._parent = _parent
        self._root = _root if _root else self
        self.s1 = (self._io.read_bytes_term(124, False, True, True)).decode(u"UTF-8")
        self.child = self._root.ChildObj(self._io, self, self._root)

    class ChildObj(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self

        @property
        def do_something(self):
            if hasattr(self, '_m_do_something'):
                return self._m_do_something if hasattr(self, '_m_do_something') else None

            self._m_do_something = (True if self._parent.s1 == u"foo" else False)
            return self._m_do_something if hasattr(self, '_m_do_something') else None


