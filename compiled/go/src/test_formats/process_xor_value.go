// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"
type ProcessXorValue struct {
	Key uint8
	Buf []byte
	_io *kaitai.Stream
	_root *ProcessXorValue
	_parent interface{}
}

func (this *ProcessXorValue) Read(io *kaitai.Stream, parent interface{}, root *ProcessXorValue) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadU1()
	if err != nil {
		return err
	}
	this.Key = tmp1
	tmp2, err := this._io.ReadBytesFull()
	if err != nil {
		return err
	}
	this.Buf = tmp2
	return err
}
