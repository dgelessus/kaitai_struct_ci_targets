// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"


type EnumLongRangeS_Constants int
const (
	EnumLongRangeS_Constants__LongMin EnumLongRangeS_Constants = -9223372036854775808
	EnumLongRangeS_Constants__IntBelowMin EnumLongRangeS_Constants = -2147483649
	EnumLongRangeS_Constants__IntMin EnumLongRangeS_Constants = -2147483648
	EnumLongRangeS_Constants__Zero EnumLongRangeS_Constants = 0
	EnumLongRangeS_Constants__IntMax EnumLongRangeS_Constants = 2147483647
	EnumLongRangeS_Constants__IntOverMax EnumLongRangeS_Constants = 2147483648
	EnumLongRangeS_Constants__LongMax EnumLongRangeS_Constants = 9223372036854775807
)
type EnumLongRangeS struct {
	F1 EnumLongRangeS_Constants
	F2 EnumLongRangeS_Constants
	F3 EnumLongRangeS_Constants
	F4 EnumLongRangeS_Constants
	F5 EnumLongRangeS_Constants
	F6 EnumLongRangeS_Constants
	F7 EnumLongRangeS_Constants
	_io *kaitai.Stream
	_root *EnumLongRangeS
	_parent interface{}
}

func (this *EnumLongRangeS) Read(io *kaitai.Stream, parent interface{}, root *EnumLongRangeS) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadS8be()
	if err != nil {
		return err
	}
	this.F1 = EnumLongRangeS_Constants(tmp1)
	tmp2, err := this._io.ReadS8be()
	if err != nil {
		return err
	}
	this.F2 = EnumLongRangeS_Constants(tmp2)
	tmp3, err := this._io.ReadS8be()
	if err != nil {
		return err
	}
	this.F3 = EnumLongRangeS_Constants(tmp3)
	tmp4, err := this._io.ReadS8be()
	if err != nil {
		return err
	}
	this.F4 = EnumLongRangeS_Constants(tmp4)
	tmp5, err := this._io.ReadS8be()
	if err != nil {
		return err
	}
	this.F5 = EnumLongRangeS_Constants(tmp5)
	tmp6, err := this._io.ReadS8be()
	if err != nil {
		return err
	}
	this.F6 = EnumLongRangeS_Constants(tmp6)
	tmp7, err := this._io.ReadS8be()
	if err != nil {
		return err
	}
	this.F7 = EnumLongRangeS_Constants(tmp7)
	return err
}
