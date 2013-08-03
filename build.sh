#!/bin/sh
export export CROSS_COMPILE=~/kernel/toolchains/arm-unknown-linux-gnueabi-4.7.4/bin/arm-gnueabi-
make mrproper
make zram_shark_defconfig
time make -j3
echo ""
echo "Done"
