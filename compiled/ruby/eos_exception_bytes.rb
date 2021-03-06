# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

require 'kaitai/struct/struct'

unless Gem::Version.new(Kaitai::Struct::VERSION) >= Gem::Version.new('0.9')
  raise "Incompatible Kaitai Struct Ruby API: 0.9 or later is required, but you have #{Kaitai::Struct::VERSION}"
end

class EosExceptionBytes < Kaitai::Struct::Struct
  def initialize(_io, _parent = nil, _root = self)
    super(_io, _parent, _root)
    _read
  end

  def _read
    @_raw_envelope = @_io.read_bytes(6)
    _io__raw_envelope = Kaitai::Struct::Stream.new(@_raw_envelope)
    @envelope = Data.new(_io__raw_envelope, self, @_root)
    self
  end
  class Data < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      _read
    end

    def _read
      @buf = @_io.read_bytes(7)
      self
    end
    attr_reader :buf
  end
  attr_reader :envelope
  attr_reader :_raw_envelope
end
