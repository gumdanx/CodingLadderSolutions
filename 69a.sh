#!/bin/bash

# Bash version: Faster than optimized C and AWK counterparts.

read -r j
x0=0 y0=0 z0=0
x1=0 y1=0 z1=0

read -r x0 y0 z0
for ((i=1; i<j; i++)); do
    read -r x1 y1 z1
    x0=$((x0 + x1))
    y0=$((y0 + y1))
    z0=$((z0 + z1))
done

if [ $x0 -eq 0 ] && [ $y0 -eq 0 ] && [ $z0 -eq 0 ]; then
    echo "YES"
else
    echo "NO"
fi
