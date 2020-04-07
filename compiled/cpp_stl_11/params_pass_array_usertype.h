#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>
#include <vector>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class params_pass_array_usertype_t : public kaitai::kstruct {

public:
    class block_t;
    class param_type_t;

    params_pass_array_usertype_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, params_pass_array_usertype_t* p__root = nullptr);

private:
    void _read();

public:
    ~params_pass_array_usertype_t();

    class block_t : public kaitai::kstruct {

    public:

        block_t(kaitai::kstream* p__io, params_pass_array_usertype_t* p__parent = nullptr, params_pass_array_usertype_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~block_t();

    private:
        uint8_t m_foo;
        params_pass_array_usertype_t* m__root;
        params_pass_array_usertype_t* m__parent;

    public:
        uint8_t foo() const { return m_foo; }
        params_pass_array_usertype_t* _root() const { return m__root; }
        params_pass_array_usertype_t* _parent() const { return m__parent; }
    };

    class param_type_t : public kaitai::kstruct {

    public:

        param_type_t(std::vector<block_t*>* p_bar, kaitai::kstream* p__io, params_pass_array_usertype_t* p__parent = nullptr, params_pass_array_usertype_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~param_type_t();

    private:
        std::string m_one;
        std::string m_two;
        std::vector<block_t*>* m_bar;
        params_pass_array_usertype_t* m__root;
        params_pass_array_usertype_t* m__parent;

    public:
        std::string one() const { return m_one; }
        std::string two() const { return m_two; }
        std::vector<block_t*>* bar() const { return m_bar; }
        params_pass_array_usertype_t* _root() const { return m__root; }
        params_pass_array_usertype_t* _parent() const { return m__parent; }
    };

private:
    std::unique_ptr<std::vector<std::unique_ptr<block_t>>> m_blocks;
    std::unique_ptr<param_type_t> m_pass_blocks;
    params_pass_array_usertype_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<std::unique_ptr<block_t>>* blocks() const { return m_blocks.get(); }
    param_type_t* pass_blocks() const { return m_pass_blocks.get(); }
    params_pass_array_usertype_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};