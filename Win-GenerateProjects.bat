@echo off
call thirdparty\bin\premake\premake5.exe vs2019
IF %ERRORLEVEL% NEQ 0 (
    PAUSE
)
PAUSE