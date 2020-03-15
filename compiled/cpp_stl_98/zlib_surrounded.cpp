// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "zlib_surrounded.h"

zlib_surrounded_t::zlib_surrounded_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, zlib_surrounded_t* /* p__root */) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_zlib = 0;
    m__io__raw_zlib = 0;
    _read();
}

void zlib_surrounded_t::_read() {
    m_pre = m__io->read_bytes(kaitai::to_signed(4));
    m__raw__raw_zlib = m__io->read_bytes(kaitai::to_signed(12));
    m__raw_zlib = kaitai::kstream::process_zlib(m__raw__raw_zlib);
    m__io__raw_zlib = new kaitai::kstream(m__raw_zlib);
    m_zlib = new inflated_t(m__io__raw_zlib, this, m__root);
    m_post = m__io->read_bytes(kaitai::to_signed(4));
}

zlib_surrounded_t::~zlib_surrounded_t() {
    delete m__io__raw_zlib;
    delete m_zlib;
}

zlib_surrounded_t::inflated_t::inflated_t(kaitai::kstream* p__io, zlib_surrounded_t* p__parent, zlib_surrounded_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void zlib_surrounded_t::inflated_t::_read() {
    m_inflated = m__io->read_s4le();
}

zlib_surrounded_t::inflated_t::~inflated_t() {
}
