#!/bin/bash
wget -O /tmp/win.so https://github.com/Aaron-Ontoyin/alx-low_level_programming/blob/3ba0105be190790d69213c41a1f0143ed9731285/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so

