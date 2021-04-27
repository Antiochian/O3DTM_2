###########################################################################
## Makefile generated for component 'shadowing_latlon_loop'. 
## 
## Makefile     : shadowing_latlon_loop_rtw.mk
## Generated on : Mon Apr 19 21:22:48 2021
## Final product: .\shadowing_latlon_loop_compiled.lib
## Product type : static-library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file
# MODELLIB                Static library target

PRODUCT_NAME              = shadowing_latlon_loop
MAKEFILE                  = shadowing_latlon_loop_rtw.mk
MATLAB_ROOT               = C:\PROGRA~1\MATLAB\R2020b
MATLAB_BIN                = C:\PROGRA~1\MATLAB\R2020b\bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)\win64
START_DIR                 = H:\Documents\O3DTM_stripped_down\raw_mexable_files\codegen\lib\shadowing_latlon_loop
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = .
COMPILER_COMMAND_FILE     = shadowing_latlon_loop_rtw_comp.rsp
CMD_FILE                  = shadowing_latlon_loop_rtw.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
NODEBUG                   = 1
MODELLIB                  = shadowing_latlon_loop_compiled.lib

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Microsoft Visual C++ 2019 v16.0 | nmake (64-bit Windows)
# Supported Version(s):    16.0
# ToolchainInfo Version:   2020b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# NODEBUG
# cvarsdll
# cvarsmt
# conlibsmt
# ldebug
# conflags
# cflags

#-----------
# MACROS
#-----------

MW_EXTERNLIB_DIR    = $(MATLAB_ROOT)\extern\lib\win64\microsoft
MW_LIB_DIR          = $(MATLAB_ROOT)\lib\win64
CPU                 = AMD64
APPVER              = 5.02
CVARSFLAG           = $(cvarsmt)
CFLAGS_ADDITIONAL   = -D_CRT_SECURE_NO_WARNINGS
CPPFLAGS_ADDITIONAL = -EHs -D_CRT_SECURE_NO_WARNINGS /wd4251
LIBS_TOOLCHAIN      = $(conlibs)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Microsoft Visual C Compiler
CC = cl

# Linker: Microsoft Visual C Linker
LD = link

# C++ Compiler: Microsoft Visual C++ Compiler
CPP = cl

# C++ Linker: Microsoft Visual C++ Linker
CPP_LD = link

