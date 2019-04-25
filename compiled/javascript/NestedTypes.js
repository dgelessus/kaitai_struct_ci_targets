// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

(function (root, factory) {
  if (typeof define === 'function' && define.amd) {
    define(['kaitai-struct/KaitaiStream'], factory);
  } else if (typeof module === 'object' && module.exports) {
    module.exports = factory(require('kaitai-struct/KaitaiStream'));
  } else {
    root.NestedTypes = factory(root.KaitaiStream);
  }
}(this, function (KaitaiStream) {
var NestedTypes = (function() {
  function NestedTypes(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this._read();
  }
  NestedTypes.prototype._read = function() {
    this.one = new SubtypeA(this._io, this, this._root);
    this.two = new SubtypeB(this._io, this, this._root);
  }

  var SubtypeA = NestedTypes.SubtypeA = (function() {
    function SubtypeA(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this._read();
    }
    SubtypeA.prototype._read = function() {
      this.typedAtRoot = new SubtypeB(this._io, this, this._root);
      this.typedHere = new SubtypeC(this._io, this, this._root);
    }

    var SubtypeC = SubtypeA.SubtypeC = (function() {
      function SubtypeC(_io, _parent, _root) {
        this._io = _io;
        this._parent = _parent;
        this._root = _root || this;

        this._read();
      }
      SubtypeC.prototype._read = function() {
        this.valueC = this._io.readS1();
      }

      return SubtypeC;
    })();

    return SubtypeA;
  })();

  var SubtypeB = NestedTypes.SubtypeB = (function() {
    function SubtypeB(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this._read();
    }
    SubtypeB.prototype._read = function() {
      this.valueB = this._io.readS1();
    }

    return SubtypeB;
  })();

  return NestedTypes;
})();
return NestedTypes;
}));
