// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "opaque_external_type_02_parent.h"


#include "opaque_external_type_02_child.h"

opaque_external_type_02_parent_t::opaque_external_type_02_parent_t(kaitai::kstream *p_io, kaitai::kstruct* p_parent, opaque_external_type_02_parent_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    _read();
}

void opaque_external_type_02_parent_t::_read() {
    m_parent = new parent_obj_t(m__io, this, m__root);
}

opaque_external_type_02_parent_t::~opaque_external_type_02_parent_t() {
    // parent: UserTypeInstream(List(parent_obj),None), isArray=false, hasRaw=false, hasIO=false
    delete m_parent;
}

opaque_external_type_02_parent_t::parent_obj_t::parent_obj_t(kaitai::kstream *p_io, opaque_external_type_02_parent_t* p_parent, opaque_external_type_02_parent_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    _read();
}

void opaque_external_type_02_parent_t::parent_obj_t::_read() {
    m_child = new opaque_external_type_02_child_t(m__io);
}

opaque_external_type_02_parent_t::parent_obj_t::~parent_obj_t() {
    // child: UserTypeInstream(List(opaque_external_type_02_child),None), isArray=false, hasRaw=false, hasIO=false
    delete m_child;
}
