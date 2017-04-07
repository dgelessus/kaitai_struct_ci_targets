// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

using System;
using System.Collections.Generic;
using System.Linq;

namespace Kaitai
{
    public partial class FixedStruct : KaitaiStruct
    {
        public static FixedStruct FromFile(string fileName)
        {
            return new FixedStruct(new KaitaiStream(fileName));
        }

        public FixedStruct(KaitaiStream io, KaitaiStruct parent = null, FixedStruct root = null) : base(io)
        {
            m_parent = parent;
            m_root = root ?? this;
            _parse();
        }

        private void _parse()
        {
            f_hdr = false;
        }
        public partial class Header : KaitaiStruct
        {
            public static Header FromFile(string fileName)
            {
                return new Header(new KaitaiStream(fileName));
            }

            public Header(KaitaiStream io, FixedStruct parent = null, FixedStruct root = null) : base(io)
            {
                m_parent = parent;
                m_root = root;
                _parse();
            }

            private void _parse()
            {
                _magic1 = m_io.EnsureFixedContents(new byte[] { 80, 65, 67, 75, 45, 49 });
                _uint8 = m_io.ReadU1();
                _sint8 = m_io.ReadS1();
                _magicUint = m_io.EnsureFixedContents(new byte[] { 80, 65, 67, 75, 45, 85, 45, 68, 69, 70 });
                _uint16 = m_io.ReadU2le();
                _uint32 = m_io.ReadU4le();
                _uint64 = m_io.ReadU8le();
                _magicSint = m_io.EnsureFixedContents(new byte[] { 80, 65, 67, 75, 45, 83, 45, 68, 69, 70 });
                _sint16 = m_io.ReadS2le();
                _sint32 = m_io.ReadS4le();
                _sint64 = m_io.ReadS8le();
                _magicUintLe = m_io.EnsureFixedContents(new byte[] { 80, 65, 67, 75, 45, 85, 45, 76, 69 });
                _uint16le = m_io.ReadU2le();
                _uint32le = m_io.ReadU4le();
                _uint64le = m_io.ReadU8le();
                _magicSintLe = m_io.EnsureFixedContents(new byte[] { 80, 65, 67, 75, 45, 83, 45, 76, 69 });
                _sint16le = m_io.ReadS2le();
                _sint32le = m_io.ReadS4le();
                _sint64le = m_io.ReadS8le();
                _magicUintBe = m_io.EnsureFixedContents(new byte[] { 80, 65, 67, 75, 45, 85, 45, 66, 69 });
                _uint16be = m_io.ReadU2be();
                _uint32be = m_io.ReadU4be();
                _uint64be = m_io.ReadU8be();
                _magicSintBe = m_io.EnsureFixedContents(new byte[] { 80, 65, 67, 75, 45, 83, 45, 66, 69 });
                _sint16be = m_io.ReadS2be();
                _sint32be = m_io.ReadS4be();
                _sint64be = m_io.ReadS8be();
            }
            private byte[] _magic1;
            private byte _uint8;
            private sbyte _sint8;
            private byte[] _magicUint;
            private ushort _uint16;
            private uint _uint32;
            private ulong _uint64;
            private byte[] _magicSint;
            private short _sint16;
            private int _sint32;
            private long _sint64;
            private byte[] _magicUintLe;
            private ushort _uint16le;
            private uint _uint32le;
            private ulong _uint64le;
            private byte[] _magicSintLe;
            private short _sint16le;
            private int _sint32le;
            private long _sint64le;
            private byte[] _magicUintBe;
            private ushort _uint16be;
            private uint _uint32be;
            private ulong _uint64be;
            private byte[] _magicSintBe;
            private short _sint16be;
            private int _sint32be;
            private long _sint64be;
            private FixedStruct m_root;
            private FixedStruct m_parent;
            public byte[] Magic1 { get { return _magic1; } }
            public byte Uint8 { get { return _uint8; } }
            public sbyte Sint8 { get { return _sint8; } }
            public byte[] MagicUint { get { return _magicUint; } }
            public ushort Uint16 { get { return _uint16; } }
            public uint Uint32 { get { return _uint32; } }
            public ulong Uint64 { get { return _uint64; } }
            public byte[] MagicSint { get { return _magicSint; } }
            public short Sint16 { get { return _sint16; } }
            public int Sint32 { get { return _sint32; } }
            public long Sint64 { get { return _sint64; } }
            public byte[] MagicUintLe { get { return _magicUintLe; } }
            public ushort Uint16le { get { return _uint16le; } }
            public uint Uint32le { get { return _uint32le; } }
            public ulong Uint64le { get { return _uint64le; } }
            public byte[] MagicSintLe { get { return _magicSintLe; } }
            public short Sint16le { get { return _sint16le; } }
            public int Sint32le { get { return _sint32le; } }
            public long Sint64le { get { return _sint64le; } }
            public byte[] MagicUintBe { get { return _magicUintBe; } }
            public ushort Uint16be { get { return _uint16be; } }
            public uint Uint32be { get { return _uint32be; } }
            public ulong Uint64be { get { return _uint64be; } }
            public byte[] MagicSintBe { get { return _magicSintBe; } }
            public short Sint16be { get { return _sint16be; } }
            public int Sint32be { get { return _sint32be; } }
            public long Sint64be { get { return _sint64be; } }
            public FixedStruct M_Root { get { return m_root; } }
            public FixedStruct M_Parent { get { return m_parent; } }
        }
        private bool f_hdr;
        private Header _hdr;
        public Header Hdr
        {
            get
            {
                if (f_hdr)
                    return _hdr;
                long _pos = m_io.Pos;
                m_io.Seek(0);
                _hdr = new Header(m_io, this, m_root);
                m_io.Seek(_pos);
                f_hdr = true;
                return _hdr;
            }
        }
        private FixedStruct m_root;
        private KaitaiStruct m_parent;
        public FixedStruct M_Root { get { return m_root; } }
        public KaitaiStruct M_Parent { get { return m_parent; } }
    }
}