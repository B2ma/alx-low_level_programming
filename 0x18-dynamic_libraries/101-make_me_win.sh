#!/bin/bash
gcc -shared -fPIC -o win_jackpot.so win_jackpot.c
LD_PRELOAD=./win_jackpot.so ./gm 9 8 10 24 75 9
