# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

require 'kaitai/struct/struct'
require 'zlib'

unless Gem::Version.new(Kaitai::Struct::VERSION) >= Gem::Version.new('0.7')
  raise "Incompatible Kaitai Struct Ruby API: 0.7 or later is required, but you have #{Kaitai::Struct::VERSION}"
end

class NestedSameName < Kaitai::Struct::Struct
  def initialize(_io, _parent = nil, _root = self)
    super(_io, _parent, _root)
    @main_data = Main.new(@_io, self, @_root)
    @dummy = DummyObj.new(@_io, self, @_root)
  end
  class Main < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      @main_size = @_io.read_s4le
      @foo = FooObj.new(@_io, self, @_root)
    end
    class FooObj < Kaitai::Struct::Struct
      def initialize(_io, _parent = nil, _root = self)
        super(_io, _parent, _root)
        @data = @_io.read_bytes((_parent.main_size * 2))
      end
      attr_reader :data
    end
    attr_reader :main_size
    attr_reader :foo
  end
  class DummyObj < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
    end
    class Foo < Kaitai::Struct::Struct
      def initialize(_io, _parent = nil, _root = self)
        super(_io, _parent, _root)
      end
    end
  end
  attr_reader :main_data
  attr_reader :dummy
end