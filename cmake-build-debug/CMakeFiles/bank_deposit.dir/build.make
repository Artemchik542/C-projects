# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ArtAdmin\CLionProjects\bank_deposit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ArtAdmin\CLionProjects\bank_deposit\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\bank_deposit.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\bank_deposit.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\bank_deposit.dir\flags.make

CMakeFiles\bank_deposit.dir\main.c.obj: CMakeFiles\bank_deposit.dir\flags.make
CMakeFiles\bank_deposit.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ArtAdmin\CLionProjects\bank_deposit\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bank_deposit.dir/main.c.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\bank_deposit.dir\main.c.obj /FdCMakeFiles\bank_deposit.dir\ /FS -c C:\Users\ArtAdmin\CLionProjects\bank_deposit\main.c
<<

CMakeFiles\bank_deposit.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bank_deposit.dir/main.c.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\bank_deposit.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ArtAdmin\CLionProjects\bank_deposit\main.c
<<

CMakeFiles\bank_deposit.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bank_deposit.dir/main.c.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\bank_deposit.dir\main.c.s /c C:\Users\ArtAdmin\CLionProjects\bank_deposit\main.c
<<

# Object files for target bank_deposit
bank_deposit_OBJECTS = \
"CMakeFiles\bank_deposit.dir\main.c.obj"

# External object files for target bank_deposit
bank_deposit_EXTERNAL_OBJECTS =

bank_deposit.exe: CMakeFiles\bank_deposit.dir\main.c.obj
bank_deposit.exe: CMakeFiles\bank_deposit.dir\build.make
bank_deposit.exe: CMakeFiles\bank_deposit.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ArtAdmin\CLionProjects\bank_deposit\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bank_deposit.exe"
	"C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\bank_deposit.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\bank_deposit.dir\objects1.rsp @<<
 /out:bank_deposit.exe /implib:bank_deposit.lib /pdb:C:\Users\ArtAdmin\CLionProjects\bank_deposit\cmake-build-debug\bank_deposit.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\bank_deposit.dir\build: bank_deposit.exe

.PHONY : CMakeFiles\bank_deposit.dir\build

CMakeFiles\bank_deposit.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bank_deposit.dir\cmake_clean.cmake
.PHONY : CMakeFiles\bank_deposit.dir\clean

CMakeFiles\bank_deposit.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\ArtAdmin\CLionProjects\bank_deposit C:\Users\ArtAdmin\CLionProjects\bank_deposit C:\Users\ArtAdmin\CLionProjects\bank_deposit\cmake-build-debug C:\Users\ArtAdmin\CLionProjects\bank_deposit\cmake-build-debug C:\Users\ArtAdmin\CLionProjects\bank_deposit\cmake-build-debug\CMakeFiles\bank_deposit.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\bank_deposit.dir\depend
