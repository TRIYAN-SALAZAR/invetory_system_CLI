@echo off
REM Compilar el proyecto C++ usando MinGW (g++)
g++ -Iincludes -o build\main.exe src\main.cpp src\product_class.cpp
if %errorlevel% neq 0 (
    echo Compilation failed.
    exit /b %errorlevel%
) else (
    echo Compilation succeeded.
)