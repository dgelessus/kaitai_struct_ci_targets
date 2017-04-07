// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "switch_manual_int.h"

#include <iostream>
#include <fstream>

switch_manual_int_t::switch_manual_int_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, switch_manual_int_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    m_opcodes = new std::vector<opcode_t*>();
    while (!m__io->is_eof()) {
        m_opcodes->push_back(new opcode_t(m__io, this, m__root));
    }
}

switch_manual_int_t::~switch_manual_int_t() {
    for (std::vector<opcode_t*>::iterator it = m_opcodes->begin(); it != m_opcodes->end(); ++it) {
        delete *it;
    }
    delete m_opcodes;
}

switch_manual_int_t::opcode_t::opcode_t(kaitai::kstream *p_io, switch_manual_int_t *p_parent, switch_manual_int_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_code = m__io->read_u1();
    switch (code()) {
    case 73:
        m_body = new intval_t(m__io, this, m__root);
        break;
    case 83:
        m_body = new strval_t(m__io, this, m__root);
        break;
    }
}

switch_manual_int_t::opcode_t::~opcode_t() {
}

switch_manual_int_t::opcode_t::intval_t::intval_t(kaitai::kstream *p_io, switch_manual_int_t::opcode_t *p_parent, switch_manual_int_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_value = m__io->read_u1();
}

switch_manual_int_t::opcode_t::intval_t::~intval_t() {
}

switch_manual_int_t::opcode_t::strval_t::strval_t(kaitai::kstream *p_io, switch_manual_int_t::opcode_t *p_parent, switch_manual_int_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_value = kaitai::kstream::bytes_to_str(m__io->read_bytes_term(0, false, true, true), std::string("ASCII"));
}

switch_manual_int_t::opcode_t::strval_t::~strval_t() {
}