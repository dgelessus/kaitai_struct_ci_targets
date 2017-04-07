// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "enum_if.h"

#include <iostream>
#include <fstream>

enum_if_t::enum_if_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, enum_if_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    m_op1 = new operation_t(m__io, this, m__root);
    m_op2 = new operation_t(m__io, this, m__root);
    m_op3 = new operation_t(m__io, this, m__root);
}

enum_if_t::~enum_if_t() {
    delete m_op1;
    delete m_op2;
    delete m_op3;
}

enum_if_t::operation_t::operation_t(kaitai::kstream *p_io, enum_if_t *p_parent, enum_if_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_opcode = static_cast<enum_if_t::opcodes_t>(m__io->read_u1());
    n_arg_tuple = true;
    if (opcode() == OPCODES_A_TUPLE) {
        n_arg_tuple = false;
        m_arg_tuple = new arg_tuple_t(m__io, this, m__root);
    }
    n_arg_str = true;
    if (opcode() == OPCODES_A_STRING) {
        n_arg_str = false;
        m_arg_str = new arg_str_t(m__io, this, m__root);
    }
}

enum_if_t::operation_t::~operation_t() {
    if (!n_arg_tuple) {
        delete m_arg_tuple;
    }
    if (!n_arg_str) {
        delete m_arg_str;
    }
}

enum_if_t::arg_tuple_t::arg_tuple_t(kaitai::kstream *p_io, enum_if_t::operation_t *p_parent, enum_if_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_num1 = m__io->read_u1();
    m_num2 = m__io->read_u1();
}

enum_if_t::arg_tuple_t::~arg_tuple_t() {
}

enum_if_t::arg_str_t::arg_str_t(kaitai::kstream *p_io, enum_if_t::operation_t *p_parent, enum_if_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_len = m__io->read_u1();
    m_str = kaitai::kstream::bytes_to_str(m__io->read_bytes(len()), std::string("UTF-8"));
}

enum_if_t::arg_str_t::~arg_str_t() {
}