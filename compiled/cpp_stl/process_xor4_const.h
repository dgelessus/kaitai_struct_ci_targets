#ifndef PROCESS_XOR4_CONST_H_
#define PROCESS_XOR4_CONST_H_

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

class process_xor4_const_t : public kaitai::kstruct {

public:

    process_xor4_const_t(kaitai::kstream* p_io, kaitai::kstruct* p_parent = 0, process_xor4_const_t* p_root = 0);
    ~process_xor4_const_t();

private:
    std::string m_key;
    std::string m_buf;
    process_xor4_const_t* m__root;
    kaitai::kstruct* m__parent;
    std::string m__raw_buf;

public:
    std::string key() const { return m_key; }
    std::string buf() const { return m_buf; }
    process_xor4_const_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    std::string _raw_buf() const { return m__raw_buf; }
};

#endif  // PROCESS_XOR4_CONST_H_