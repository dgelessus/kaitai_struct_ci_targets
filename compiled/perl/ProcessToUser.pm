# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

use strict;
use warnings;
use IO::KaitaiStruct 0.007_000;
use Compress::Zlib;
use Encode;
use List::Util;

########################################################################
package ProcessToUser;

our @ISA = 'IO::KaitaiStruct::Struct';

sub from_file {
    my ($class, $filename) = @_;
    my $fd;

    open($fd, '<', $filename) or return undef;
    binmode($fd);
    return new($class, IO::KaitaiStruct::Stream->new($fd));
}

sub new {
    my ($class, $_io, $_parent, $_root) = @_;
    my $self = IO::KaitaiStruct::Struct->new($_io);

    bless $self, $class;
    $self->{_parent} = $_parent;
    $self->{_root} = $_root || $self;

    $self->{_raw__raw_buf1} = $self->{_io}->read_bytes(5);
    $self->{_raw_buf1} = IO::KaitaiStruct::Stream::process_rotate_left($self->{_raw__raw_buf1}, 3, 1);
    my $io__raw_buf1 = IO::KaitaiStruct::Stream->new($self->{_raw_buf1});
    $self->{buf1} = ProcessToUser::JustStr->new($io__raw_buf1, $self, $self->{_root});

    return $self;
}

sub buf1 {
    my ($self) = @_;
    return $self->{buf1};
}

sub _raw__raw_buf1 {
    my ($self) = @_;
    return $self->{_raw__raw_buf1};
}

sub _raw_buf1 {
    my ($self) = @_;
    return $self->{_raw_buf1};
}

########################################################################
package ProcessToUser::JustStr;

our @ISA = 'IO::KaitaiStruct::Struct';

sub from_file {
    my ($class, $filename) = @_;
    my $fd;

    open($fd, '<', $filename) or return undef;
    binmode($fd);
    return new($class, IO::KaitaiStruct::Stream->new($fd));
}

sub new {
    my ($class, $_io, $_parent, $_root) = @_;
    my $self = IO::KaitaiStruct::Struct->new($_io);

    bless $self, $class;
    $self->{_parent} = $_parent;
    $self->{_root} = $_root || $self;

    $self->{str} = Encode::decode("UTF-8", $self->{_io}->read_bytes_full());

    return $self;
}

sub str {
    my ($self) = @_;
    return $self->{str};
}

1;