// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "enum_of_value_inst.h"

#include <iostream>
#include <fstream>

enum_of_value_inst_t::enum_of_value_inst_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, enum_of_value_inst_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    f_pet_3 = false;
    f_pet_4 = false;
    m_pet_1 = static_cast<enum_of_value_inst_t::animal_t>(m__io->read_u4le());
    m_pet_2 = static_cast<enum_of_value_inst_t::animal_t>(m__io->read_u4le());
}

enum_of_value_inst_t::~enum_of_value_inst_t() {
}

enum_of_value_inst_t::animal_t enum_of_value_inst_t::pet_3() {
    if (f_pet_3)
        return m_pet_3;
    m_pet_3 = static_cast<enum_of_value_inst_t::animal_t>(((pet_1() == ANIMAL_CAT) ? (4) : (12)));
    f_pet_3 = true;
    return m_pet_3;
}

enum_of_value_inst_t::animal_t enum_of_value_inst_t::pet_4() {
    if (f_pet_4)
        return m_pet_4;
    m_pet_4 = ((pet_1() == ANIMAL_CAT) ? (ANIMAL_DOG) : (ANIMAL_CHICKEN));
    f_pet_4 = true;
    return m_pet_4;
}