// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import (
	"github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"
	"bytes"
)

type ValidFailContents struct {
	Foo []byte
	_io *kaitai.Stream
	_root *ValidFailContents
	_parent interface{}
}
func NewValidFailContents() *ValidFailContents {
	return &ValidFailContents{
	}
}

func (this *ValidFailContents) Read(io *kaitai.Stream, parent interface{}, root *ValidFailContents) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadBytes(int(2))
	if err != nil {
		return err
	}
	tmp1 = tmp1
	this.Foo = tmp1
	if !(bytes.Equal(this.Foo, []uint8{81, 65})) {
		return kaitai.NewValidationNotEqualError([]uint8{81, 65}, this.Foo, this._io, "/seq/0")
	}
	return err
}
