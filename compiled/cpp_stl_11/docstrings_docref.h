#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"

#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 7000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.7 or later is required"
#endif

/**
 * Another one-liner
 * \sa Source
 */

class docstrings_docref_t : public kaitai::kstruct {

public:

    docstrings_docref_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, docstrings_docref_t* p__root = 0);

private:
    void _read();

public:
    ~docstrings_docref_t();

private:
    bool f_foo;
    bool m_foo;

public:

    /**
     * \sa Doc ref for instance, a plain one
     */
    bool foo();

private:
    bool f_parse_inst;
    uint8_t m_parse_inst;

public:

    /**
     * \sa Now this is a really
     * long document ref that
     * spans multiple lines.
     */
    uint8_t parse_inst();

private:
    uint8_t m_one;
    uint8_t m_two;
    uint8_t m_three;
    docstrings_docref_t* m__root;
    kaitai::kstruct* m__parent;

public:

    /**
     * \sa Plain text description of doc ref, page 42
     */
    uint8_t one() const { return m_one; }

    /**
     * Both doc and doc-ref are defined
     * \sa Source
     */
    uint8_t two() const { return m_two; }

    /**
     * \sa Documentation name
     */
    uint8_t three() const { return m_three; }
    docstrings_docref_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};