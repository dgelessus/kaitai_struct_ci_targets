// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var SwitchManualEnum = (function() {
  function SwitchManualEnum(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this.opcodes = [];
    while (!this._io.isEof()) {
      this.opcodes.push(new Opcode(this._io, this, this._root));
    }
  }

  var Opcode = SwitchManualEnum.Opcode = (function() {
    Opcode.CodeEnum = Object.freeze({
      INTVAL: 73,
      STRVAL: 83,

      73: "INTVAL",
      83: "STRVAL",
    });

    function Opcode(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this.code = this._io.readU1();
      switch (this.code) {
      case SwitchManualEnum.Opcode.CodeEnum.INTVAL:
        this.body = new Intval(this._io, this, this._root);
        break;
      case SwitchManualEnum.Opcode.CodeEnum.STRVAL:
        this.body = new Strval(this._io, this, this._root);
        break;
      }
    }

    var Intval = Opcode.Intval = (function() {
      function Intval(_io, _parent, _root) {
        this._io = _io;
        this._parent = _parent;
        this._root = _root || this;

        this.value = this._io.readU1();
      }

      return Intval;
    })();

    var Strval = Opcode.Strval = (function() {
      function Strval(_io, _parent, _root) {
        this._io = _io;
        this._parent = _parent;
        this._root = _root || this;

        this.value = KaitaiStream.bytesToStr(this._io.readBytesTerm(0, false, true, true), "ASCII");
      }

      return Strval;
    })();

    return Opcode;
  })();

  return SwitchManualEnum;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('SwitchManualEnum', [], function() {
    return SwitchManualEnum;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = SwitchManualEnum;
}