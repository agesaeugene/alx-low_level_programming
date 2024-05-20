#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Eugeneagesa734/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_preload="$PWD/../libhack.so" 
