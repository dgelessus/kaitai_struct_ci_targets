// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "opaque_external_type_02_parent.h"

#include <memory>
#include "opaque_external_type_02_child.h"

opaque_external_type_02_parent_t::opaque_external_type_02_parent_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, opaque_external_type_02_parent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_parent = nullptr;
    _read();
}

void opaque_external_type_02_parent_t::_read() {
    m_parent = std::make_unique<parent_obj_t>(m__io, this, m__root);
}

opaque_external_type_02_parent_t::~opaque_external_type_02_parent_t() {
}

opaque_external_type_02_parent_t::parent_obj_t::parent_obj_t(kaitai::kstream* p__io, opaque_external_type_02_parent_t* p__parent, opaque_external_type_02_parent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_child = nullptr;
    _read();
}

void opaque_external_type_02_parent_t::parent_obj_t::_read() {
    m_child = std::make_unique<opaque_external_type_02_child_t>(m__io);
}

opaque_external_type_02_parent_t::parent_obj_t::~parent_obj_t() {
}
