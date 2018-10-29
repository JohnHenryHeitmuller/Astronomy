# Microsoft Developer Studio Generated NMAKE File, Format Version 4.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

!IF "$(CFG)" == ""
CFG=starmap - Win32 Debug
!MESSAGE No configuration specified.  Defaulting to starmap - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "starmap - Win32 Release" && "$(CFG)" !=\
 "starmap - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE on this makefile
!MESSAGE by defining the macro CFG on the command line.  For example:
!MESSAGE 
!MESSAGE NMAKE /f "starmap.mak" CFG="starmap - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "starmap - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "starmap - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 
################################################################################
# Begin Project
# PROP Target_Last_Scanned "starmap - Win32 Debug"
MTL=mktyplib.exe
RSC=rc.exe
CPP=cl.exe

!IF  "$(CFG)" == "starmap - Win32 Release"

# PROP BASE Use_MFC 5
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 5
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
OUTDIR=.\Release
INTDIR=.\Release

ALL : "$(OUTDIR)\starmap.exe" "$(OUTDIR)\starmap.hlp"

CLEAN : 
	-@erase ".\Release\starmap.exe"
	-@erase ".\Release\starmapView.obj"
	-@erase ".\Release\starmap.pch"
	-@erase ".\Release\StdAfx.obj"
	-@erase ".\Release\MainFrm.obj"
	-@erase ".\Release\ChildFrm.obj"
	-@erase ".\Release\starmap.obj"
	-@erase ".\Release\YaleBSC.obj"
	-@erase ".\Release\mapdata.obj"
	-@erase ".\Release\starmapDoc.obj"
	-@erase ".\Release\starmap.res"
	-@erase ".\Release\starmap.map"
	-@erase ".\Release\starmap.hlp"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /Yu"stdafx.h" /c
CPP_PROJ=/nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_MBCS" /Fp"$(INTDIR)/starmap.pch" /Yu"stdafx.h" /Fo"$(INTDIR)/" /c 
CPP_OBJS=.\Release/
CPP_SBRS=
# ADD BASE MTL /nologo /D "NDEBUG" /win32
# ADD MTL /nologo /D "NDEBUG" /win32
MTL_PROJ=/nologo /D "NDEBUG" /win32 
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
RSC_PROJ=/l 0x409 /fo"$(INTDIR)/starmap.res" /d "NDEBUG" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/starmap.bsc" 
BSC32_SBRS=
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /profile /map /machine:I386
LINK32_FLAGS=/nologo /subsystem:windows /profile /map:"$(INTDIR)/starmap.map"\
 /machine:I386 /out:"$(OUTDIR)/starmap.exe" 
LINK32_OBJS= \
	"$(INTDIR)/starmapView.obj" \
	"$(INTDIR)/StdAfx.obj" \
	"$(INTDIR)/MainFrm.obj" \
	"$(INTDIR)/ChildFrm.obj" \
	"$(INTDIR)/starmap.obj" \
	"$(INTDIR)/YaleBSC.obj" \
	"$(INTDIR)/mapdata.obj" \
	"$(INTDIR)/starmapDoc.obj" \
	"$(INTDIR)/starmap.res"

"$(OUTDIR)\starmap.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

# PROP BASE Use_MFC 5
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 5
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
OUTDIR=.\Debug
INTDIR=.\Debug

ALL : "$(OUTDIR)\starmap.exe" "$(OUTDIR)\starmap.hlp"

CLEAN : 
	-@erase ".\Debug\vc40.pdb"
	-@erase ".\Debug\starmap.pch"
	-@erase ".\Debug\vc40.idb"
	-@erase ".\Debug\starmap.exe"
	-@erase ".\Debug\mapdata.obj"
	-@erase ".\Debug\StdAfx.obj"
	-@erase ".\Debug\starmapView.obj"
	-@erase ".\Debug\starmapDoc.obj"
	-@erase ".\Debug\YaleBSC.obj"
	-@erase ".\Debug\MainFrm.obj"
	-@erase ".\Debug\ChildFrm.obj"
	-@erase ".\Debug\starmap.obj"
	-@erase ".\Debug\starmap.res"
	-@erase ".\Debug\starmap.map"
	-@erase ".\Debug\starmap.hlp"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /Yu"stdafx.h" /c
