# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

use strict;
use warnings;
use IO::KaitaiStruct 0.007_000;

########################################################################
package EnumDeepLiterals;

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
    $self->{_root} = $_root || $self;;

    $self->_read();

    return $self;
}

sub _read {
    my ($self) = @_;

    $self->{pet_1} = $self->{_io}->read_u4le();
    $self->{pet_2} = $self->{_io}->read_u4le();
}

sub is_pet_1_ok {
    my ($self) = @_;
    return $self->{is_pet_1_ok} if ($self->{is_pet_1_ok});
    $self->{is_pet_1_ok} = $self->pet_1() == $EnumDeepLiterals::Container1::ANIMAL_CAT;
    return $self->{is_pet_1_ok};
}

sub is_pet_2_ok {
    my ($self) = @_;
    return $self->{is_pet_2_ok} if ($self->{is_pet_2_ok});
    $self->{is_pet_2_ok} = $self->pet_2() == $EnumDeepLiterals::Container1::Container2::ANIMAL_HARE;
    return $self->{is_pet_2_ok};
}

sub pet_1 {
    my ($self) = @_;
    return $self->{pet_1};
}

sub pet_2 {
    my ($self) = @_;
    return $self->{pet_2};
}

########################################################################
package EnumDeepLiterals::Container1;

our @ISA = 'IO::KaitaiStruct::Struct';

sub from_file {
    my ($class, $filename) = @_;
    my $fd;

    open($fd, '<', $filename) or return undef;
    binmode($fd);
    return new($class, IO::KaitaiStruct::Stream->new($fd));
}

our $ANIMAL_DOG = 4;
our $ANIMAL_CAT = 7;
our $ANIMAL_CHICKEN = 12;

sub new {
    my ($class, $_io, $_parent, $_root) = @_;
    my $self = IO::KaitaiStruct::Struct->new($_io);

    bless $self, $class;
    $self->{_parent} = $_parent;
    $self->{_root} = $_root || $self;;

    $self->_read();

    return $self;
}

sub _read {
    my ($self) = @_;

}

########################################################################
package EnumDeepLiterals::Container1::Container2;

our @ISA = 'IO::KaitaiStruct::Struct';

sub from_file {
    my ($class, $filename) = @_;
    my $fd;

    open($fd, '<', $filename) or return undef;
    binmode($fd);
    return new($class, IO::KaitaiStruct::Stream->new($fd));
}

our $ANIMAL_CANARY = 4;
our $ANIMAL_TURTLE = 7;
our $ANIMAL_HARE = 12;

sub new {
    my ($class, $_io, $_parent, $_root) = @_;
    my $self = IO::KaitaiStruct::Struct->new($_io);

    bless $self, $class;
    $self->{_parent} = $_parent;
    $self->{_root} = $_root || $self;;

    $self->_read();

    return $self;
}

sub _read {
    my ($self) = @_;

}

1;
