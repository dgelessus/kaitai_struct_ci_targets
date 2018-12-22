// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "if_struct.h"

#include <memory>

if_struct_t::if_struct_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, if_struct_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_op1 = nullptr;
    m_op2 = nullptr;
    m_op3 = nullptr;
    _read();
}

void if_struct_t::_read() {
    m_op1 = std::make_unique<operation_t>(m__io, this, m__root);
    m_op2 = std::make_unique<operation_t>(m__io, this, m__root);
    m_op3 = std::make_unique<operation_t>(m__io, this, m__root);
}

if_struct_t::~if_struct_t() {
}

if_struct_t::operation_t::operation_t(kaitai::kstream* p__io, if_struct_t* p__parent, if_struct_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_arg_tuple = nullptr;
    m_arg_str = nullptr;
    _read();
}

void if_struct_t::operation_t::_read() {
    m_opcode = m__io->read_u1();
    n_arg_tuple = true;
    if (opcode() == 84) {
        n_arg_tuple = false;
        m_arg_tuple = std::make_unique<arg_tuple_t>(m__io, this, m__root);
    }
    n_arg_str = true;
    if (opcode() == 83) {
        n_arg_str = false;
        m_arg_str = std::make_unique<arg_str_t>(m__io, this, m__root);
    }
}

if_struct_t::operation_t::~operation_t() {
    if (!n_arg_tuple) {
    }
    if (!n_arg_str) {
    }
}

if_struct_t::arg_tuple_t::arg_tuple_t(kaitai::kstream* p__io, if_struct_t::operation_t* p__parent, if_struct_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void if_struct_t::arg_tuple_t::_read() {
    m_num1 = m__io->read_u1();
    m_num2 = m__io->read_u1();
}

if_struct_t::arg_tuple_t::~arg_tuple_t() {
}

if_struct_t::arg_str_t::arg_str_t(kaitai::kstream* p__io, if_struct_t::operation_t* p__parent, if_struct_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void if_struct_t::arg_str_t::_read() {
    m_len = m__io->read_u1();
    m_str = kaitai::kstream::bytes_to_str(m__io->read_bytes(len()), std::string("UTF-8"));
}

if_struct_t::arg_str_t::~arg_str_t() {
}
