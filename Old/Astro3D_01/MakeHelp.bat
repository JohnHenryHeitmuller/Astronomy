@echo off
REM -- First make map file from Microsoft Visual C++ generated resource.h
echo // MAKEHELP.BAT generated Help Map file.  Used by ASTRO3D.HPJ. >"hlp\Astro3D.hm"
echo. >>"hlp\Astro3D.hm"
echo // Commands (ID_* and IDM_*) >>"hlp\Astro3D.hm"
makehm ID_,HID_,0x10000 IDM_,HIDM_,0x10000 resource.h >>"hlp\Astro3D.hm"
echo. >>"hlp\Astro3D.hm"
echo // Prompts (IDP_*) >>"hlp\Astro3D.hm"
makehm IDP_,HIDP_,0x30000 resource.h >>"hlp\Astro3D.hm"
echo. >>"hlp\Astro3D.hm"
echo // Resources (IDR_*) >>"hlp\Astro3D.hm"
makehm IDR_,HIDR_,0x20000 resource.h >>"hlp\Astro3D.hm"
echo. >>"hlp\Astro3D.hm"
echo // Dialogs (IDD_*) >>"hlp\Astro3D.hm"
makehm IDD_,HIDD_,0x20000 resource.h >>"hlp\Astro3D.hm"
echo. >>"hlp\Astro3D.hm"
echo // Frame Controls (IDW_*) >>"hlp\Astro3D.hm"
makehm IDW_,HIDW_,0x50000 resource.h >>"hlp\Astro3D.hm"
REM -- Make help for Project ASTRO3D


echo Building Win32 Help files
start /wait hcw /C /E /M "hlp\Astro3D.hpj"
if errorlevel 1 goto :Error
if not exist "hlp\Astro3D.hlp" goto :Error
if not exist "hlp\Astro3D.cnt" goto :Error
echo.
if exist Debug\nul copy "hlp\Astro3D.hlp" Debug
if exist Debug\nul copy "hlp\Astro3D.cnt" Debug
if exist Release\nul copy "hlp\Astro3D.hlp" Release
if exist Release\nul copy "hlp\Astro3D.cnt" Release
echo.
goto :done

:Error
echo hlp\Astro3D.hpj(1) : error: Problem encountered creating help file

:done
echo.
