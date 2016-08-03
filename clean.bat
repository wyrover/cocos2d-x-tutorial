@echo off
cd /d %~dp0

for %%i in (.) do (    
pushd %%i
del /F /S /Q *.i *.exp *.aps *.idb *.ncp *.obj *.pch *.sbr *.tmp *.bsc *.ilk *.res *.ncb *.opt *.suo *.dep *.user *.orig
del *.suo /s /Q /ah
popd
)

RD /S /q ".vs"
RD /S /q "product"

pause