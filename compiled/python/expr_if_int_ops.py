# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

from pkg_resources import parse_version
import kaitaistruct
from kaitaistruct import KaitaiStruct, KaitaiStream, BytesIO


if parse_version(kaitaistruct.__version__) < parse_version('0.9'):
    raise Exception("Incompatible Kaitai Struct Python API: 0.9 or later is required, but you have %s" % (kaitaistruct.__version__))

class ExprIfIntOps(KaitaiStruct):
    def __init__(self, _io, _parent=None, _root=None):
        self._io = _io
        self._parent = _parent
        self._root = _root if _root else self
        self._read()

    def _read(self):
        self.skip = self._io.read_bytes(2)
        if True:
            self.it = self._io.read_s2le()

        if True:
            self.boxed = self._io.read_s2le()


    @property
    def is_eq_prim(self):
        if hasattr(self, '_m_is_eq_prim'):
            return self._m_is_eq_prim if hasattr(self, '_m_is_eq_prim') else None

        self._m_is_eq_prim = self.it == 16705
        return self._m_is_eq_prim if hasattr(self, '_m_is_eq_prim') else None

    @property
    def is_eq_boxed(self):
        if hasattr(self, '_m_is_eq_boxed'):
            return self._m_is_eq_boxed if hasattr(self, '_m_is_eq_boxed') else None

        self._m_is_eq_boxed = self.it == self.boxed
        return self._m_is_eq_boxed if hasattr(self, '_m_is_eq_boxed') else None


