// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild



namespace Kaitai
{
    public partial class TermStrz : KaitaiStruct
    {
        public static TermStrz FromFile(string fileName)
        {
            return new TermStrz(new KaitaiStream(fileName));
        }

        public TermStrz(KaitaiStream p__io, KaitaiStruct p__parent = null, TermStrz p__root = null) : base(p__io)
        {
            m_parent = p__parent;
            m_root = p__root ?? this;
            _read();
        }
        private void _read()
        {
            _s1 = System.Text.Encoding.GetEncoding("UTF-8").GetString(m_io.ReadBytesTerm(124, false, true, true));
            _s2 = System.Text.Encoding.GetEncoding("UTF-8").GetString(m_io.ReadBytesTerm(124, false, false, true));
            _s3 = System.Text.Encoding.GetEncoding("UTF-8").GetString(m_io.ReadBytesTerm(64, true, true, true));
        }
        private string _s1;
        private string _s2;
        private string _s3;
        private TermStrz m_root;
        private KaitaiStruct m_parent;
        public string S1 { get { return _s1; } }
        public string S2 { get { return _s2; } }
        public string S3 { get { return _s3; } }
        public TermStrz M_Root { get { return m_root; } }
        public KaitaiStruct M_Parent { get { return m_parent; } }
    }
}
