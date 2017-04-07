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

public class IfInstances extends KaitaiStruct {
    public static IfInstances fromFile(String fileName) throws IOException {
        return new IfInstances(new KaitaiStream(fileName));
    }

    public IfInstances(KaitaiStream _io) {
        super(_io);
        this._root = this;
        _read();
    }

    public IfInstances(KaitaiStream _io, KaitaiStruct _parent) {
        super(_io);
        this._parent = _parent;
        this._root = this;
        _read();
    }

    public IfInstances(KaitaiStream _io, KaitaiStruct _parent, IfInstances _root) {
        super(_io);
        this._parent = _parent;
        this._root = _root;
        _read();
    }
    private void _read() {
    }
    private Integer neverHappens;
    public Integer neverHappens() {
        if (this.neverHappens != null)
            return this.neverHappens;
        if (false) {
            long _pos = this._io.pos();
            this._io.seek(100500);
            this.neverHappens = this._io.readU1();
            this._io.seek(_pos);
        }
        return this.neverHappens;
    }
    private IfInstances _root;
    private KaitaiStruct _parent;
    public IfInstances _root() { return _root; }
    public KaitaiStruct _parent() { return _parent; }
}