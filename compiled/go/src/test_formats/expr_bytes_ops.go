// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"

type ExprBytesOps struct {
	One []byte
	_io *kaitai.Stream
	_root *ExprBytesOps
	_parent interface{}
	_f_twoLast bool
	twoLast uint8
	_f_twoMax bool
	twoMax uint8
	_f_oneMin bool
	oneMin uint8
	_f_oneFirst bool
	oneFirst uint8
	_f_oneMid bool
	oneMid uint8
	_f_two bool
	two []byte
	_f_twoMin bool
	twoMin uint8
	_f_twoMid bool
	twoMid uint8
	_f_oneSize bool
	oneSize int
	_f_oneLast bool
	oneLast uint8
	_f_twoSize bool
	twoSize int
	_f_oneMax bool
	oneMax uint8
	_f_twoFirst bool
	twoFirst uint8
}

func (this *ExprBytesOps) Read(io *kaitai.Stream, parent interface{}, root *ExprBytesOps) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadBytes(int(3))
	if err != nil {
		return err
	}
	tmp1 = tmp1
	this.One = tmp1
	return err
}
func (this *ExprBytesOps) TwoLast() (v uint8, err error) {
	if (this._f_twoLast) {
		return this.twoLast, nil
	}
	tmp3, err := this.Two()
	if err != nil {
		return 0, err
	}
	tmp2 := tmp3
	this.twoLast = uint8(tmp2[len(tmp2) - 1])
	this._f_twoLast = true
	return this.twoLast, nil
}
func (this *ExprBytesOps) TwoMax() (v uint8, err error) {
	if (this._f_twoMax) {
		return this.twoMax, nil
	}
	tmp6, err := this.Two()
	if err != nil {
		return 0, err
	}
	tmp4 := tmp6[0]
	tmp7, err := this.Two()
	if err != nil {
		return 0, err
	}
	for _, tmp5 := range tmp7 {
		if tmp4 < tmp5 {
			tmp4 = tmp5
		}
	}
	this.twoMax = uint8(tmp4)
	this._f_twoMax = true
	return this.twoMax, nil
}
func (this *ExprBytesOps) OneMin() (v uint8, err error) {
	if (this._f_oneMin) {
		return this.oneMin, nil
	}
	tmp8 := this.One[0]
	for _, tmp9 := range this.One {
		if tmp8 > tmp9 {
			tmp8 = tmp9
		}
	}
	this.oneMin = uint8(tmp8)
	this._f_oneMin = true
	return this.oneMin, nil
}
func (this *ExprBytesOps) OneFirst() (v uint8, err error) {
	if (this._f_oneFirst) {
		return this.oneFirst, nil
	}
	this.oneFirst = uint8(this.One[0])
	this._f_oneFirst = true
	return this.oneFirst, nil
}
func (this *ExprBytesOps) OneMid() (v uint8, err error) {
	if (this._f_oneMid) {
		return this.oneMid, nil
	}
	this.oneMid = uint8(this.One[1])
	this._f_oneMid = true
	return this.oneMid, nil
}
func (this *ExprBytesOps) Two() (v []byte, err error) {
	if (this._f_two) {
		return this.two, nil
	}
	this.two = []byte([]uint8{65, 67, 75})
	this._f_two = true
	return this.two, nil
}
func (this *ExprBytesOps) TwoMin() (v uint8, err error) {
	if (this._f_twoMin) {
		return this.twoMin, nil
	}
	tmp12, err := this.Two()
	if err != nil {
		return 0, err
	}
	tmp10 := tmp12[0]
	tmp13, err := this.Two()
	if err != nil {
		return 0, err
	}
	for _, tmp11 := range tmp13 {
		if tmp10 > tmp11 {
			tmp10 = tmp11
		}
	}
	this.twoMin = uint8(tmp10)
	this._f_twoMin = true
	return this.twoMin, nil
}
func (this *ExprBytesOps) TwoMid() (v uint8, err error) {
	if (this._f_twoMid) {
		return this.twoMid, nil
	}
	tmp14, err := this.Two()
	if err != nil {
		return 0, err
	}
	this.twoMid = uint8(tmp14[1])
	this._f_twoMid = true
	return this.twoMid, nil
}
func (this *ExprBytesOps) OneSize() (v int, err error) {
	if (this._f_oneSize) {
		return this.oneSize, nil
	}
	this.oneSize = int(len(this.One))
	this._f_oneSize = true
	return this.oneSize, nil
}
func (this *ExprBytesOps) OneLast() (v uint8, err error) {
	if (this._f_oneLast) {
		return this.oneLast, nil
	}
	tmp15 := this.One
	this.oneLast = uint8(tmp15[len(tmp15) - 1])
	this._f_oneLast = true
	return this.oneLast, nil
}
func (this *ExprBytesOps) TwoSize() (v int, err error) {
	if (this._f_twoSize) {
		return this.twoSize, nil
	}
	tmp16, err := this.Two()
	if err != nil {
		return 0, err
	}
	this.twoSize = int(len(tmp16))
	this._f_twoSize = true
	return this.twoSize, nil
}
func (this *ExprBytesOps) OneMax() (v uint8, err error) {
	if (this._f_oneMax) {
		return this.oneMax, nil
	}
	tmp17 := this.One[0]
	for _, tmp18 := range this.One {
		if tmp17 < tmp18 {
			tmp17 = tmp18
		}
	}
	this.oneMax = uint8(tmp17)
	this._f_oneMax = true
	return this.oneMax, nil
}
func (this *ExprBytesOps) TwoFirst() (v uint8, err error) {
	if (this._f_twoFirst) {
		return this.twoFirst, nil
	}
	tmp19, err := this.Two()
	if err != nil {
		return 0, err
	}
	this.twoFirst = uint8(tmp19[0])
	this._f_twoFirst = true
	return this.twoFirst, nil
}
