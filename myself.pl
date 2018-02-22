#!/usr/bin/perl
use strict;
use warnings;
sub myprint {
    my $s = $_[0];
    print $s;
    $s =~ s/\\/\\\\/g;
    $s =~ s/\n/\\n/g;
    $s =~ s/\$/\\\$/g;
    $s =~ s/\"/\\\"/g;
    $s =~ s/\'/\\\'/g;
    print $s;
    print "\";\n";
    print 'myprint $msg;';
    print "\n";
}
my $msg="#!/usr/bin/perl\nuse strict;\nuse warnings;\nsub myprint {\n    my \$s = \$_[0];\n    print \$s;\n    \$s =~ s/\\\\/\\\\\\\\/g;\n    \$s =~ s/\\n/\\\\n/g;\n    \$s =~ s/\\\$/\\\\\\\$/g;\n    \$s =~ s/\\\"/\\\\\\\"/g;\n    \$s =~ s/\\\'/\\\\\\\'/g;\n    print \$s;\n    print \"\\\";\\n\";\n    print \'myprint \$msg;\';\n    print \"\\n\";\n}\nmy \$msg=\"";
myprint $msg;
