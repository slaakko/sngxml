@echo off
xcopy /Y /D ..\sngxml\x64\Debug\sngxmldomd.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Debug\sngxmlxmld.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Debug\sngxmltesterd.exe ..\bin
xcopy /Y /D ..\sngxml\x64\Debug\sngxmldomd.lib ..\lib
xcopy /Y /D ..\sngxml\x64\Debug\sngxmlxmld.lib ..\lib
xcopy /Y /D ..\sngxml\x64\Debug\sngxmlxpathd.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Debug\sngxmlxpathd.lib ..\lib
xcopy /Y /D ..\sngxml\x64\Release\sngxmldom.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Release\sngxmlxml.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Release\sngxmltester.exe ..\bin
xcopy /Y /D ..\sngxml\x64\Release\sngxmldom.lib ..\lib
xcopy /Y /D ..\sngxml\x64\Release\sngxmlxml.lib ..\lib
xcopy /Y /D ..\sngxml\x64\Release\sngxmlxpath.dll ..\bin
xcopy /Y /D ..\sngxml\x64\Release\sngxmlxpath.lib ..\lib
