#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/srs383/ECE5775/Labs/lab3/ecelinux/digitrec.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
