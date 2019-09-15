// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import (
	"github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"
	"bytes"
)

type BufferedStruct struct {
	Len1 uint32
	Block1 *BufferedStruct_Block
	Len2 uint32
	Block2 *BufferedStruct_Block
	Finisher uint32
	_io *kaitai.Stream
	_root *BufferedStruct
	_parent interface{}
	_raw_Block1 []byte
	_raw_Block2 []byte
}

func (this *BufferedStruct) Read(io *kaitai.Stream, parent interface{}, root *BufferedStruct) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadU4le()
	if err != nil {
		return err
	}
	this.Len1 = uint32(tmp1)
	tmp2, err := this._io.ReadBytes(int(this.Len1))
	if err != nil {
		return err
	}
	this._raw_Block1 = tmp2
	_io__raw_Block1 := kaitai.NewStream(bytes.NewReader(this._raw_Block1))
	tmp3 := new(BufferedStruct_Block)
	err = tmp3.Read(_io__raw_Block1, this, this._root)
	if err != nil {
		return err
	}
	this.Block1 = tmp3
	tmp4, err := this._io.ReadU4le()
	if err != nil {
		return err
	}
	this.Len2 = uint32(tmp4)
	tmp5, err := this._io.ReadBytes(int(this.Len2))
	if err != nil {
		return err
	}
	this._raw_Block2 = tmp5
	_io__raw_Block2 := kaitai.NewStream(bytes.NewReader(this._raw_Block2))
	tmp6 := new(BufferedStruct_Block)
	err = tmp6.Read(_io__raw_Block2, this, this._root)
	if err != nil {
		return err
	}
	this.Block2 = tmp6
	tmp7, err := this._io.ReadU4le()
	if err != nil {
		return err
	}
	this.Finisher = uint32(tmp7)
	return err
}
type BufferedStruct_Block struct {
	Number1 uint32
	Number2 uint32
	_io *kaitai.Stream
	_root *BufferedStruct
	_parent *BufferedStruct
}

func (this *BufferedStruct_Block) Read(io *kaitai.Stream, parent *BufferedStruct, root *BufferedStruct) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp8, err := this._io.ReadU4le()
	if err != nil {
		return err
	}
	this.Number1 = uint32(tmp8)
	tmp9, err := this._io.ReadU4le()
	if err != nil {
		return err
	}
	this.Number2 = uint32(tmp9)
	return err
}
