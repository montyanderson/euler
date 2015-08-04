#!/bin/bash

for f in *.cpp
do
    g++ "$f"
    echo $f
    time ./a.out >> /dev/null
done
