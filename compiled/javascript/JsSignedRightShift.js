// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var JsSignedRightShift = (function() {
  function JsSignedRightShift(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this._read();
  }
  JsSignedRightShift.prototype._read = function() {
  }
  Object.defineProperty(JsSignedRightShift.prototype, 'shouldBe40000000', {
    get: function() {
      if (this._m_shouldBe40000000 !== undefined)
        return this._m_shouldBe40000000;
      this._m_shouldBe40000000 = (2147483648 >>> 1);
      return this._m_shouldBe40000000;
    }
  });
  Object.defineProperty(JsSignedRightShift.prototype, 'shouldBeA00000', {
    get: function() {
      if (this._m_shouldBeA00000 !== undefined)
        return this._m_shouldBeA00000;
      this._m_shouldBeA00000 = (2684354560 >>> 8);
      return this._m_shouldBeA00000;
    }
  });

  return JsSignedRightShift;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('JsSignedRightShift', [], function() {
    return JsSignedRightShift;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = JsSignedRightShift;
}
