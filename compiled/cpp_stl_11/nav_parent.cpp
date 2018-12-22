// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "nav_parent.h"

#include <memory>

nav_parent_t::nav_parent_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, nav_parent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_header = nullptr;
    m_index = nullptr;
    _read();
}

void nav_parent_t::_read() {
    m_header = std::make_unique<header_obj_t>(m__io, this, m__root);
    m_index = std::make_unique<index_obj_t>(m__io, this, m__root);
}

nav_parent_t::~nav_parent_t() {
}

nav_parent_t::header_obj_t::header_obj_t(kaitai::kstream* p__io, nav_parent_t* p__parent, nav_parent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void nav_parent_t::header_obj_t::_read() {
    m_qty_entries = m__io->read_u4le();
    m_filename_len = m__io->read_u4le();
}

nav_parent_t::header_obj_t::~header_obj_t() {
}

nav_parent_t::index_obj_t::index_obj_t(kaitai::kstream* p__io, nav_parent_t* p__parent, nav_parent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_entries = nullptr;
    _read();
}

void nav_parent_t::index_obj_t::_read() {
    m_magic = m__io->read_bytes(4);
    int l_entries = _parent()->header()->qty_entries();
    m_entries = new std::vector<std::unique_ptr<entry_t>>();
    m_entries->reserve(l_entries);
    for (int i = 0; i < l_entries; i++) {
        m_entries->push_back(std::move(std::make_unique<entry_t>(m__io, this, m__root)));
    }
}

nav_parent_t::index_obj_t::~index_obj_t() {
}

nav_parent_t::entry_t::entry_t(kaitai::kstream* p__io, nav_parent_t::index_obj_t* p__parent, nav_parent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void nav_parent_t::entry_t::_read() {
    m_filename = kaitai::kstream::bytes_to_str(m__io->read_bytes(_parent()->_parent()->header()->filename_len()), std::string("UTF-8"));
}

nav_parent_t::entry_t::~entry_t() {
}
