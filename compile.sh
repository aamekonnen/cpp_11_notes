#!/bin/bash

build () {
    echo "Building source $1"
    out_binary="${1%.*}"
    g++ -std=c++0x -Wall -Wextra -Werror $1 -o ${out_binary}
}

# build the input source file with g++
build $1