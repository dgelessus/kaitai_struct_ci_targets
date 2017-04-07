// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var NavParent3 = (function() {
  function NavParent3(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this.ofsTags = this._io.readU4le();
    this.numTags = this._io.readU4le();
  }

  var Tag = NavParent3.Tag = (function() {
    function Tag(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this.name = KaitaiStream.bytesToStr(this._io.readBytes(4), "ASCII");
      this.ofs = this._io.readU4le();
      this.numItems = this._io.readU4le();
    }

    var TagChar = Tag.TagChar = (function() {
      function TagChar(_io, _parent, _root) {
        this._io = _io;
        this._parent = _parent;
        this._root = _root || this;

        this.content = KaitaiStream.bytesToStr(this._io.readBytes(this._parent.numItems), "ASCII");
      }

      return TagChar;
    })();
    Object.defineProperty(Tag.prototype, 'tagContent', {
      get: function() {
        if (this._m_tagContent !== undefined)
          return this._m_tagContent;
        var io = this._root._io;
        var _pos = io.pos;
        io.seek(this.ofs);
        switch (this.name) {
        case "RAHC":
          this._m_tagContent = new TagChar(io, this, this._root);
          break;
        }
        io.seek(_pos);
        return this._m_tagContent;
      }
    });

    return Tag;
  })();
  Object.defineProperty(NavParent3.prototype, 'tags', {
    get: function() {
      if (this._m_tags !== undefined)
        return this._m_tags;
      var _pos = this._io.pos;
      this._io.seek(this.ofsTags);
      this._m_tags = new Array(this.numTags);
      for (var i = 0; i < this.numTags; i++) {
        this._m_tags[i] = new Tag(this._io, this, this._root);
      }
      this._io.seek(_pos);
      return this._m_tags;
    }
  });

  return NavParent3;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('NavParent3', [], function() {
    return NavParent3;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = NavParent3;
}