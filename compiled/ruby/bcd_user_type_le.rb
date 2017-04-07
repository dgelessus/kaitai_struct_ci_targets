# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

require 'kaitai/struct/struct'
require 'zlib'

unless Gem::Version.new(Kaitai::Struct::VERSION) >= Gem::Version.new('0.7')
  raise "Incompatible Kaitai Struct Ruby API: 0.7 or later is required, but you have #{Kaitai::Struct::VERSION}"
end

class BcdUserTypeLe < Kaitai::Struct::Struct
  def initialize(_io, _parent = nil, _root = self)
    super(_io, _parent, _root)
    @_raw_ltr = @_io.read_bytes(4)
    io = Kaitai::Struct::Stream.new(@_raw_ltr)
    @ltr = LtrObj.new(io, self, @_root)
    @_raw_rtl = @_io.read_bytes(4)
    io = Kaitai::Struct::Stream.new(@_raw_rtl)
    @rtl = RtlObj.new(io, self, @_root)
    @_raw_leading_zero_ltr = @_io.read_bytes(4)
    io = Kaitai::Struct::Stream.new(@_raw_leading_zero_ltr)
    @leading_zero_ltr = LeadingZeroLtrObj.new(io, self, @_root)
  end
  class LtrObj < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      @b1 = @_io.read_u1
      @b2 = @_io.read_u1
      @b3 = @_io.read_u1
      @b4 = @_io.read_u1
    end
    def as_int
      return @as_int unless @as_int.nil?
      @as_int = ((((((((digit8 * 1) + (digit7 * 10)) + (digit6 * 100)) + (digit5 * 1000)) + (digit4 * 10000)) + (digit3 * 100000)) + (digit2 * 1000000)) + (digit1 * 10000000))
      @as_int
    end
    def digit2
      return @digit2 unless @digit2.nil?
      @digit2 = (b4 & 15)
      @digit2
    end
    def digit4
      return @digit4 unless @digit4.nil?
      @digit4 = (b3 & 15)
      @digit4
    end
    def digit3
      return @digit3 unless @digit3.nil?
      @digit3 = ((b3 & 240) >> 4)
      @digit3
    end
    def digit5
      return @digit5 unless @digit5.nil?
      @digit5 = ((b2 & 240) >> 4)
      @digit5
    end
    def digit8
      return @digit8 unless @digit8.nil?
      @digit8 = (b1 & 15)
      @digit8
    end
    def digit6
      return @digit6 unless @digit6.nil?
      @digit6 = (b2 & 15)
      @digit6
    end
    def as_str
      return @as_str unless @as_str.nil?
      @as_str = digit1.to_s(10) + digit2.to_s(10) + digit3.to_s(10) + digit4.to_s(10) + digit5.to_s(10) + digit6.to_s(10) + digit7.to_s(10) + digit8.to_s(10)
      @as_str
    end
    def digit1
      return @digit1 unless @digit1.nil?
      @digit1 = ((b4 & 240) >> 4)
      @digit1
    end
    def digit7
      return @digit7 unless @digit7.nil?
      @digit7 = ((b1 & 240) >> 4)
      @digit7
    end
    attr_reader :b1
    attr_reader :b2
    attr_reader :b3
    attr_reader :b4
  end
  class RtlObj < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      @b1 = @_io.read_u1
      @b2 = @_io.read_u1
      @b3 = @_io.read_u1
      @b4 = @_io.read_u1
    end
    def as_int
      return @as_int unless @as_int.nil?
      @as_int = ((((((((digit1 * 1) + (digit2 * 10)) + (digit3 * 100)) + (digit4 * 1000)) + (digit5 * 10000)) + (digit6 * 100000)) + (digit7 * 1000000)) + (digit8 * 10000000))
      @as_int
    end
    def digit2
      return @digit2 unless @digit2.nil?
      @digit2 = (b4 & 15)
      @digit2
    end
    def digit4
      return @digit4 unless @digit4.nil?
      @digit4 = (b3 & 15)
      @digit4
    end
    def digit3
      return @digit3 unless @digit3.nil?
      @digit3 = ((b3 & 240) >> 4)
      @digit3
    end
    def digit5
      return @digit5 unless @digit5.nil?
      @digit5 = ((b2 & 240) >> 4)
      @digit5
    end
    def digit8
      return @digit8 unless @digit8.nil?
      @digit8 = (b1 & 15)
      @digit8
    end
    def digit6
      return @digit6 unless @digit6.nil?
      @digit6 = (b2 & 15)
      @digit6
    end
    def as_str
      return @as_str unless @as_str.nil?
      @as_str = digit8.to_s(10) + digit7.to_s(10) + digit6.to_s(10) + digit5.to_s(10) + digit4.to_s(10) + digit3.to_s(10) + digit2.to_s(10) + digit1.to_s(10)
      @as_str
    end
    def digit1
      return @digit1 unless @digit1.nil?
      @digit1 = ((b4 & 240) >> 4)
      @digit1
    end
    def digit7
      return @digit7 unless @digit7.nil?
      @digit7 = ((b1 & 240) >> 4)
      @digit7
    end
    attr_reader :b1
    attr_reader :b2
    attr_reader :b3
    attr_reader :b4
  end
  class LeadingZeroLtrObj < Kaitai::Struct::Struct
    def initialize(_io, _parent = nil, _root = self)
      super(_io, _parent, _root)
      @b1 = @_io.read_u1
      @b2 = @_io.read_u1
      @b3 = @_io.read_u1
      @b4 = @_io.read_u1
    end
    def as_int
      return @as_int unless @as_int.nil?
      @as_int = ((((((((digit8 * 1) + (digit7 * 10)) + (digit6 * 100)) + (digit5 * 1000)) + (digit4 * 10000)) + (digit3 * 100000)) + (digit2 * 1000000)) + (digit1 * 10000000))
      @as_int
    end
    def digit2
      return @digit2 unless @digit2.nil?
      @digit2 = (b4 & 15)
      @digit2
    end
    def digit4
      return @digit4 unless @digit4.nil?
      @digit4 = (b3 & 15)
      @digit4
    end
    def digit3
      return @digit3 unless @digit3.nil?
      @digit3 = ((b3 & 240) >> 4)
      @digit3
    end
    def digit5
      return @digit5 unless @digit5.nil?
      @digit5 = ((b2 & 240) >> 4)
      @digit5
    end
    def digit8
      return @digit8 unless @digit8.nil?
      @digit8 = (b1 & 15)
      @digit8
    end
    def digit6
      return @digit6 unless @digit6.nil?
      @digit6 = (b2 & 15)
      @digit6
    end
    def as_str
      return @as_str unless @as_str.nil?
      @as_str = digit1.to_s(10) + digit2.to_s(10) + digit3.to_s(10) + digit4.to_s(10) + digit5.to_s(10) + digit6.to_s(10) + digit7.to_s(10) + digit8.to_s(10)
      @as_str
    end
    def digit1
      return @digit1 unless @digit1.nil?
      @digit1 = ((b4 & 240) >> 4)
      @digit1
    end
    def digit7
      return @digit7 unless @digit7.nil?
      @digit7 = ((b1 & 240) >> 4)
      @digit7
    end
    attr_reader :b1
    attr_reader :b2
    attr_reader :b3
    attr_reader :b4
  end
  attr_reader :ltr
  attr_reader :rtl
  attr_reader :leading_zero_ltr
  attr_reader :_raw_ltr
  attr_reader :_raw_rtl
  attr_reader :_raw_leading_zero_ltr
end