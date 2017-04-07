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

public class BufferedStruct extends KaitaiStruct {
    public static BufferedStruct fromFile(String fileName) throws IOException {
        return new BufferedStruct(new KaitaiStream(fileName));
    }

    public BufferedStruct(KaitaiStream _io) {
        super(_io);
        this._root = this;
        _read();
    }

    public BufferedStruct(KaitaiStream _io, KaitaiStruct _parent) {
        super(_io);
        this._parent = _parent;
        this._root = this;
        _read();
    }

    public BufferedStruct(KaitaiStream _io, KaitaiStruct _parent, BufferedStruct _root) {
        super(_io);
        this._parent = _parent;
        this._root = _root;
        _read();
    }
    private void _read() {
        this.len1 = this._io.readU4le();
        this._raw_block1 = this._io.readBytes(len1());
        KaitaiStream _io__raw_block1 = new KaitaiStream(_raw_block1);
        this.block1 = new Block(_io__raw_block1, this, _root);
        this.len2 = this._io.readU4le();
        this._raw_block2 = this._io.readBytes(len2());
        KaitaiStream _io__raw_block2 = new KaitaiStream(_raw_block2);
        this.block2 = new Block(_io__raw_block2, this, _root);
        this.finisher = this._io.readU4le();
    }
    public static class Block extends KaitaiStruct {
        public static Block fromFile(String fileName) throws IOException {
            return new Block(new KaitaiStream(fileName));
        }

        public Block(KaitaiStream _io) {
            super(_io);
            _read();
        }

        public Block(KaitaiStream _io, BufferedStruct _parent) {
            super(_io);
            this._parent = _parent;
            _read();
        }

        public Block(KaitaiStream _io, BufferedStruct _parent, BufferedStruct _root) {
            super(_io);
            this._parent = _parent;
            this._root = _root;
            _read();
        }
        private void _read() {
            this.number1 = this._io.readU4le();
            this.number2 = this._io.readU4le();
        }
        private long number1;
        private long number2;
        private BufferedStruct _root;
        private BufferedStruct _parent;
        public long number1() { return number1; }
        public long number2() { return number2; }
        public BufferedStruct _root() { return _root; }
        public BufferedStruct _parent() { return _parent; }
    }
    private long len1;
    private Block block1;
    private long len2;
    private Block block2;
    private long finisher;
    private BufferedStruct _root;
    private KaitaiStruct _parent;
    private byte[] _raw_block1;
    private byte[] _raw_block2;
    public long len1() { return len1; }
    public Block block1() { return block1; }
    public long len2() { return len2; }
    public Block block2() { return block2; }
    public long finisher() { return finisher; }
    public BufferedStruct _root() { return _root; }
    public KaitaiStruct _parent() { return _parent; }
    public byte[] _raw_block1() { return _raw_block1; }
    public byte[] _raw_block2() { return _raw_block2; }
}