# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

require 'kaitai/struct/struct'
require 'zlib'

unless Gem::Version.new(Kaitai::Struct::VERSION) >= Gem::Version.new('0.7')
  raise "Incompatible Kaitai Struct Ruby API: 0.7 or later is required, but you have #{Kaitai::Struct::VERSION}"
end

class SwitchIntegers < Kaitai::Struct::Struct
  def initialize(_io, _parent = nil, _root = self)
    super(_io, _parent, _root)
    @opcodes = []
    while not @_io.eof?
      @opcodes << Opcode.new(@_io, self, @_root)
    end
  end
  class Opcode < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      @code = @_io.read_u1
      case code
      when 1
        @body = @_io.read_u1
      when 2
        @body = @_io.read_u2le
      when 4
        @body = @_io.read_u4le
      when 8
        @body = @_io.read_u8le
      end
    end
    attr_reader :code
    attr_reader :body
  end
  attr_reader :opcodes
end