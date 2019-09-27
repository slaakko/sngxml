@echo off
xcopy /Y /D ..\sngxml\x64\Debug\sngxmldomd.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Debug\sngxmlxmld.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Debug\xmltesterd.exe ..\bin
xcopy /Y /D ..\sngxml\x64\Debug\sngxmldomd.lib ..\lib
xcopy /Y /D ..\sngxml\x64\Debug\sngxmlxmld.lib ..\lib
xcopy /Y /D ..\sngxml\x64\Release\sngxmldom.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Release\sngxmlxml.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Release\xmltester.exe ..\bin
xcopy /Y /D ..\sngxml\x64\Release\sngxmldom.lib ..\lib
xcopy /Y /D ..\sngxml\x64\Release\sngxmlxml.lib ..\lib
