<?php
// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

namespace Kaitai\Struct\Tests;

class Enum1 extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Struct $parent = null, \Kaitai\Struct\Tests\Enum1 $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        $this->_m_main = new \Kaitai\Struct\Tests\Enum1\MainObj($this->_io, $this, $this->_root);
    }
    protected $_m_main;
    public function main() { return $this->_m_main; }
}

namespace Kaitai\Struct\Tests\Enum1;

class MainObj extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Tests\Enum1 $parent = null, \Kaitai\Struct\Tests\Enum1 $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        $this->_m_submain = new \Kaitai\Struct\Tests\Enum1\MainObj\SubmainObj($this->_io, $this, $this->_root);
    }
    protected $_m_submain;
    public function submain() { return $this->_m_submain; }
}

namespace Kaitai\Struct\Tests\Enum1\MainObj;

class SubmainObj extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Tests\Enum1\MainObj $parent = null, \Kaitai\Struct\Tests\Enum1 $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        $this->_m_pet1 = $this->_io->readU4le();
        $this->_m_pet2 = $this->_io->readU4le();
    }
    protected $_m_pet1;
    protected $_m_pet2;
    public function pet1() { return $this->_m_pet1; }
    public function pet2() { return $this->_m_pet2; }
}

namespace Kaitai\Struct\Tests\Enum1\MainObj;

class Animal {
    const DOG = 4;
    const CAT = 7;
    const CHICKEN = 12;
}
