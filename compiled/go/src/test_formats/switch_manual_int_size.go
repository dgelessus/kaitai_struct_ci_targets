// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import (
	"github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"
	"bytes"
)

type SwitchManualIntSize struct {
	Chunks []*SwitchManualIntSize_Chunk
	_io *kaitai.Stream
	_root *SwitchManualIntSize
	_parent interface{}
}

func (this *SwitchManualIntSize) Read(io *kaitai.Stream, parent interface{}, root *SwitchManualIntSize) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	for {
		tmp1, err := this._io.EOF()
		if err != nil {
			return err
		}
		if tmp1 {
			break
		}
		tmp2 := new(SwitchManualIntSize_Chunk)
		err = tmp2.Read(this._io, this, this._root)
		if err != nil {
			return err
		}
		this.Chunks = append(this.Chunks, tmp2)
	}
	return err
}
type SwitchManualIntSize_Chunk struct {
	Code uint8
	Size uint32
	Body interface{}
	_io *kaitai.Stream
	_root *SwitchManualIntSize
	_parent *SwitchManualIntSize
	_raw_Body []byte
}

func (this *SwitchManualIntSize_Chunk) Read(io *kaitai.Stream, parent *SwitchManualIntSize, root *SwitchManualIntSize) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp3, err := this._io.ReadU1()
	if err != nil {
		return err
	}
	this.Code = tmp3
	tmp4, err := this._io.ReadU4le()
	if err != nil {
		return err
	}
	this.Size = uint32(tmp4)
	switch (this.Code) {
	case 17:
		tmp5, err := this._io.ReadBytes(int(this.Size))
		if err != nil {
			return err
		}
		this._raw_Body = tmp5
		_io__raw_Body := kaitai.NewStream(bytes.NewReader(this._raw_Body))
		tmp6 := new(SwitchManualIntSize_Chunk_ChunkMeta)
		err = tmp6.Read(_io__raw_Body, this, this._root)
		if err != nil {
			return err
		}
		this.Body = tmp6
	case 34:
		tmp7, err := this._io.ReadBytes(int(this.Size))
		if err != nil {
			return err
		}
		this._raw_Body = tmp7
		_io__raw_Body := kaitai.NewStream(bytes.NewReader(this._raw_Body))
		tmp8 := new(SwitchManualIntSize_Chunk_ChunkDir)
		err = tmp8.Read(_io__raw_Body, this, this._root)
		if err != nil {
			return err
		}
		this.Body = tmp8
	default:
		tmp9, err := this._io.ReadBytes(int(this.Size))
		if err != nil {
			return err
		}
		this._raw_Body = tmp9
	}
	return err
}
type SwitchManualIntSize_Chunk_ChunkMeta struct {
	Title string
	Author string
	_io *kaitai.Stream
	_root *SwitchManualIntSize
	_parent *SwitchManualIntSize_Chunk
}

func (this *SwitchManualIntSize_Chunk_ChunkMeta) Read(io *kaitai.Stream, parent *SwitchManualIntSize_Chunk, root *SwitchManualIntSize) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp10, err := this._io.ReadBytesTerm(0, false, true, true)
	if err != nil {
		return err
	}
	this.Title = string(tmp10)
	tmp11, err := this._io.ReadBytesTerm(0, false, true, true)
	if err != nil {
		return err
	}
	this.Author = string(tmp11)
	return err
}
type SwitchManualIntSize_Chunk_ChunkDir struct {
	Entries []string
	_io *kaitai.Stream
	_root *SwitchManualIntSize
	_parent *SwitchManualIntSize_Chunk
}

func (this *SwitchManualIntSize_Chunk_ChunkDir) Read(io *kaitai.Stream, parent *SwitchManualIntSize_Chunk, root *SwitchManualIntSize) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	for {
		tmp12, err := this._io.EOF()
		if err != nil {
			return err
		}
		if tmp12 {
			break
		}
		tmp13, err := this._io.ReadBytes(int(4))
		if err != nil {
			return err
		}
		this.Entries = append(this.Entries, string(tmp13))
	}
	return err
}
