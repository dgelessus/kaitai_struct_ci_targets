# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

from pkg_resources import parse_version
from kaitaistruct import __version__ as ks_version, KaitaiStruct, KaitaiStream, BytesIO


if parse_version(ks_version) < parse_version('0.7'):
    raise Exception("Incompatible Kaitai Struct Python API: 0.7 or later is required, but you have %s" % (ks_version))

class EnumToIClassBorder2(KaitaiStruct):
    def __init__(self, parent, _io, _parent=None, _root=None):
        self._io = _io
        self._parent = _parent
        self._root = _root if _root else self
        self.parent = parent
        self._read()

    def _read(self):
        pass

    @property
    def is_dog(self):
        if hasattr(self, '_m_is_dog'):
            return self._m_is_dog if hasattr(self, '_m_is_dog') else None

        self._m_is_dog = self.parent.some_dog.value == 4
        return self._m_is_dog if hasattr(self, '_m_is_dog') else None


