#!/usr/bin/sh
lime build linux -64 -release -neko
lime build linux -32 -release -neko
lime build windows   -release -neko

lime deploy linux -64 -release -neko
lime deploy linux -32 -release -neko
lime deploy windows   -release -neko

BUILD_VERSION=$(<export/.build)
BUILD_VERSION=$(expr $BUILD_VERSION - 3)
echo $BUILD_VERSION > export/.build


mkdir build/$BUILD_VERSION
cp export/linux64/neko/*.zip build/$BUILD_VERSION
rm export/linux64/neko/*.zip
cp export/linux/neko/*.zip build/$BUILD_VERSION
rm export/linux/neko/*.zip
cp export/windows/neko/*.zip build/$BUILD_VERSION
rm export/windows/neko/*.zip
