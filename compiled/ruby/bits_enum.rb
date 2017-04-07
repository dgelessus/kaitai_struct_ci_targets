# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

require 'kaitai/struct/struct'
require 'zlib'

unless Gem::Version.new(Kaitai::Struct::VERSION) >= Gem::Version.new('0.7')
  raise "Incompatible Kaitai Struct Ruby API: 0.7 or later is required, but you have #{Kaitai::Struct::VERSION}"
end

class BitsEnum < Kaitai::Struct::Struct

  ANIMAL = {
    0 => :animal_cat,
    1 => :animal_dog,
    4 => :animal_horse,
    5 => :animal_platypus,
  }
  I__ANIMAL = ANIMAL.invert
  def initialize(_io, _parent = nil, _root = self)
    super(_io, _parent, _root)
    @one = Kaitai::Struct::Stream::resolve_enum(ANIMAL, @_io.read_bits_int(4))
    @two = Kaitai::Struct::Stream::resolve_enum(ANIMAL, @_io.read_bits_int(8))
    @three = Kaitai::Struct::Stream::resolve_enum(ANIMAL, @_io.read_bits_int(1))
  end
  attr_reader :one
  attr_reader :two
  attr_reader :three
end