CPP_PROJ=/nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_MBCS" /Fp"$(INTDIR)/starmap.pch" /Yu"stdafx.h" /Fo"$(INTDIR)/"\
 /Fd"$(INTDIR)/" /c 
CPP_OBJS=.\Debug/
CPP_SBRS=
# ADD BASE MTL /nologo /D "_DEBUG" /win32
# ADD MTL /nologo /D "_DEBUG" /win32
MTL_PROJ=/nologo /D "_DEBUG" /win32 
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
RSC_PROJ=/l 0x409 /fo"$(INTDIR)/starmap.res" /d "_DEBUG" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/starmap.bsc" 
BSC32_SBRS=
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386
# ADD LINK32 /nologo /subsystem:windows /profile /map /debug /machine:I386
LINK32_FLAGS=/nologo /subsystem:windows /profile /map:"$(INTDIR)/starmap.map"\
 /debug /machine:I386 /out:"$(OUTDIR)/starmap.exe" 
LINK32_OBJS= \
	"$(INTDIR)/mapdata.obj" \
	"$(INTDIR)/StdAfx.obj" \
	"$(INTDIR)/starmapView.obj" \
	"$(INTDIR)/starmapDoc.obj" \
	"$(INTDIR)/YaleBSC.obj" \
	"$(INTDIR)/MainFrm.obj" \
	"$(INTDIR)/ChildFrm.obj" \
	"$(INTDIR)/starmap.obj" \
	"$(INTDIR)/starmap.res"

"$(OUTDIR)\starmap.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.c{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

################################################################################
# Begin Target

# Name "starmap - Win32 Release"
# Name "starmap - Win32 Debug"

!IF  "$(CFG)" == "starmap - Win32 Release"

!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

!ENDIF 

################################################################################
# Begin Source File

SOURCE=.\ReadMe.txt

!IF  "$(CFG)" == "starmap - Win32 Release"

!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\starmap.cpp

!IF  "$(CFG)" == "starmap - Win32 Release"

DEP_CPP_STARM=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\MainFrm.h"\
	".\ChildFrm.h"\
	".\starmapDoc.h"\
	".\starmapView.h"\
	".\Mapdata.h"\
	".\smtypes.h"\
	".\smlists.h"\
	".\yalebsc.h"\
	
NODEP_CPP_STARM=\
	".\Hello World!"\
	

"$(INTDIR)\starmap.obj" : $(SOURCE) $(DEP_CPP_STARM) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

DEP_CPP_STARM=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\MainFrm.h"\
	".\ChildFrm.h"\
	".\starmapDoc.h"\
	".\starmapView.h"\
	

"$(INTDIR)\starmap.obj" : $(SOURCE) $(DEP_CPP_STARM) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "starmap - Win32 Release"

# ADD CPP /Yc"stdafx.h"

BuildCmds= \
	$(CPP) /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS"\
 /Fp"$(INTDIR)/starmap.pch" /Yc"stdafx.h" /Fo"$(INTDIR)/" /c $(SOURCE) \
	

"$(INTDIR)\StdAfx.obj" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

"$(INTDIR)\starmap.pch" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

# ADD CPP /Yc"stdafx.h"

BuildCmds= \
	$(CPP) /nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_MBCS" /Fp"$(INTDIR)/starmap.pch" /Yc"stdafx.h" /Fo"$(INTDIR)/"\
 /Fd"$(INTDIR)/" /c $(SOURCE) \
	

"$(INTDIR)\StdAfx.obj" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

"$(INTDIR)\starmap.pch" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\MainFrm.cpp

!IF  "$(CFG)" == "starmap - Win32 Release"

DEP_CPP_MAINF=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\MainFrm.h"\
	".\Mapdata.h"\
	".\smtypes.h"\
	".\smlists.h"\
	".\yalebsc.h"\
	

"$(INTDIR)\MainFrm.obj" : $(SOURCE) $(DEP_CPP_MAINF) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

DEP_CPP_MAINF=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\MainFrm.h"\
	

"$(INTDIR)\MainFrm.obj" : $(SOURCE) $(DEP_CPP_MAINF) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\ChildFrm.cpp

!IF  "$(CFG)" == "starmap - Win32 Release"

