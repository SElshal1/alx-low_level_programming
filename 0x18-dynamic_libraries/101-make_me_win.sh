#!/bin/bash
wget -P .. https://raw.githubusercontent.com/SElshal1/alx-low_level_programming/master/0x18-dynamic_libraries/libhc.so
export LD_PRELOAD="$PWD/../libhc.so"
