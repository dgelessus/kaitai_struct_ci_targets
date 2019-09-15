// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"

type FloatToI struct {
	SingleValue float32
	DoubleValue float64
	_io *kaitai.Stream
	_root *FloatToI
	_parent interface{}
	_f_float2I bool
	float2I int
	_f_calcFloat1 bool
	calcFloat1 float64
	_f_float4I bool
	float4I int
	_f_calcFloat3 bool
	calcFloat3 float64
	_f_calcFloat2 bool
	calcFloat2 float64
	_f_float1I bool
	float1I int
	_f_doubleI bool
	doubleI int
	_f_float3I bool
	float3I int
	_f_singleI bool
	singleI int
	_f_calcFloat4 bool
	calcFloat4 float64
}

func (this *FloatToI) Read(io *kaitai.Stream, parent interface{}, root *FloatToI) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadF4le()
	if err != nil {
		return err
	}
	this.SingleValue = float32(tmp1)
	tmp2, err := this._io.ReadF8le()
	if err != nil {
		return err
	}
	this.DoubleValue = float64(tmp2)
	return err
}
func (this *FloatToI) Float2I() (v int, err error) {
	if (this._f_float2I) {
		return this.float2I, nil
	}
	tmp3, err := this.CalcFloat2()
	if err != nil {
		return 0, err
	}
	this.float2I = int(int(tmp3))
	this._f_float2I = true
	return this.float2I, nil
}
func (this *FloatToI) CalcFloat1() (v float64, err error) {
	if (this._f_calcFloat1) {
		return this.calcFloat1, nil
	}
	this.calcFloat1 = float64(1.234)
	this._f_calcFloat1 = true
	return this.calcFloat1, nil
}
func (this *FloatToI) Float4I() (v int, err error) {
	if (this._f_float4I) {
		return this.float4I, nil
	}
	tmp4, err := this.CalcFloat4()
	if err != nil {
		return 0, err
	}
	this.float4I = int(int(tmp4))
	this._f_float4I = true
	return this.float4I, nil
}
func (this *FloatToI) CalcFloat3() (v float64, err error) {
	if (this._f_calcFloat3) {
		return this.calcFloat3, nil
	}
	this.calcFloat3 = float64(1.9)
	this._f_calcFloat3 = true
	return this.calcFloat3, nil
}
func (this *FloatToI) CalcFloat2() (v float64, err error) {
	if (this._f_calcFloat2) {
		return this.calcFloat2, nil
	}
	this.calcFloat2 = float64(1.5)
	this._f_calcFloat2 = true
	return this.calcFloat2, nil
}
func (this *FloatToI) Float1I() (v int, err error) {
	if (this._f_float1I) {
		return this.float1I, nil
	}
	tmp5, err := this.CalcFloat1()
	if err != nil {
		return 0, err
	}
	this.float1I = int(int(tmp5))
	this._f_float1I = true
	return this.float1I, nil
}
func (this *FloatToI) DoubleI() (v int, err error) {
	if (this._f_doubleI) {
		return this.doubleI, nil
	}
	this.doubleI = int(int(this.DoubleValue))
	this._f_doubleI = true
	return this.doubleI, nil
}
func (this *FloatToI) Float3I() (v int, err error) {
	if (this._f_float3I) {
		return this.float3I, nil
	}
	tmp6, err := this.CalcFloat3()
	if err != nil {
		return 0, err
	}
	this.float3I = int(int(tmp6))
	this._f_float3I = true
	return this.float3I, nil
}
func (this *FloatToI) SingleI() (v int, err error) {
	if (this._f_singleI) {
		return this.singleI, nil
	}
	this.singleI = int(int(this.SingleValue))
	this._f_singleI = true
	return this.singleI, nil
}
func (this *FloatToI) CalcFloat4() (v float64, err error) {
	if (this._f_calcFloat4) {
		return this.calcFloat4, nil
	}
	this.calcFloat4 = float64(-2.7)
	this._f_calcFloat4 = true
	return this.calcFloat4, nil
}
