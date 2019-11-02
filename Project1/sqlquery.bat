@echo off

for /f "tokens=1-4 delims=/ " %%i in ("%date%") do (
     set dow=%%i
     set month=%%j
     set day=%%k
     set year=%%l
)
set /a day2="%day%-1"

set "now=%time: =0%"

    if "%now%" lss "07:30:00,00" ( set "day=%day2%" ) 
    if "%now%" geq "24:00:00,00" ( set "day=%day2%" )

set "shift1=0"
    if "%now%" lss "07:30:00,00" ( set "shift1=1" ) 
    if "%now%" geq "18:30:00,00" ( set "shift1=1" )

set datestr=%month%/%day%/%year%

sqlcmd -E -S bols75.am.mfg.mars -i SQLQuery9.sql -v date=%datestr% shift=%shift1% -o output1.txt

exit 0