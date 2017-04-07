// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "type_ternary_opaque.h"

#include <iostream>
#include <fstream>
#include "term_strz.h"

type_ternary_opaque_t::type_ternary_opaque_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, type_ternary_opaque_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    f_is_hack = false;
    f_dif = false;
    n_dif_wo_hack = true;
    if (!is_hack()) {
        n_dif_wo_hack = false;
        m__raw_dif_wo_hack = m__io->read_bytes(12);
        m__io__raw_dif_wo_hack = new kaitai::kstream(m__raw_dif_wo_hack);
        m_dif_wo_hack = new term_strz_t(m__io__raw_dif_wo_hack);
    }
    n_dif_with_hack = true;
    if (is_hack()) {
        n_dif_with_hack = false;
        m__raw__raw_dif_with_hack = m__io->read_bytes(12);
        m__raw_dif_with_hack = kaitai::kstream::process_xor_one(m__raw__raw_dif_with_hack, 3);
        m__io__raw_dif_with_hack = new kaitai::kstream(m__raw_dif_with_hack);
        m_dif_with_hack = new term_strz_t(m__io__raw_dif_with_hack);
    }
}

type_ternary_opaque_t::~type_ternary_opaque_t() {
    if (!n_dif_wo_hack) {
        delete m__io__raw_dif_wo_hack;
        delete m_dif_wo_hack;
    }
    if (!n_dif_with_hack) {
        delete m__io__raw_dif_with_hack;
        delete m_dif_with_hack;
    }
}

bool type_ternary_opaque_t::is_hack() {
    if (f_is_hack)
        return m_is_hack;
    m_is_hack = false;
    f_is_hack = true;
    return m_is_hack;
}

term_strz_t* type_ternary_opaque_t::dif() {
    if (f_dif)
        return m_dif;
    m_dif = ((!is_hack()) ? (dif_wo_hack()) : (dif_with_hack()));
    f_dif = true;
    return m_dif;
}