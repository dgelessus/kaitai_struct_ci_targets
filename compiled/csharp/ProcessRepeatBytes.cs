// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

using System.Collections.Generic;

namespace Kaitai
{
    public partial class ProcessRepeatBytes : KaitaiStruct
    {
        public static ProcessRepeatBytes FromFile(string fileName)
        {
            return new ProcessRepeatBytes(new KaitaiStream(fileName));
        }

        public ProcessRepeatBytes(KaitaiStream p__io, KaitaiStruct p__parent = null, ProcessRepeatBytes p__root = null) : base(p__io)
        {
            m_parent = p__parent;
            m_root = p__root ?? this;
            _read();
        }
        private void _read()
        {
            _bufs = new List<byte[]>((int) (2));
            for (var i = 0; i < 2; i++)
            {
                __raw_bufs.Add(m_io.ReadBytes(5));
                _bufs = m_io.ProcessXor(__raw_bufs, 158);
            }
        }
        private List<byte[]> _bufs;
        private ProcessRepeatBytes m_root;
        private KaitaiStruct m_parent;
        private List<byte[]> __raw_bufs;
        public List<byte[]> Bufs { get { return _bufs; } }
        public ProcessRepeatBytes M_Root { get { return m_root; } }
        public KaitaiStruct M_Parent { get { return m_parent; } }
        public List<byte[]> M_RawBufs { get { return __raw_bufs; } }
    }
}
