# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

require 'kaitai/struct/struct'
require 'zlib'

unless Gem::Version.new(Kaitai::Struct::VERSION) >= Gem::Version.new('0.7')
  raise "Incompatible Kaitai Struct Ruby API: 0.7 or later is required, but you have #{Kaitai::Struct::VERSION}"
end

class NavParentOverride < Kaitai::Struct::Struct
  def initialize(_io, _parent = nil, _root = self)
    super(_io, _parent, _root)
    @child_size = @_io.read_u1
    @child_1 = Child.new(@_io, self, @_root)
    @mediator_2 = Mediator.new(@_io, self, @_root)
  end
  class Mediator < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      @child_2 = Child.new(@_io, _parent, @_root)
    end
    attr_reader :child_2
  end
  class Child < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      @data = @_io.read_bytes(_parent.child_size)
    end
    attr_reader :data
  end
  attr_reader :child_size
  attr_reader :child_1
  attr_reader :mediator_2
end