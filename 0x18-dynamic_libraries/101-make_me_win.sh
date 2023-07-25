#!/bin/bash
wget -P /tmp https://github.com/NajlaeAbbou/alx-low_level_programming/raw/master/0x18-dynamic_libraries/arandom.so
export LD_PRELOAD=/tmp/arandom.so