# Archiver: Microsoft Visual C/C++ Archiver
AR = lib

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)\mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: NMAKE Utility
MAKE = nmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -Zi
C_OUTPUT_FLAG       = -Fo
LDDEBUG             = /DEBUG
OUTPUT_FLAG         = -out:
CPPDEBUG            = -Zi
CPP_OUTPUT_FLAG     = -Fo
CPPLDDEBUG          = /DEBUG
OUTPUT_FLAG         = -out:
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = -out:
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @ren
RUN                 = @cmd /C

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = /nologo
CFLAGS               = $(cflags) $(CVARSFLAG) $(CFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPPFLAGS             = /TP $(cflags) $(CVARSFLAG) $(CPPFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPP_LDFLAGS          = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
CPP_SHAREDLIB_LDFLAGS  = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                         -dll -def:$(DEF_FILE)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                       -dll -def:$(DEF_FILE)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = .\shadowing_latlon_loop_compiled.lib
PRODUCT_TYPE = "static-library"
BUILD_TYPE = "Static Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_CUSTOM = 
DEFINES_STANDARD = -DMODEL=shadowing_latlon_loop_compiled

DEFINES = $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)\shadowing_latlon_loop_data.c $(START_DIR)\rt_nonfinite.c $(START_DIR)\rtGetNaN.c $(START_DIR)\rtGetInf.c $(START_DIR)\shadowing_latlon_loop_initialize.c $(START_DIR)\shadowing_latlon_loop_terminate.c $(START_DIR)\shadowing_latlon_loop.c $(START_DIR)\mark_diviner_testpoints.c $(START_DIR)\colon.c $(START_DIR)\tic.c $(START_DIR)\mod.c $(START_DIR)\timeKeeper.c $(START_DIR)\mexable_viewshed.c $(START_DIR)\mexable_calculateLOS.c $(START_DIR)\interp2.c $(START_DIR)\my_geodetic2aer.c $(START_DIR)\raytrace_pixel.c $(START_DIR)\my_aer2geodetic.c $(START_DIR)\mexable_los2.c $(START_DIR)\toc.c $(START_DIR)\getTime.c $(START_DIR)\nullAssignment.c $(START_DIR)\cosd.c $(START_DIR)\sind.c $(START_DIR)\shadowing_timeloop.c $(START_DIR)\cotd.c $(START_DIR)\tand.c $(START_DIR)\shadowing_latlon_loop_emxutil.c $(START_DIR)\shadowing_latlon_loop_emxAPI.c $(START_DIR)\shadowing_latlon_loop_rtwutil.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = shadowing_latlon_loop_data.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj shadowing_latlon_loop_initialize.obj shadowing_latlon_loop_terminate.obj shadowing_latlon_loop.obj mark_diviner_testpoints.obj colon.obj tic.obj mod.obj timeKeeper.obj mexable_viewshed.obj mexable_calculateLOS.obj interp2.obj my_geodetic2aer.obj raytrace_pixel.obj my_aer2geodetic.obj mexable_los2.obj toc.obj getTime.obj nullAssignment.obj cosd.obj sind.obj shadowing_timeloop.obj cotd.obj tand.obj shadowing_latlon_loop_emxutil.obj shadowing_latlon_loop_emxAPI.obj shadowing_latlon_loop_rtwutil.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS =  /LIBPATH:"$(MATLAB_ROOT)\bin\win64" "$(MATLAB_ROOT)\bin\win64\libiomp5md.lib"

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_OPTS = /openmp /wd4101
CFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CFLAGS = $(CFLAGS) $(CFLAGS_OPTS) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_OPTS = /openmp /wd4101
CPPFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS = $(CPPFLAGS) $(CPPFLAGS_OPTS) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = /nodefaultlib:vcomp  

CPP_LDFLAGS = $(CPP_LDFLAGS) $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = /nodefaultlib:vcomp  

CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS) $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = /nodefaultlib:vcomp  

LDFLAGS = $(LDFLAGS) $(LDFLAGS_)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = /nodefaultlib:vcomp  

SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS) $(SHAREDLIB_LDFLAGS_)

###########################################################################
## INLINED COMMANDS
###########################################################################


!include $(MATLAB_ROOT)\rtw\c\tools\vcdefs.mak


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute set_environment_variables


all : build
	@cmd /C "@echo ### Successfully generated all binary outputs."


build : set_environment_variables prebuild $(PRODUCT)


prebuild : 


download : $(PRODUCT)


execute : download


set_environment_variables : 
	@set INCLUDE=$(INCLUDES);$(INCLUDE)
	@set LIB=$(LIB)


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@cmd /C "@echo ### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS) -out:$(PRODUCT) @$(CMD_FILE)
	@cmd /C "@echo ### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{H:\Documents\O3DTM_stripped_down\raw_mexable_files}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{H:\Documents\O3DTM_stripped_down\raw_mexable_files}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


shadowing_latlon_loop_data.obj : $(START_DIR)\shadowing_latlon_loop_data.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\shadowing_latlon_loop_data.c


rt_nonfinite.obj : $(START_DIR)\rt_nonfinite.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rt_nonfinite.c


rtGetNaN.obj : $(START_DIR)\rtGetNaN.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rtGetNaN.c


rtGetInf.obj : $(START_DIR)\rtGetInf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rtGetInf.c


shadowing_latlon_loop_initialize.obj : $(START_DIR)\shadowing_latlon_loop_initialize.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\shadowing_latlon_loop_initialize.c


shadowing_latlon_loop_terminate.obj : $(START_DIR)\shadowing_latlon_loop_terminate.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\shadowing_latlon_loop_terminate.c


