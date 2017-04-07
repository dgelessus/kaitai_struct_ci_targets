// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var Enum1 = (function() {
  function Enum1(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this.main = new MainObj(this._io, this, this._root);
  }

  var MainObj = Enum1.MainObj = (function() {
    MainObj.Animal = Object.freeze({
      DOG: 4,
      CAT: 7,
      CHICKEN: 12,

      4: "DOG",
      7: "CAT",
      12: "CHICKEN",
    });

    function MainObj(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this.submain = new SubmainObj(this._io, this, this._root);
    }

    var SubmainObj = MainObj.SubmainObj = (function() {
      function SubmainObj(_io, _parent, _root) {
        this._io = _io;
        this._parent = _parent;
        this._root = _root || this;

        this.pet1 = this._io.readU4le();
        this.pet2 = this._io.readU4le();
      }

      return SubmainObj;
    })();

    return MainObj;
  })();

  return Enum1;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('Enum1', [], function() {
    return Enum1;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = Enum1;
}