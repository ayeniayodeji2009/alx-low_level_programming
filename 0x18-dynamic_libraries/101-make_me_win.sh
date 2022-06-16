#!/bin/bash
wget -P /tmp https://github.com/ayeniayodeji2009/alx-low_level_programming/edit/master/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/libmask.so
