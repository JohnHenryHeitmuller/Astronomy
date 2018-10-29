@echo off
REM -- First make map file from Microsoft Visual C++ generated resource.h
echo // MAKEHELP.BAT generated Help Map file.  Used by STARMAP.HPJ. >"hlp\starmap.hm"
echo. >>"hlp\starmap.hm"
echo // Commands (ID_* and IDM_*) >>"hlp\starmap.hm"
makehm ID_,HID_,0x10000 IDM_,HIDM_,0x10000 resource.h >>"hlp\starmap.hm"
echo. >>"hlp\starmap.hm"
echo // Prompts (IDP_*) >>"hlp\starmap.hm"
makehm IDP_,HIDP_,0x30000 resource.h >>"hlp\starmap.hm"
echo. >>"hlp\starmap.hm"
echo // Resources (IDR_*) >>"hlp\starmap.hm"
makehm IDR_,HIDR_,0x20000 resource.h >>"hlp\starmap.hm"
echo. >>"hlp\starmap.hm"
echo // Dialogs (IDD_*) >>"hlp\starmap.hm"
makehm IDD_,HIDD_,0x20000 resource.h >>"hlp\starmap.hm"
echo. >>"hlp\starmap.hm"
echo // Frame Controls (IDW_*) >>"hlp\starmap.hm"
makehm IDW_,HIDW_,0x50000 resource.h >>"hlp\starmap.hm"
REM -- Make help for Project STARMAP


echo Building Win32 Help files
start /wait hcrtf -x "hlp\starmap.hpj"
echo.
if exist Debug\nul copy "hlp\starmap.hlp" Debug
if exist Debug\nul copy "hlp\starmap.cnt" Debug
if exist Release\nul copy "hlp\starmap.hlp" Release
if exist Release\nul copy "hlp\starmap.cnt" Release
echo.


