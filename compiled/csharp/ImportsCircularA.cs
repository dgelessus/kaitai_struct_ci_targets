// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

using System;
using System.Collections.Generic;
using System.Linq;

namespace Kaitai
{
    public partial class ImportsCircularA : KaitaiStruct
    {
        public static ImportsCircularA FromFile(string fileName)
        {
            return new ImportsCircularA(new KaitaiStream(fileName));
        }

        public ImportsCircularA(KaitaiStream io, KaitaiStruct parent = null, ImportsCircularA root = null) : base(io)
        {
            m_parent = parent;
            m_root = root ?? this;
            _parse();
        }

        private void _parse()
        {
            _code = m_io.ReadU1();
            _two = new ImportsCircularB(m_io);
        }
        private byte _code;
        private ImportsCircularB _two;
        private ImportsCircularA m_root;
        private KaitaiStruct m_parent;
        public byte Code { get { return _code; } }
        public ImportsCircularB Two { get { return _two; } }
        public ImportsCircularA M_Root { get { return m_root; } }
        public KaitaiStruct M_Parent { get { return m_parent; } }
    }
}