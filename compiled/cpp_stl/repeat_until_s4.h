#ifndef REPEAT_UNTIL_S4_H_
#define REPEAT_UNTIL_S4_H_

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

class repeat_until_s4_t : public kaitai::kstruct {

public:

    repeat_until_s4_t(kaitai::kstream* p_io, kaitai::kstruct* p_parent = 0, repeat_until_s4_t* p_root = 0);
    ~repeat_until_s4_t();

private:
    std::vector<int32_t>* m_entries;
    std::string m_afterall;
    repeat_until_s4_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<int32_t>* entries() const { return m_entries; }
    std::string afterall() const { return m_afterall; }
    repeat_until_s4_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // REPEAT_UNTIL_S4_H_