// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "valid_fail_max_int.h"
#include "kaitai/exceptions.h"

valid_fail_max_int_t::valid_fail_max_int_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, valid_fail_max_int_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;

    try {
        _read();
    } catch(...) {
        _cleanUp();
        throw;
    }
}

void valid_fail_max_int_t::_read() {
    m_foo = m__io->read_u1();
    if (!(foo() <= 12)) {
        throw kaitai::validation_greater_than_error<uint8_t>(12, foo(), _io(), std::string("/seq/0"));
    }
}

valid_fail_max_int_t::~valid_fail_max_int_t() {
    _cleanUp();
}

void valid_fail_max_int_t::_cleanUp() {
}
