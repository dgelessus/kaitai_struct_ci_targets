#ifndef VALID_NOT_PARSED_IF_H_
#define VALID_NOT_PARSED_IF_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class valid_not_parsed_if_t : public kaitai::kstruct {

public:

    valid_not_parsed_if_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, valid_not_parsed_if_t* p__root = 0);

private:
    void _read();

public:
    ~valid_not_parsed_if_t();

private:
    uint8_t m_not_parsed;
    bool n_not_parsed;

public:
    bool _is_null_not_parsed() { not_parsed(); return n_not_parsed; };

private:
    uint8_t m_parsed;
    bool n_parsed;

public:
    bool _is_null_parsed() { parsed(); return n_parsed; };

private:
    valid_not_parsed_if_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint8_t not_parsed() const { return m_not_parsed; }
    uint8_t parsed() const { return m_parsed; }
    valid_not_parsed_if_t* _root() const { return m__root; }
    virtual kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // VALID_NOT_PARSED_IF_H_
