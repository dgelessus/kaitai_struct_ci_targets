// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var StrLiterals = (function() {
  function StrLiterals(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

  }
  Object.defineProperty(StrLiterals.prototype, 'octalEatup2', {
    get: function() {
      if (this._m_octalEatup2 !== undefined)
        return this._m_octalEatup2;
      this._m_octalEatup2 = "\0022";
      return this._m_octalEatup2;
    }
  });
  Object.defineProperty(StrLiterals.prototype, 'backslashes', {
    get: function() {
      if (this._m_backslashes !== undefined)
        return this._m_backslashes;
      this._m_backslashes = "\\\\\\";
      return this._m_backslashes;
    }
  });
  Object.defineProperty(StrLiterals.prototype, 'octalEatup', {
    get: function() {
      if (this._m_octalEatup !== undefined)
        return this._m_octalEatup;
      this._m_octalEatup = "\00022";
      return this._m_octalEatup;
    }
  });
  Object.defineProperty(StrLiterals.prototype, 'doubleQuotes', {
    get: function() {
      if (this._m_doubleQuotes !== undefined)
        return this._m_doubleQuotes;
      this._m_doubleQuotes = "\"\"\"";
      return this._m_doubleQuotes;
    }
  });
  Object.defineProperty(StrLiterals.prototype, 'complexStr', {
    get: function() {
      if (this._m_complexStr !== undefined)
        return this._m_complexStr;
      this._m_complexStr = "\000\001\002\007\010\n\r\t\013\014\033=\007\n$\u263b";
      return this._m_complexStr;
    }
  });

  return StrLiterals;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('StrLiterals', [], function() {
    return StrLiterals;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = StrLiterals;
}