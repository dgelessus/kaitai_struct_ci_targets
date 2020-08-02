#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class term_strz_t : public kaitai::kstruct {

public:

    term_strz_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, term_strz_t* p__root = nullptr);

private:
    void _read();

public:
    ~term_strz_t();
    void _cleanUp();

private:
    std::string m_s1;
    std::string m_s2;
    std::string m_s3;
    term_strz_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::string s1() const { return m_s1; }
    std::string s2() const { return m_s2; }
    std::string s3() const { return m_s3; }
    term_strz_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
