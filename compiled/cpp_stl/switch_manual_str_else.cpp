// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "switch_manual_str_else.h"

#include <iostream>
#include <fstream>

switch_manual_str_else_t::switch_manual_str_else_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, switch_manual_str_else_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    m_opcodes = new std::vector<opcode_t*>();
    while (!m__io->is_eof()) {
        m_opcodes->push_back(new opcode_t(m__io, this, m__root));
    }
}

switch_manual_str_else_t::~switch_manual_str_else_t() {
    for (std::vector<opcode_t*>::iterator it = m_opcodes->begin(); it != m_opcodes->end(); ++it) {
        delete *it;
    }
    delete m_opcodes;
}

switch_manual_str_else_t::opcode_t::opcode_t(kaitai::kstream *p_io, switch_manual_str_else_t *p_parent, switch_manual_str_else_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_code = kaitai::kstream::bytes_to_str(m__io->read_bytes(1), std::string("ASCII"));
    {
        std::string on = code();
        if (on == std::string("I")) {
            m_body = new intval_t(m__io, this, m__root);
        }
        else if (on == std::string("S")) {
            m_body = new strval_t(m__io, this, m__root);
        }
        else {
            m_body = new noneval_t(m__io, this, m__root);
        }
    }
}

switch_manual_str_else_t::opcode_t::~opcode_t() {
}

switch_manual_str_else_t::opcode_t::intval_t::intval_t(kaitai::kstream *p_io, switch_manual_str_else_t::opcode_t *p_parent, switch_manual_str_else_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_value = m__io->read_u1();
}

switch_manual_str_else_t::opcode_t::intval_t::~intval_t() {
}

switch_manual_str_else_t::opcode_t::strval_t::strval_t(kaitai::kstream *p_io, switch_manual_str_else_t::opcode_t *p_parent, switch_manual_str_else_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_value = kaitai::kstream::bytes_to_str(m__io->read_bytes_term(0, false, true, true), std::string("ASCII"));
}

switch_manual_str_else_t::opcode_t::strval_t::~strval_t() {
}

switch_manual_str_else_t::opcode_t::noneval_t::noneval_t(kaitai::kstream *p_io, switch_manual_str_else_t::opcode_t *p_parent, switch_manual_str_else_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_filler = m__io->read_u4le();
}

switch_manual_str_else_t::opcode_t::noneval_t::~noneval_t() {
}