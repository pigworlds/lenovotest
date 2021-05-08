#!/bin/bash


# Include GCC and LZ4 in PATH:
#export PATH="$(pwd)/x86_64-linux-glibc2.15-4.8/bin:$PATH"
#export PATH="$(pwd)/lz4:$PATH"
# Set ARCH and CROSS_COMPILE targets:
export ARCH=arm
export CROSS_COMPILE="$(pwd)/prebuilts/gcc/linux-x86/arm/arm-linux-androideabi-4.9/bin/arm-linux-androidkernel-"
# Add Android-specific flags:
export CCACHE_NODIRECT=true
export KCFLAGS=" -mno-android"
export KAFLAGS=" -mno-android"

rm -rf ./out-kernel
mkdir out-kernel

#make -j24 -C kernel/msm-3.18 O=$(pwd)/out-kernel/ msmcortex-perf_defconfig
cp container-config out-kernel/.config
make -j24 -C kernel/msm-3.18 O=$(pwd)/out-kernel/ all 2>&1 | tee build_kernel.log 

echo "Building wlan.ko"
git submodule init vendor/qcom/opensource/wlan/qcacld-2.0/
git submodule update vendor/qcom/opensource/wlan/qcacld-2.0/
cd vendor/qcom/opensource/wlan/qcacld-2.0
KERNEL_SRC=../../../../../kernel/msm-3.18 make -j24 O=$(pwd)/../../../../../out-kernel/
../../../../../kernel/msm-3.18/scripts/sign-file sha512 ../../../../../out-kernel/signing_key.priv ../../../../../out-kernel/signing_key.x509 wlan.ko
cd ../../../../..


#You can get kernel img:       out-kernel/arch/arm/boot/zImage-dtb
