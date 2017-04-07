// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var MultipleUse = (function() {
  function MultipleUse(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this.t1 = new Type1(this._io, this, this._root);
    this.t2 = new Type2(this._io, this, this._root);
  }

  var Multi = MultipleUse.Multi = (function() {
    function Multi(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this.value = this._io.readS4le();
    }

    return Multi;
  })();

  var Type1 = MultipleUse.Type1 = (function() {
    function Type1(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this.firstUse = new Multi(this._io, this, this._root);
    }

    return Type1;
  })();

  var Type2 = MultipleUse.Type2 = (function() {
    function Type2(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

    }
    Object.defineProperty(Type2.prototype, 'secondUse', {
      get: function() {
        if (this._m_secondUse !== undefined)
          return this._m_secondUse;
        var _pos = this._io.pos;
        this._io.seek(0);
        this._m_secondUse = new Multi(this._io, this, this._root);
        this._io.seek(_pos);
        return this._m_secondUse;
      }
    });

    return Type2;
  })();

  return MultipleUse;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('MultipleUse', [], function() {
    return MultipleUse;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = MultipleUse;
}