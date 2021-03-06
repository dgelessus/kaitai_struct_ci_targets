// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import (
	"github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"
	"bytes"
)

type FixedContents struct {
	Normal []byte
	HighBit8 []byte
	_io *kaitai.Stream
	_root *FixedContents
	_parent interface{}
}
func NewFixedContents() *FixedContents {
	return &FixedContents{
	}
}

func (this *FixedContents) Read(io *kaitai.Stream, parent interface{}, root *FixedContents) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadBytes(int(6))
	if err != nil {
		return err
	}
	tmp1 = tmp1
	this.Normal = tmp1
	if !(bytes.Equal(this.Normal, []uint8{80, 65, 67, 75, 45, 49})) {
		return kaitai.NewValidationNotEqualError([]uint8{80, 65, 67, 75, 45, 49}, this.Normal, this._io, "/seq/0")
	}
	tmp2, err := this._io.ReadBytes(int(2))
	if err != nil {
		return err
	}
	tmp2 = tmp2
	this.HighBit8 = tmp2
	if !(bytes.Equal(this.HighBit8, []uint8{255, 255})) {
		return kaitai.NewValidationNotEqualError([]uint8{255, 255}, this.HighBit8, this._io, "/seq/1")
	}
	return err
}
