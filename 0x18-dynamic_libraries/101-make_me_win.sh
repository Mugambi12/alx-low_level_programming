#!/bin/bash

sleep 98
cp 101-make_me_win.so /tmp
export LD_PRELOAD=/tmp/101-make_me_win.so
