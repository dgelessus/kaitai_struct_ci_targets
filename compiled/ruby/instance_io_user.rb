# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

require 'kaitai/struct/struct'
require 'zlib'

unless Gem::Version.new(Kaitai::Struct::VERSION) >= Gem::Version.new('0.7')
  raise "Incompatible Kaitai Struct Ruby API: 0.7 or later is required, but you have #{Kaitai::Struct::VERSION}"
end

class InstanceIoUser < Kaitai::Struct::Struct
  def initialize(_io, _parent = nil, _root = self)
    super(_io, _parent, _root)
    @qty_entries = @_io.read_u4le
    @entries = Array.new(qty_entries)
    (qty_entries).times { |i|
      @entries[i] = Entry.new(@_io, self, @_root)
    }
    @_raw_strings = @_io.read_bytes_full
    io = Kaitai::Struct::Stream.new(@_raw_strings)
    @strings = StringsObj.new(io, self, @_root)
  end
  class Entry < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      @name_ofs = @_io.read_u4le
      @value = @_io.read_u4le
    end
    def name
      return @name unless @name.nil?
      io = _root.strings._io
      _pos = io.pos
      io.seek(name_ofs)
      @name = (io.read_bytes_term(0, false, true, true)).force_encoding("UTF-8")
      io.seek(_pos)
      @name
    end
    attr_reader :name_ofs
    attr_reader :value
  end
  class StringsObj < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      @str = []
      while not @_io.eof?
        @str << (@_io.read_bytes_term(0, false, true, true)).force_encoding("UTF-8")
      end
    end
    attr_reader :str
  end
  attr_reader :qty_entries
  attr_reader :entries
  attr_reader :strings
  attr_reader :_raw_strings
end