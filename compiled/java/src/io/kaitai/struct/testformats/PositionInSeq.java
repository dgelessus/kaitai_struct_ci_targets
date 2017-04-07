// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package io.kaitai.struct.testformats;

import io.kaitai.struct.KaitaiStruct;
import io.kaitai.struct.KaitaiStream;

import java.io.IOException;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.nio.charset.Charset;

public class PositionInSeq extends KaitaiStruct {
    public static PositionInSeq fromFile(String fileName) throws IOException {
        return new PositionInSeq(new KaitaiStream(fileName));
    }

    public PositionInSeq(KaitaiStream _io) {
        super(_io);
        this._root = this;
        _read();
    }

    public PositionInSeq(KaitaiStream _io, KaitaiStruct _parent) {
        super(_io);
        this._parent = _parent;
        this._root = this;
        _read();
    }

    public PositionInSeq(KaitaiStream _io, KaitaiStruct _parent, PositionInSeq _root) {
        super(_io);
        this._parent = _parent;
        this._root = _root;
        _read();
    }
    private void _read() {
        numbers = new ArrayList<Integer>((int) (header().qtyNumbers()));
        for (int i = 0; i < header().qtyNumbers(); i++) {
            this.numbers.add(this._io.readU1());
        }
    }
    public static class HeaderObj extends KaitaiStruct {
        public static HeaderObj fromFile(String fileName) throws IOException {
            return new HeaderObj(new KaitaiStream(fileName));
        }

        public HeaderObj(KaitaiStream _io) {
            super(_io);
            _read();
        }

        public HeaderObj(KaitaiStream _io, PositionInSeq _parent) {
            super(_io);
            this._parent = _parent;
            _read();
        }

        public HeaderObj(KaitaiStream _io, PositionInSeq _parent, PositionInSeq _root) {
            super(_io);
            this._parent = _parent;
            this._root = _root;
            _read();
        }
        private void _read() {
            this.qtyNumbers = this._io.readU4le();
        }
        private long qtyNumbers;
        private PositionInSeq _root;
        private PositionInSeq _parent;
        public long qtyNumbers() { return qtyNumbers; }
        public PositionInSeq _root() { return _root; }
        public PositionInSeq _parent() { return _parent; }
    }
    private HeaderObj header;
    public HeaderObj header() {
        if (this.header != null)
            return this.header;
        long _pos = this._io.pos();
        this._io.seek(16);
        this.header = new HeaderObj(this._io, this, _root);
        this._io.seek(_pos);
        return this.header;
    }
    private ArrayList<Integer> numbers;
    private PositionInSeq _root;
    private KaitaiStruct _parent;
    public ArrayList<Integer> numbers() { return numbers; }
    public PositionInSeq _root() { return _root; }
    public KaitaiStruct _parent() { return _parent; }
}