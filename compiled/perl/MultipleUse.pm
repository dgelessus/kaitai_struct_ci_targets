# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

use strict;
use warnings;
use IO::KaitaiStruct 0.007_000;
use Compress::Zlib;
use Encode;
use List::Util;

########################################################################
package MultipleUse;

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

    $self->{t1} = MultipleUse::Type1->new($self->{_io}, $self, $self->{_root});
    $self->{t2} = MultipleUse::Type2->new($self->{_io}, $self, $self->{_root});

    return $self;
}

sub t1 {
    my ($self) = @_;
    return $self->{t1};
}

sub t2 {
    my ($self) = @_;
    return $self->{t2};
}

########################################################################
package MultipleUse::Multi;

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

    $self->{value} = $self->{_io}->read_s4le();

    return $self;
}

sub value {
    my ($self) = @_;
    return $self->{value};
}

########################################################################
package MultipleUse::Type1;

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

    $self->{first_use} = MultipleUse::Multi->new($self->{_io}, $self, $self->{_root});

    return $self;
}

sub first_use {
    my ($self) = @_;
    return $self->{first_use};
}

########################################################################
package MultipleUse::Type2;

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


    return $self;
}

sub second_use {
    my ($self) = @_;
    return $self->{second_use} if ($self->{second_use});
    my $_pos = $self->{_io}->pos();
    $self->{_io}->seek(0);
    $self->{second_use} = MultipleUse::Multi->new($self->{_io}, $self, $self->{_root});
    $self->{_io}->seek($_pos);
    return $self->{second_use};
}

1;