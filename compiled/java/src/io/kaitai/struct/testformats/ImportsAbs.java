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

public class ImportsAbs extends KaitaiStruct {
    public static ImportsAbs fromFile(String fileName) throws IOException {
        return new ImportsAbs(new KaitaiStream(fileName));
    }

    public ImportsAbs(KaitaiStream _io) {
        super(_io);
        this._root = this;
        _read();
    }

    public ImportsAbs(KaitaiStream _io, KaitaiStruct _parent) {
        super(_io);
        this._parent = _parent;
        this._root = this;
        _read();
    }

    public ImportsAbs(KaitaiStream _io, KaitaiStruct _parent, ImportsAbs _root) {
        super(_io);
        this._parent = _parent;
        this._root = _root;
        _read();
    }
    private void _read() {
        this.len = new VlqBase128Le(this._io);
        this.body = this._io.readBytes(len().value());
    }
    private VlqBase128Le len;
    private byte[] body;
    private ImportsAbs _root;
    private KaitaiStruct _parent;
    public VlqBase128Le len() { return len; }
    public byte[] body() { return body; }
    public ImportsAbs _root() { return _root; }
    public KaitaiStruct _parent() { return _parent; }
}