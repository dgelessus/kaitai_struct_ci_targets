#ifndef JS_SIGNED_RIGHT_SHIFT_H_
#define JS_SIGNED_RIGHT_SHIFT_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <kaitai/kaitaistruct.h>
#include <kaitai/kaitaistream.h>

#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 7000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.7 or later is required"
#endif

class js_signed_right_shift_t : public kaitai::kstruct {

public:

    js_signed_right_shift_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, js_signed_right_shift_t* p__root = 0);
    void _read();
    ~js_signed_right_shift_t();

private:
    bool f_should_be_40000000;
    int32_t m_should_be_40000000;

public:
    int32_t should_be_40000000();

private:
    bool f_should_be_a00000;
    int32_t m_should_be_a00000;

public:
    int32_t should_be_a00000();

private:
    js_signed_right_shift_t* m__root;
    kaitai::kstruct* m__parent;

public:
    js_signed_right_shift_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // JS_SIGNED_RIGHT_SHIFT_H_
