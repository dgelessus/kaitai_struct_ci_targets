# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

import array
import struct
import zlib
from enum import Enum
from pkg_resources import parse_version

from kaitaistruct import __version__ as ks_version, KaitaiStruct, KaitaiStream, BytesIO


if parse_version(ks_version) < parse_version('0.7'):
    raise Exception("Incompatible Kaitai Struct Python API: 0.7 or later is required, but you have %s" % (ks_version))

class DebugEnumName(KaitaiStruct):

    class TestEnum1(Enum):
        enum_value_80 = 80

    class TestEnum2(Enum):
        enum_value_65 = 65
    def __init__(self, _io, _parent=None, _root=None):
        self._io = _io
        self._parent = _parent
        self._root = _root if _root else self
        self.one = self._root.TestEnum1(self._io.read_u1())
        self.array_of_ints = [None] * (1)
        for i in range(1):
            self.array_of_ints[i] = self._root.TestEnum2(self._io.read_u1())

        self.test_type = self._root.TestType(self._io, self, self._root)

    class TestType(KaitaiStruct):

        class InnerEnum1(Enum):
            enum_value_67 = 67

        class InnerEnum2(Enum):
            enum_value_11 = 11
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.field1 = self._root.TestType.InnerEnum1(self._io.read_u1())
            self.field2 = self._io.read_u1()

        @property
        def instance_field(self):
            if hasattr(self, '_m_instance_field'):
                return self._m_instance_field if hasattr(self, '_m_instance_field') else None

            self._m_instance_field = self._root.TestType.InnerEnum2((self.field2 & 15))
            return self._m_instance_field if hasattr(self, '_m_instance_field') else None