DEP_CPP_CHILD=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\ChildFrm.h"\
	".\Mapdata.h"\
	".\smtypes.h"\
	".\smlists.h"\
	".\yalebsc.h"\
	

"$(INTDIR)\ChildFrm.obj" : $(SOURCE) $(DEP_CPP_CHILD) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

DEP_CPP_CHILD=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\ChildFrm.h"\
	

"$(INTDIR)\ChildFrm.obj" : $(SOURCE) $(DEP_CPP_CHILD) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\starmapDoc.cpp

!IF  "$(CFG)" == "starmap - Win32 Release"

DEP_CPP_STARMA=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\starmapDoc.h"\
	".\Mapdata.h"\
	".\smtypes.h"\
	".\smlists.h"\
	".\yalebsc.h"\
	

"$(INTDIR)\starmapDoc.obj" : $(SOURCE) $(DEP_CPP_STARMA) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

DEP_CPP_STARMA=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\starmapDoc.h"\
	

"$(INTDIR)\starmapDoc.obj" : $(SOURCE) $(DEP_CPP_STARMA) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\starmapView.cpp

!IF  "$(CFG)" == "starmap - Win32 Release"

DEP_CPP_STARMAP=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\starmapDoc.h"\
	".\starmapView.h"\
	".\Mapdata.h"\
	".\smtypes.h"\
	".\smlists.h"\
	".\yalebsc.h"\
	

"$(INTDIR)\starmapView.obj" : $(SOURCE) $(DEP_CPP_STARMAP) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

DEP_CPP_STARMAP=\
	".\StdAfx.h"\
	".\starmap.h"\
	".\starmapDoc.h"\
	".\starmapView.h"\
	

"$(INTDIR)\starmapView.obj" : $(SOURCE) $(DEP_CPP_STARMAP) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\starmap.rc
DEP_RSC_STARMAP_=\
	".\res\starmap.ico"\
	".\res\starmapDoc.ico"\
	".\res\Toolbar.bmp"\
	".\res\starmap.rc2"\
	

"$(INTDIR)\starmap.res" : $(SOURCE) $(DEP_RSC_STARMAP_) "$(INTDIR)"
   $(RSC) $(RSC_PROJ) $(SOURCE)


# End Source File
################################################################################
# Begin Source File

SOURCE=.\hlp\starmap.hpj

!IF  "$(CFG)" == "starmap - Win32 Release"

# Begin Custom Build - Making help file...
OutDir=.\Release
ProjDir=.
TargetName=starmap
InputPath=.\hlp\starmap.hpj

"$(OutDir)\$(TargetName).hlp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   "$(ProjDir)\makehelp.bat"

# End Custom Build

!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

# Begin Custom Build - Making help file...
OutDir=.\Debug
ProjDir=.
TargetName=starmap
InputPath=.\hlp\starmap.hpj

"$(OutDir)\$(TargetName).hlp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   "$(ProjDir)\makehelp.bat"

# End Custom Build

!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\mapdata.cpp

!IF  "$(CFG)" == "starmap - Win32 Release"

DEP_CPP_MAPDA=\
	".\StdAfx.h"\
	".\Mapdata.h"\
	".\smtypes.h"\
	".\smlists.h"\
	".\yalebsc.h"\
	
NODEP_CPP_MAPDA=\
	".\mde1"\
	

"$(INTDIR)\mapdata.obj" : $(SOURCE) $(DEP_CPP_MAPDA) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ELSEIF  "$(CFG)" == "starmap - Win32 Debug"

DEP_CPP_MAPDA=\
	".\StdAfx.h"\
	".\Mapdata.h"\
	".\smtypes.h"\
	".\smlists.h"\
	".\yalebsc.h"\
	

"$(INTDIR)\mapdata.obj" : $(SOURCE) $(DEP_CPP_MAPDA) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\YaleBSC.cpp
DEP_CPP_YALEB=\
	".\StdAfx.h"\
	".\Mapdata.h"\
	".\smtypes.h"\
	".\smlists.h"\
	".\yalebsc.h"\
	

"$(INTDIR)\YaleBSC.obj" : $(SOURCE) $(DEP_CPP_YALEB) "$(INTDIR)"\
 "$(INTDIR)\starmap.pch"


# End Source File
# End Target
# End Project
################################################################################
