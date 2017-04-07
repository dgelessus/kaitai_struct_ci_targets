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

public class ImportsCircularB extends KaitaiStruct {
    public static ImportsCircularB fromFile(String fileName) throws IOException {
        return new ImportsCircularB(new KaitaiStream(fileName));
    }

    public ImportsCircularB(KaitaiStream _io) {
        super(_io);
        this._root = this;
        _read();
    }

    public ImportsCircularB(KaitaiStream _io, KaitaiStruct _parent) {
        super(_io);
        this._parent = _parent;
        this._root = this;
        _read();
    }

    public ImportsCircularB(KaitaiStream _io, KaitaiStruct _parent, ImportsCircularB _root) {
        super(_io);
        this._parent = _parent;
        this._root = _root;
        _read();
    }
    private void _read() {
        this.initial = this._io.readU1();
        if (initial() == 65) {
            this.backRef = new ImportsCircularA(this._io);
        }
    }
    private int initial;
    private ImportsCircularA backRef;
    private ImportsCircularB _root;
    private KaitaiStruct _parent;
    public int initial() { return initial; }
    public ImportsCircularA backRef() { return backRef; }
    public ImportsCircularB _root() { return _root; }
    public KaitaiStruct _parent() { return _parent; }
}