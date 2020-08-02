#ifndef STR_PAD_TERM_EMPTY_H_
#define STR_PAD_TERM_EMPTY_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class str_pad_term_empty_t : public kaitai::kstruct {

public:

    str_pad_term_empty_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, str_pad_term_empty_t* p__root = 0);

private:
    void _read();

public:
    ~str_pad_term_empty_t();
    void _cleanUp();

private:
    std::string m_str_pad;
    std::string m_str_term;
    std::string m_str_term_and_pad;
    std::string m_str_term_include;
    str_pad_term_empty_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::string str_pad() const { return m_str_pad; }
    std::string str_term() const { return m_str_term; }
    std::string str_term_and_pad() const { return m_str_term_and_pad; }
    std::string str_term_include() const { return m_str_term_include; }
    str_pad_term_empty_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // STR_PAD_TERM_EMPTY_H_
