@echo off
START cmd /K "cd %cd% & pdftotext.exe vwa.pdf -enc UTF-8 - >output.txt"