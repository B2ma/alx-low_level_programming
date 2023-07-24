#!/bin/bash
export LD_PRELOAD=./improvised_rand.so
./gm 9 8 10 24 75 9
