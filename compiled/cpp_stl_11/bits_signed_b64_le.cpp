// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "bits_signed_b64_le.h"

bits_signed_b64_le_t::bits_signed_b64_le_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, bits_signed_b64_le_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    _read();
}

void bits_signed_b64_le_t::_read() {
    m_a_num = m__io->read_bits_int_le(63);
    m_a_bit = m__io->read_bits_int_le(1);
    m_b_num = m__io->read_bits_int_le(63);
    m_b_bit = m__io->read_bits_int_le(1);
}

bits_signed_b64_le_t::~bits_signed_b64_le_t() {
    _clean_up();
}

void bits_signed_b64_le_t::_clean_up() {
}
