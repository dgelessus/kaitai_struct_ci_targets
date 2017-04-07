#ifndef DEBUG_ENUM_NAME_H_
#define DEBUG_ENUM_NAME_H_

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

class debug_enum_name_t : public kaitai::kstruct {

public:
    class test_type_t;

    enum test_enum1_t {
        TEST_ENUM1_ENUM_VALUE_80 = 80
    };

    enum test_enum2_t {
        TEST_ENUM2_ENUM_VALUE_65 = 65
    };

    debug_enum_name_t(kaitai::kstream* p_io, kaitai::kstruct* p_parent = 0, debug_enum_name_t* p_root = 0);
    ~debug_enum_name_t();

    class test_type_t : public kaitai::kstruct {

    public:

        enum inner_enum1_t {
            INNER_ENUM1_ENUM_VALUE_67 = 67
        };

        enum inner_enum2_t {
            INNER_ENUM2_ENUM_VALUE_11 = 11
        };

        test_type_t(kaitai::kstream* p_io, debug_enum_name_t* p_parent = 0, debug_enum_name_t* p_root = 0);
        ~test_type_t();

    private:
        bool f_instance_field;
        inner_enum2_t m_instance_field;

    public:
        inner_enum2_t instance_field();

    private:
        inner_enum1_t m_field1;
        uint8_t m_field2;
        debug_enum_name_t* m__root;
        debug_enum_name_t* m__parent;

    public:
        inner_enum1_t field1() const { return m_field1; }
        uint8_t field2() const { return m_field2; }
        debug_enum_name_t* _root() const { return m__root; }
        debug_enum_name_t* _parent() const { return m__parent; }
    };

private:
    test_enum1_t m_one;
    std::vector<test_enum2_t>* m_array_of_ints;
    test_type_t* m_test_type;
    debug_enum_name_t* m__root;
    kaitai::kstruct* m__parent;

public:
    test_enum1_t one() const { return m_one; }
    std::vector<test_enum2_t>* array_of_ints() const { return m_array_of_ints; }
    test_type_t* test_type() const { return m_test_type; }
    debug_enum_name_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // DEBUG_ENUM_NAME_H_