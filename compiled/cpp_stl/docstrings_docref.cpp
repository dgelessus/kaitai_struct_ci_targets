// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "docstrings_docref.h"

#include <iostream>
#include <fstream>

docstrings_docref_t::docstrings_docref_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, docstrings_docref_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    f_foo = false;
    f_parse_inst = false;
    m_one = m__io->read_u1();
    m_two = m__io->read_u1();
    m_three = m__io->read_u1();
}

docstrings_docref_t::~docstrings_docref_t() {
}

bool docstrings_docref_t::foo() {
    if (f_foo)
        return m_foo;
    m_foo = true;
    f_foo = true;
    return m_foo;
}

uint8_t docstrings_docref_t::parse_inst() {
    if (f_parse_inst)
        return m_parse_inst;
    std::streampos _pos = m__io->pos();
    m__io->seek(0);
    m_parse_inst = m__io->read_u1();
    m__io->seek(_pos);
    f_parse_inst = true;
    return m_parse_inst;
}