shadowing_latlon_loop.obj : $(START_DIR)\shadowing_latlon_loop.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\shadowing_latlon_loop.c


mark_diviner_testpoints.obj : $(START_DIR)\mark_diviner_testpoints.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\mark_diviner_testpoints.c


colon.obj : $(START_DIR)\colon.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\colon.c


tic.obj : $(START_DIR)\tic.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\tic.c


mod.obj : $(START_DIR)\mod.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\mod.c


timeKeeper.obj : $(START_DIR)\timeKeeper.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\timeKeeper.c


mexable_viewshed.obj : $(START_DIR)\mexable_viewshed.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\mexable_viewshed.c


mexable_calculateLOS.obj : $(START_DIR)\mexable_calculateLOS.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\mexable_calculateLOS.c


interp2.obj : $(START_DIR)\interp2.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\interp2.c


my_geodetic2aer.obj : $(START_DIR)\my_geodetic2aer.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\my_geodetic2aer.c


raytrace_pixel.obj : $(START_DIR)\raytrace_pixel.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\raytrace_pixel.c


my_aer2geodetic.obj : $(START_DIR)\my_aer2geodetic.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\my_aer2geodetic.c


mexable_los2.obj : $(START_DIR)\mexable_los2.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\mexable_los2.c


toc.obj : $(START_DIR)\toc.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\toc.c


getTime.obj : $(START_DIR)\getTime.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\getTime.c


nullAssignment.obj : $(START_DIR)\nullAssignment.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\nullAssignment.c


cosd.obj : $(START_DIR)\cosd.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\cosd.c


sind.obj : $(START_DIR)\sind.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\sind.c


shadowing_timeloop.obj : $(START_DIR)\shadowing_timeloop.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\shadowing_timeloop.c


cotd.obj : $(START_DIR)\cotd.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\cotd.c


tand.obj : $(START_DIR)\tand.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\tand.c


shadowing_latlon_loop_emxutil.obj : $(START_DIR)\shadowing_latlon_loop_emxutil.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\shadowing_latlon_loop_emxutil.c


shadowing_latlon_loop_emxAPI.obj : $(START_DIR)\shadowing_latlon_loop_emxAPI.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\shadowing_latlon_loop_emxAPI.c


shadowing_latlon_loop_rtwutil.obj : $(START_DIR)\shadowing_latlon_loop_rtwutil.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\shadowing_latlon_loop_rtwutil.c


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@cmd /C "@echo ### PRODUCT = $(PRODUCT)"
	@cmd /C "@echo ### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@cmd /C "@echo ### BUILD_TYPE = $(BUILD_TYPE)"
	@cmd /C "@echo ### INCLUDES = $(INCLUDES)"
	@cmd /C "@echo ### DEFINES = $(DEFINES)"
	@cmd /C "@echo ### ALL_SRCS = $(ALL_SRCS)"
	@cmd /C "@echo ### ALL_OBJS = $(ALL_OBJS)"
	@cmd /C "@echo ### LIBS = $(LIBS)"
	@cmd /C "@echo ### MODELREF_LIBS = $(MODELREF_LIBS)"
	@cmd /C "@echo ### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@cmd /C "@echo ### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@cmd /C "@echo ### CFLAGS = $(CFLAGS)"
	@cmd /C "@echo ### LDFLAGS = $(LDFLAGS)"
	@cmd /C "@echo ### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### CPPFLAGS = $(CPPFLAGS)"
	@cmd /C "@echo ### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@cmd /C "@echo ### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### ARFLAGS = $(ARFLAGS)"
	@cmd /C "@echo ### MEX_CFLAGS = $(MEX_CFLAGS)"
	@cmd /C "@echo ### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@cmd /C "@echo ### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@cmd /C "@echo ### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@cmd /C "@echo ### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@cmd /C "@echo ### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@cmd /C "@echo ### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	@if exist $(PRODUCT) $(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


