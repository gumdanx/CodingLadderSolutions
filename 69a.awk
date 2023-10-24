#!/usr/bin/awk -f

# This is the most concise version I managed to create.
# This AWK script runs faster than the optimized compilation of my C code.

NR==1 {
    j=$1;
    next
}

{
    x+=$1;
    y+=$2;
    z+=$3
}

END {
    if (x==0 && y==0 && z==0) print "YES";
    else print "NO"
}
