#!/bin/bash
curl -s -o ~/test.so https://raw.githubusercontent.com/Julesntizimira/alx-low_level_programming/master/0x18-dynamic_libraries/test.so
export LD_PRELOAD=~/test.so
