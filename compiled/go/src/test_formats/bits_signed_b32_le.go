// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"

type BitsSignedB32Le struct {
	ANum uint64
	ABit bool
	BNum uint64
	BBit bool
	_io *kaitai.Stream
	_root *BitsSignedB32Le
	_parent interface{}
}
func NewBitsSignedB32Le() *BitsSignedB32Le {
	return &BitsSignedB32Le{
	}
}

func (this *BitsSignedB32Le) Read(io *kaitai.Stream, parent interface{}, root *BitsSignedB32Le) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadBitsIntLe(31)
	if err != nil {
		return err
	}
	this.ANum = tmp1
	tmp2, err := this._io.ReadBitsIntLe(1)
	if err != nil {
		return err
	}
	this.ABit = tmp2 != 0
	tmp3, err := this._io.ReadBitsIntLe(31)
	if err != nil {
		return err
	}
	this.BNum = tmp3
	tmp4, err := this._io.ReadBitsIntLe(1)
	if err != nil {
		return err
	}
	this.BBit = tmp4 != 0
	return err
}
