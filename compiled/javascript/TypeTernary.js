// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var TypeTernary = (function() {
  function TypeTernary(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    if (!this.isHack) {
      this._raw_difWoHack = this._io.readBytes(1);
      var _io__raw_difWoHack = new KaitaiStream(this._raw_difWoHack);
      this.difWoHack = new Dummy(_io__raw_difWoHack, this, this._root);
    }
    this._raw__raw_difWithHack = this._io.readBytes(1);
    this._raw_difWithHack = KaitaiStream.processXorOne(this._raw__raw_difWithHack, 3);
    var _io__raw_difWithHack = new KaitaiStream(this._raw_difWithHack);
    this.difWithHack = new Dummy(_io__raw_difWithHack, this, this._root);
  }

  var Dummy = TypeTernary.Dummy = (function() {
    function Dummy(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this.value = this._io.readU1();
    }

    return Dummy;
  })();
  Object.defineProperty(TypeTernary.prototype, 'isHack', {
    get: function() {
      if (this._m_isHack !== undefined)
        return this._m_isHack;
      this._m_isHack = true;
      return this._m_isHack;
    }
  });
  Object.defineProperty(TypeTernary.prototype, 'dif', {
    get: function() {
      if (this._m_dif !== undefined)
        return this._m_dif;
      this._m_dif = (!this.isHack ? this.difWoHack : this.difWithHack);
      return this._m_dif;
    }
  });
  Object.defineProperty(TypeTernary.prototype, 'difValue', {
    get: function() {
      if (this._m_difValue !== undefined)
        return this._m_difValue;
      this._m_difValue = this.dif.value;
      return this._m_difValue;
    }
  });

  return TypeTernary;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('TypeTernary', [], function() {
    return TypeTernary;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = TypeTernary;
}