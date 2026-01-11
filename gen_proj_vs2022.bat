@echo off
rmdir /s /q build 2>nul
mkdir build
cd build
cmake -G "Visual Studio 17" ..
