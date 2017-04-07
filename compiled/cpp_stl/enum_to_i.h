#ifndef ENUM_TO_I_H_
#define ENUM_TO_I_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <kaitai/kaitaistruct.h>
#include <kaitai/kaitaistream.h>

#include <stdint.h>
#include <vector>
#include <sstream>
#include <algorithm>

#if KAITAI_STRUCT_VERSION < 7000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.7 or later is required"
#endif

class enum_to_i_t : public kaitai::kstruct {

public:

    enum animal_t {
        ANIMAL_DOG = 4,
        ANIMAL_CAT = 7,
        ANIMAL_CHICKEN = 12
    };

    enum_to_i_t(kaitai::kstream* p_io, kaitai::kstruct* p_parent = 0, enum_to_i_t* p_root = 0);
    ~enum_to_i_t();

private:
    bool f_pet_1_i;
    int32_t m_pet_1_i;

public:
    int32_t pet_1_i();

private:
    bool f_pet_1_mod;
    int32_t m_pet_1_mod;

public:
    int32_t pet_1_mod();

private:
    bool f_one_lt_two;
    bool m_one_lt_two;

public:
    bool one_lt_two();

private:
    animal_t m_pet_1;
    animal_t m_pet_2;
    enum_to_i_t* m__root;
    kaitai::kstruct* m__parent;

public:
    animal_t pet_1() const { return m_pet_1; }
    animal_t pet_2() const { return m_pet_2; }
    enum_to_i_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // ENUM_TO_I_H_