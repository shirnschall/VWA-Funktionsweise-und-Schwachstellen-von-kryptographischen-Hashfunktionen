@echo off
START cmd /K "cd %cd% & pdftotext.exe vwa.pdf -enc UTF-8 - | "C:\Program Files (x86)\GnuWin32\bin\wc.exe" -m"