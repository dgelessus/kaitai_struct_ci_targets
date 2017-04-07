// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "nested_types2.h"

#include <iostream>
#include <fstream>

nested_types2_t::nested_types2_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, nested_types2_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    m_one = new subtype_a_t(m__io, this, m__root);
    m_two = new subtype_b_t(m__io, this, m__root);
}

nested_types2_t::~nested_types2_t() {
    delete m_one;
    delete m_two;
}

nested_types2_t::subtype_a_t::subtype_a_t(kaitai::kstream *p_io, nested_types2_t *p_parent, nested_types2_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_typed_at_root = new subtype_b_t(m__io, this, m__root);
    m_typed_here1 = new subtype_c_t(m__io, this, m__root);
    m_typed_here2 = new subtype_cc_t(m__io, this, m__root);
}

nested_types2_t::subtype_a_t::~subtype_a_t() {
    delete m_typed_at_root;
    delete m_typed_here1;
    delete m_typed_here2;
}

nested_types2_t::subtype_a_t::subtype_c_t::subtype_c_t(kaitai::kstream *p_io, nested_types2_t::subtype_a_t *p_parent, nested_types2_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_value_c = m__io->read_s1();
    m_typed_here = new subtype_d_t(m__io, this, m__root);
    m_typed_parent = new subtype_cc_t(m__io, this, m__root);
    m_typed_root = new subtype_b_t(m__io, this, m__root);
}

nested_types2_t::subtype_a_t::subtype_c_t::~subtype_c_t() {
    delete m_typed_here;
    delete m_typed_parent;
    delete m_typed_root;
}

nested_types2_t::subtype_a_t::subtype_c_t::subtype_d_t::subtype_d_t(kaitai::kstream *p_io, nested_types2_t::subtype_a_t::subtype_c_t *p_parent, nested_types2_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_value_d = m__io->read_s1();
}

nested_types2_t::subtype_a_t::subtype_c_t::subtype_d_t::~subtype_d_t() {
}

nested_types2_t::subtype_a_t::subtype_cc_t::subtype_cc_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, nested_types2_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_value_cc = m__io->read_s1();
}

nested_types2_t::subtype_a_t::subtype_cc_t::~subtype_cc_t() {
}

nested_types2_t::subtype_b_t::subtype_b_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, nested_types2_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    m_value_b = m__io->read_s1();
}

nested_types2_t::subtype_b_t::~subtype_b_t() {
}