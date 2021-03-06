// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"

type IndexToParamEos struct {
	Qty uint32
	Sizes []uint32
	Blocks []*IndexToParamEos_Block
	_io *kaitai.Stream
	_root *IndexToParamEos
	_parent interface{}
}
func NewIndexToParamEos() *IndexToParamEos {
	return &IndexToParamEos{
	}
}

func (this *IndexToParamEos) Read(io *kaitai.Stream, parent interface{}, root *IndexToParamEos) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadU4le()
	if err != nil {
		return err
	}
	this.Qty = uint32(tmp1)
	this.Sizes = make([]uint32, this.Qty)
	for i := range this.Sizes {
		tmp2, err := this._io.ReadU4le()
		if err != nil {
			return err
		}
		this.Sizes[i] = tmp2
	}
	for i := 1;; i++ {
		tmp3, err := this._io.EOF()
		if err != nil {
			return err
		}
		if tmp3 {
			break
		}
		tmp4 := NewIndexToParamEos_Block(i)
		err = tmp4.Read(this._io, this, this._root)
		if err != nil {
			return err
		}
		this.Blocks = append(this.Blocks, tmp4)
	}
	return err
}
type IndexToParamEos_Block struct {
	Buf string
	Idx int32
	_io *kaitai.Stream
	_root *IndexToParamEos
	_parent *IndexToParamEos
}
func NewIndexToParamEos_Block(idx int32) *IndexToParamEos_Block {
	return &IndexToParamEos_Block{
		Idx: idx,
	}
}

func (this *IndexToParamEos_Block) Read(io *kaitai.Stream, parent *IndexToParamEos, root *IndexToParamEos) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp5, err := this._io.ReadBytes(int(this._root.Sizes[this.Idx]))
	if err != nil {
		return err
	}
	tmp5 = tmp5
	this.Buf = string(tmp5)
	return err
}
