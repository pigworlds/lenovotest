#!/bin/bash


# Include GCC and LZ4 in PATH:
#export PATH="$(pwd)/x86_64-linux-glibc2.15-4.8/bin:$PATH"
#export PATH="$(pwd)/lz4:$PATH"
# Set ARCH and CROSS_COMPILE targets:
export ARCH=arm64
export CROSS_COMPILE="$(pwd)/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-"
# Add Android-specific flags:
export CCACHE_NODIRECT=true
export KCFLAGS=" -mno-android"
export KAFLAGS=" -mno-android"

rm -rf ./out-kernel
mkdir out-kernel

make -j24 -C kernel/msm-3.18 O=$(pwd)/out-kernel/ msmcortex-perf_defconfig
make -j24 -C kernel/msm-3.18 O=$(pwd)/out-kernel/ all 2>&1 | tee build_kernel.log 



#You can get kernel img:       out-kernel/arch/arm64/boot/zImage-dtb
