// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package io.kaitai.struct.testformats;

import io.kaitai.struct.ByteBufferKaitaiStream;
import io.kaitai.struct.KaitaiStruct;
import io.kaitai.struct.KaitaiStream;
import java.io.IOException;

public class BitsSignedB32Le extends KaitaiStruct {
    public static BitsSignedB32Le fromFile(String fileName) throws IOException {
        return new BitsSignedB32Le(new ByteBufferKaitaiStream(fileName));
    }

    public BitsSignedB32Le(KaitaiStream _io) {
        this(_io, null, null);
    }

    public BitsSignedB32Le(KaitaiStream _io, KaitaiStruct _parent) {
        this(_io, _parent, null);
    }

    public BitsSignedB32Le(KaitaiStream _io, KaitaiStruct _parent, BitsSignedB32Le _root) {
        super(_io);
        this._parent = _parent;
        this._root = _root == null ? this : _root;
        _read();
    }
    private void _read() {
        this.aNum = this._io.readBitsIntLe(31);
        this.aBit = this._io.readBitsIntLe(1) != 0;
        this.bNum = this._io.readBitsIntLe(31);
        this.bBit = this._io.readBitsIntLe(1) != 0;
    }
    private long aNum;
    private boolean aBit;
    private long bNum;
    private boolean bBit;
    private BitsSignedB32Le _root;
    private KaitaiStruct _parent;
    public long aNum() { return aNum; }
    public boolean aBit() { return aBit; }
    public long bNum() { return bNum; }
    public boolean bBit() { return bBit; }
    public BitsSignedB32Le _root() { return _root; }
    public KaitaiStruct _parent() { return _parent; }
}
