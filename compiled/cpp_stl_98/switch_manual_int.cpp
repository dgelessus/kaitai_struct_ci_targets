// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "switch_manual_int.h"

switch_manual_int_t::switch_manual_int_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, switch_manual_int_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_opcodes = 0;

    try {
        _read();
    } catch(...) {
        _cleanUp();
        throw;
    }
}

void switch_manual_int_t::_read() {
    m_opcodes = new std::vector<opcode_t*>();
    {
        int i = 0;
        while (!m__io->is_eof()) {
            m_opcodes->push_back(new opcode_t(m__io, this, m__root));
            i++;
        }
    }
}

switch_manual_int_t::~switch_manual_int_t() {
    _cleanUp();
}

void switch_manual_int_t::_cleanUp() {
    if (m_opcodes) {
        for (std::vector<opcode_t*>::iterator it = m_opcodes->begin(); it != m_opcodes->end(); ++it) {
            delete *it;
        }
        delete m_opcodes; m_opcodes = 0;
    }
}

switch_manual_int_t::opcode_t::opcode_t(kaitai::kstream* p__io, switch_manual_int_t* p__parent, switch_manual_int_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _cleanUp();
        throw;
    }
}

void switch_manual_int_t::opcode_t::_read() {
    m_code = m__io->read_u1();
    n_body = true;
    switch (code()) {
    case 73: {
        n_body = false;
        m_body = new intval_t(m__io, this, m__root);
        break;
    }
    case 83: {
        n_body = false;
        m_body = new strval_t(m__io, this, m__root);
        break;
    }
    }
}

switch_manual_int_t::opcode_t::~opcode_t() {
    _cleanUp();
}

void switch_manual_int_t::opcode_t::_cleanUp() {
    if (!n_body) {
        if (m_body) {
            delete m_body; m_body = 0;
        }
    }
}

switch_manual_int_t::opcode_t::intval_t::intval_t(kaitai::kstream* p__io, switch_manual_int_t::opcode_t* p__parent, switch_manual_int_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _cleanUp();
        throw;
    }
}

void switch_manual_int_t::opcode_t::intval_t::_read() {
    m_value = m__io->read_u1();
}

switch_manual_int_t::opcode_t::intval_t::~intval_t() {
    _cleanUp();
}

void switch_manual_int_t::opcode_t::intval_t::_cleanUp() {
}

switch_manual_int_t::opcode_t::strval_t::strval_t(kaitai::kstream* p__io, switch_manual_int_t::opcode_t* p__parent, switch_manual_int_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _cleanUp();
        throw;
    }
}

void switch_manual_int_t::opcode_t::strval_t::_read() {
    m_value = kaitai::kstream::bytes_to_str(m__io->read_bytes_term(0, false, true, true), std::string("ASCII"));
}

switch_manual_int_t::opcode_t::strval_t::~strval_t() {
    _cleanUp();
}

void switch_manual_int_t::opcode_t::strval_t::_cleanUp() {
}
