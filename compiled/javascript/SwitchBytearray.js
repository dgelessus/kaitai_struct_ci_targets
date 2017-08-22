// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var SwitchBytearray = (function() {
  function SwitchBytearray(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this._read();
  }
  SwitchBytearray.prototype._read = function() {
    this.opcodes = [];
    var i = 0;
    while (!this._io.isEof()) {
      this.opcodes.push(new Opcode(this._io, this, this._root));
      i++;
    }
  }

  var Opcode = SwitchBytearray.Opcode = (function() {
    function Opcode(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this._read();
    }
    Opcode.prototype._read = function() {
      this.code = this._io.readBytes(1);
      {
        var on = this.code;
        if ((KaitaiStream.byteArrayCompare(on, [73]) == 0)) {
          this.body = new Intval(this._io, this, this._root);
        }
        else if ((KaitaiStream.byteArrayCompare(on, [83]) == 0)) {
          this.body = new Strval(this._io, this, this._root);
        }
      }
    }

    var Intval = Opcode.Intval = (function() {
      function Intval(_io, _parent, _root) {
        this._io = _io;
        this._parent = _parent;
        this._root = _root || this;

        this._read();
      }
      Intval.prototype._read = function() {
        this.value = this._io.readU1();
      }

      return Intval;
    })();

    var Strval = Opcode.Strval = (function() {
      function Strval(_io, _parent, _root) {
        this._io = _io;
        this._parent = _parent;
        this._root = _root || this;

        this._read();
      }
      Strval.prototype._read = function() {
        this.value = KaitaiStream.bytesToStr(this._io.readBytesTerm(0, false, true, true), "ASCII");
      }

      return Strval;
    })();

    return Opcode;
  })();

  return SwitchBytearray;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('SwitchBytearray', [], function() {
    return SwitchBytearray;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = SwitchBytearray;
}
