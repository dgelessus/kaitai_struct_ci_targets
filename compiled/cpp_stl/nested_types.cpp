// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "nested_types.h"



nested_types_t::nested_types_t(kaitai::kstream *p_io, kaitai::kstruct* p_parent, nested_types_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    _read();
}

void nested_types_t::_read() {
    m_one = new subtype_a_t(m__io, this, m__root);
    m_two = new subtype_b_t(m__io, this, m__root);
}

nested_types_t::~nested_types_t() {
    // one: UserTypeInstream(List(subtype_a),None), isArray=false, hasRaw=false, hasIO=false
    delete m_one;
    // two: UserTypeInstream(List(subtype_b),None), isArray=false, hasRaw=false, hasIO=false
    delete m_two;
}

nested_types_t::subtype_a_t::subtype_a_t(kaitai::kstream *p_io, nested_types_t* p_parent, nested_types_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    _read();
}

void nested_types_t::subtype_a_t::_read() {
    m_typed_at_root = new subtype_b_t(m__io, this, m__root);
    m_typed_here = new subtype_c_t(m__io, this, m__root);
}

nested_types_t::subtype_a_t::~subtype_a_t() {
    // typed_at_root: UserTypeInstream(List(subtype_b),None), isArray=false, hasRaw=false, hasIO=false
    delete m_typed_at_root;
    // typed_here: UserTypeInstream(List(subtype_c),None), isArray=false, hasRaw=false, hasIO=false
    delete m_typed_here;
}

nested_types_t::subtype_a_t::subtype_c_t::subtype_c_t(kaitai::kstream *p_io, nested_types_t::subtype_a_t* p_parent, nested_types_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    _read();
}

void nested_types_t::subtype_a_t::subtype_c_t::_read() {
    m_value_c = m__io->read_s1();
}

nested_types_t::subtype_a_t::subtype_c_t::~subtype_c_t() {
    // value_c: Int1Type(true), isArray=false, hasRaw=false, hasIO=false
}

nested_types_t::subtype_b_t::subtype_b_t(kaitai::kstream *p_io, kaitai::kstruct* p_parent, nested_types_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    _read();
}

void nested_types_t::subtype_b_t::_read() {
    m_value_b = m__io->read_s1();
}

nested_types_t::subtype_b_t::~subtype_b_t() {
    // value_b: Int1Type(true), isArray=false, hasRaw=false, hasIO=false
}
