@echo off
call setEnv.bat
"D:\Program Files\MATLAB\toolbox\shared\coder\ninja\win64\ninja.exe" -t compdb cc cxx cudac > compile_commands.json
"D:\Program Files\MATLAB\toolbox\shared\coder\ninja\win64\ninja.exe" -v %*
