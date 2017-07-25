// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "position_in_seq.h"



position_in_seq_t::position_in_seq_t(kaitai::kstream *p_io, kaitai::kstruct* p_parent, position_in_seq_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    f_header = false;
    _read();
}

void position_in_seq_t::_read() {
    int l_numbers = header()->qty_numbers();
    m_numbers = new std::vector<uint8_t>();
    m_numbers->reserve(l_numbers);
    for (int i = 0; i < l_numbers; i++) {
        m_numbers->push_back(m__io->read_u1());
    }
}

position_in_seq_t::~position_in_seq_t() {
    // numbers: Int1Type(false), isArray=true, hasRaw=false, hasIO=false
    delete m_numbers;
    if (f_header) {
        // header: UserTypeInstream(List(header_obj),None), isArray=false, hasRaw=false, hasIO=false
        delete m_header;
    }
}

position_in_seq_t::header_obj_t::header_obj_t(kaitai::kstream *p_io, position_in_seq_t* p_parent, position_in_seq_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    _read();
}

void position_in_seq_t::header_obj_t::_read() {
    m_qty_numbers = m__io->read_u4le();
}

position_in_seq_t::header_obj_t::~header_obj_t() {
    // qty_numbers: IntMultiType(false,Width4,Some(LittleEndian)), isArray=false, hasRaw=false, hasIO=false
}

position_in_seq_t::header_obj_t* position_in_seq_t::header() {
    if (f_header)
        return m_header;
    std::streampos _pos = m__io->pos();
    m__io->seek(16);
    m_header = new header_obj_t(m__io, this, m__root);
    m__io->seek(_pos);
    f_header = true;
    return m_header;
}
