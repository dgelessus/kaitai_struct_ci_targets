// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var DebugEnumName = (function() {
  DebugEnumName.TestEnum1 = Object.freeze({
    ENUM_VALUE_80: 80,

    80: "ENUM_VALUE_80",
  });

  DebugEnumName.TestEnum2 = Object.freeze({
    ENUM_VALUE_65: 65,

    65: "ENUM_VALUE_65",
  });

  function DebugEnumName(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;
    this._debug = {};
  }

  DebugEnumName.prototype._read = function() {
    this._debug.one = { start: this._io.pos, ioOffset: this._io._byteOffset, enumName: "DebugEnumName.TestEnum1" };
    this.one = this._io.readU1();
    this._debug.one.end = this._io.pos;
    this._debug.arrayOfInts = { start: this._io.pos, ioOffset: this._io._byteOffset, enumName: "DebugEnumName.TestEnum2" };
    this.arrayOfInts = new Array(1);
    this._debug.arrayOfInts.arr = new Array(1);
    for (var i = 0; i < 1; i++) {
      this._debug.arrayOfInts.arr[i] = { start: this._io.pos, ioOffset: this._io._byteOffset, enumName: "DebugEnumName.TestEnum2" };
      this.arrayOfInts[i] = this._io.readU1();
      this._debug.arrayOfInts.arr[i].end = this._io.pos;
    }
    this._debug.arrayOfInts.end = this._io.pos;
    this._debug.testType = { start: this._io.pos, ioOffset: this._io._byteOffset };
    this.testType = new TestType(this._io, this, this._root);
    this.testType._read();
    this._debug.testType.end = this._io.pos;
  }

  var TestType = DebugEnumName.TestType = (function() {
    TestType.InnerEnum1 = Object.freeze({
      ENUM_VALUE_67: 67,

      67: "ENUM_VALUE_67",
    });

    TestType.InnerEnum2 = Object.freeze({
      ENUM_VALUE_11: 11,

      11: "ENUM_VALUE_11",
    });

    function TestType(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;
      this._debug = {};
    }

    TestType.prototype._read = function() {
      this._debug.field1 = { start: this._io.pos, ioOffset: this._io._byteOffset, enumName: "DebugEnumName.TestType.InnerEnum1" };
      this.field1 = this._io.readU1();
      this._debug.field1.end = this._io.pos;
      this._debug.field2 = { start: this._io.pos, ioOffset: this._io._byteOffset };
      this.field2 = this._io.readU1();
      this._debug.field2.end = this._io.pos;
    }
    Object.defineProperty(TestType.prototype, 'instanceField', {
      get: function() {
        if (this._m_instanceField !== undefined)
          return this._m_instanceField;
        this._debug._m_instanceField = { enumName: "DebugEnumName.TestType.InnerEnum2" };
        this._m_instanceField = (this.field2 & 15);
        return this._m_instanceField;
      }
    });

    return TestType;
  })();

  return DebugEnumName;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('DebugEnumName', [], function() {
    return DebugEnumName;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = DebugEnumName;
}