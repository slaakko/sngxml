@echo off
xcopy /Y /D ..\sxml\x64\Debug\sxmldomd.dll ..\bin
xcopy /Y /D ..\sxml\x64\Debug\sxmlxmld.dll ..\bin
xcopy /Y /D ..\sxml\x64\Debug\xmltesterd.exe ..\bin
xcopy /Y /D ..\sxml\x64\Debug\sxmldomd.lib ..\lib
xcopy /Y /D ..\sxml\x64\Debug\sxmlxmld.lib ..\lib
xcopy /Y /D ..\sxml\x64\Release\sxmldom.dll ..\bin
xcopy /Y /D ..\sxml\x64\Release\sxmlxml.dll ..\bin
xcopy /Y /D ..\sxml\x64\Release\xmltester.exe ..\bin
xcopy /Y /D ..\sxml\x64\Release\sxmldom.lib ..\lib
xcopy /Y /D ..\sxml\x64\Release\sxmlxml.lib ..\lib
