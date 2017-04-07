#ifndef STR_ENCODINGS_H_
#define STR_ENCODINGS_H_

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

class str_encodings_t : public kaitai::kstruct {

public:

    str_encodings_t(kaitai::kstream* p_io, kaitai::kstruct* p_parent = 0, str_encodings_t* p_root = 0);
    ~str_encodings_t();

private:
    uint16_t m_len_of_1;
    std::string m_str1;
    uint16_t m_len_of_2;
    std::string m_str2;
    uint16_t m_len_of_3;
    std::string m_str3;
    uint16_t m_len_of_4;
    std::string m_str4;
    str_encodings_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint16_t len_of_1() const { return m_len_of_1; }
    std::string str1() const { return m_str1; }
    uint16_t len_of_2() const { return m_len_of_2; }
    std::string str2() const { return m_str2; }
    uint16_t len_of_3() const { return m_len_of_3; }
    std::string str3() const { return m_str3; }
    uint16_t len_of_4() const { return m_len_of_4; }
    std::string str4() const { return m_str4; }
    str_encodings_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // STR_ENCODINGS_H_