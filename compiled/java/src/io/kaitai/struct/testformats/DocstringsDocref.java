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


/**
 * Another one-liner
 * @see <a href="http://www.example.com/some/path/?even_with=query&amp;more=2">Source</a>
 */
public class DocstringsDocref extends KaitaiStruct {
    public static DocstringsDocref fromFile(String fileName) throws IOException {
        return new DocstringsDocref(new KaitaiStream(fileName));
    }

    public DocstringsDocref(KaitaiStream _io) {
        super(_io);
        this._root = this;
        _read();
    }

    public DocstringsDocref(KaitaiStream _io, KaitaiStruct _parent) {
        super(_io);
        this._parent = _parent;
        this._root = this;
        _read();
    }

    public DocstringsDocref(KaitaiStream _io, KaitaiStruct _parent, DocstringsDocref _root) {
        super(_io);
        this._parent = _parent;
        this._root = _root;
        _read();
    }
    private void _read() {
        this.one = this._io.readU1();
        this.two = this._io.readU1();
        this.three = this._io.readU1();
    }
    private Boolean foo;

    /**
     * @see "Doc ref for instance, a plain one"
     */
    public Boolean foo() {
        if (this.foo != null)
            return this.foo;
        boolean _tmp = (boolean) (true);
        this.foo = _tmp;
        return this.foo;
    }
    private Integer parseInst;

    /**
     * @see "Now this is a really
     * long document ref that
     * spans multiple lines.
     * "
     */
    public Integer parseInst() {
        if (this.parseInst != null)
            return this.parseInst;
        long _pos = this._io.pos();
        this._io.seek(0);
        this.parseInst = this._io.readU1();
        this._io.seek(_pos);
        return this.parseInst;
    }
    private int one;
    private int two;
    private int three;
    private DocstringsDocref _root;
    private KaitaiStruct _parent;

    /**
     * @see "Plain text description of doc ref, page 42"
     */
    public int one() { return one; }

    /**
     * Both doc and doc-ref are defined
     * @see <a href="http://www.example.com/with/url/again">Source</a>
     */
    public int two() { return two; }

    /**
     * @see <a href="http://www.example.com/three">Documentation name</a>
     */
    public int three() { return three; }
    public DocstringsDocref _root() { return _root; }
    public KaitaiStruct _parent() { return _parent; }
}