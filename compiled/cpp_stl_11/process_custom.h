#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"

#include <stdint.h>
#include <memory>

#if KAITAI_STRUCT_VERSION < 7000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.7 or later is required"
#endif

class process_custom_t : public kaitai::kstruct {

public:

    process_custom_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, process_custom_t* p__root = nullptr);

private:
    void _read();

public:
    ~process_custom_t();

private:
    std::string m_buf1;
    std::string m_buf2;
    uint8_t m_key;
    std::string m_buf3;
    process_custom_t* m__root;
    kaitai::kstruct* m__parent;
    std::string m__raw_buf1;
    kaitai::kstream* m__io_buf1;
    std::string m__raw_buf2;
    kaitai::kstream* m__io_buf2;
    std::string m__raw_buf3;
    kaitai::kstream* m__io_buf3;

public:
    std::string buf1() const { return m_buf1; }
    std::string buf2() const { return m_buf2; }
    uint8_t key() const { return m_key; }
    std::string buf3() const { return m_buf3; }
    process_custom_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    std::string _raw_buf1() const { return m__raw_buf1; }
    kaitai::kstream* _io_buf1() const { return m__io_buf1; }
    std::string _raw_buf2() const { return m__raw_buf2; }
    kaitai::kstream* _io_buf2() const { return m__io_buf2; }
    std::string _raw_buf3() const { return m__raw_buf3; }
    kaitai::kstream* _io_buf3() const { return m__io_buf3; }
};
