#ifndef POSITION_IN_SEQ_H_
#define POSITION_IN_SEQ_H_

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

class position_in_seq_t : public kaitai::kstruct {

public:
    class header_obj_t;

    position_in_seq_t(kaitai::kstream* p_io, kaitai::kstruct* p_parent = 0, position_in_seq_t* p_root = 0);
    ~position_in_seq_t();

    class header_obj_t : public kaitai::kstruct {

    public:

        header_obj_t(kaitai::kstream* p_io, position_in_seq_t* p_parent = 0, position_in_seq_t* p_root = 0);
        ~header_obj_t();

    private:
        uint32_t m_qty_numbers;
        position_in_seq_t* m__root;
        position_in_seq_t* m__parent;

    public:
        uint32_t qty_numbers() const { return m_qty_numbers; }
        position_in_seq_t* _root() const { return m__root; }
        position_in_seq_t* _parent() const { return m__parent; }
    };

private:
    bool f_header;
    header_obj_t* m_header;

public:
    header_obj_t* header();

private:
    std::vector<uint8_t>* m_numbers;
    position_in_seq_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<uint8_t>* numbers() const { return m_numbers; }
    position_in_seq_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // POSITION_IN_SEQ_H_