// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "nested_types2.h"

#include <memory>

nested_types2_t::nested_types2_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, nested_types2_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_one = nullptr;
    m_two = nullptr;
    _read();
}

void nested_types2_t::_read() {
    m_one = std::make_unique<subtype_a_t>(m__io, this, m__root);
    m_two = std::make_unique<subtype_b_t>(m__io, this, m__root);
}

nested_types2_t::~nested_types2_t() {
}

nested_types2_t::subtype_a_t::subtype_a_t(kaitai::kstream* p__io, nested_types2_t* p__parent, nested_types2_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_typed_at_root = nullptr;
    m_typed_here1 = nullptr;
    m_typed_here2 = nullptr;
    _read();
}

void nested_types2_t::subtype_a_t::_read() {
    m_typed_at_root = std::make_unique<subtype_b_t>(m__io, this, m__root);
    m_typed_here1 = std::make_unique<subtype_c_t>(m__io, this, m__root);
    m_typed_here2 = std::make_unique<subtype_cc_t>(m__io, this, m__root);
}

nested_types2_t::subtype_a_t::~subtype_a_t() {
}

nested_types2_t::subtype_a_t::subtype_c_t::subtype_c_t(kaitai::kstream* p__io, nested_types2_t::subtype_a_t* p__parent, nested_types2_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_typed_here = nullptr;
    m_typed_parent = nullptr;
    m_typed_root = nullptr;
    _read();
}

void nested_types2_t::subtype_a_t::subtype_c_t::_read() {
    m_value_c = m__io->read_s1();
    m_typed_here = std::make_unique<subtype_d_t>(m__io, this, m__root);
    m_typed_parent = std::make_unique<subtype_cc_t>(m__io, this, m__root);
    m_typed_root = std::make_unique<subtype_b_t>(m__io, this, m__root);
}

nested_types2_t::subtype_a_t::subtype_c_t::~subtype_c_t() {
}

nested_types2_t::subtype_a_t::subtype_c_t::subtype_d_t::subtype_d_t(kaitai::kstream* p__io, nested_types2_t::subtype_a_t::subtype_c_t* p__parent, nested_types2_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void nested_types2_t::subtype_a_t::subtype_c_t::subtype_d_t::_read() {
    m_value_d = m__io->read_s1();
}

nested_types2_t::subtype_a_t::subtype_c_t::subtype_d_t::~subtype_d_t() {
}

nested_types2_t::subtype_a_t::subtype_cc_t::subtype_cc_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, nested_types2_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void nested_types2_t::subtype_a_t::subtype_cc_t::_read() {
    m_value_cc = m__io->read_s1();
}

nested_types2_t::subtype_a_t::subtype_cc_t::~subtype_cc_t() {
}

nested_types2_t::subtype_b_t::subtype_b_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, nested_types2_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void nested_types2_t::subtype_b_t::_read() {
    m_value_b = m__io->read_s1();
}

nested_types2_t::subtype_b_t::~subtype_b_t() {
}
