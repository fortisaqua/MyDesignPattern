# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = H:\CLionPros\FlyWeightPattern

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\CLionPros\FlyWeightPattern\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\FlyWeightPattern.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\FlyWeightPattern.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\FlyWeightPattern.dir\flags.make

CMakeFiles\FlyWeightPattern.dir\main.cpp.obj: CMakeFiles\FlyWeightPattern.dir\flags.make
CMakeFiles\FlyWeightPattern.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\CLionPros\FlyWeightPattern\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FlyWeightPattern.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\FlyWeightPattern.dir\main.cpp.obj /FdCMakeFiles\FlyWeightPattern.dir\ /FS -c H:\CLionPros\FlyWeightPattern\main.cpp
<<

CMakeFiles\FlyWeightPattern.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlyWeightPattern.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\FlyWeightPattern.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\CLionPros\FlyWeightPattern\main.cpp
<<

CMakeFiles\FlyWeightPattern.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlyWeightPattern.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\FlyWeightPattern.dir\main.cpp.s /c H:\CLionPros\FlyWeightPattern\main.cpp
<<

# Object files for target FlyWeightPattern
FlyWeightPattern_OBJECTS = \
"CMakeFiles\FlyWeightPattern.dir\main.cpp.obj"

# External object files for target FlyWeightPattern
FlyWeightPattern_EXTERNAL_OBJECTS =

FlyWeightPattern.exe: CMakeFiles\FlyWeightPattern.dir\main.cpp.obj
FlyWeightPattern.exe: CMakeFiles\FlyWeightPattern.dir\build.make
FlyWeightPattern.exe: CMakeFiles\FlyWeightPattern.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\CLionPros\FlyWeightPattern\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FlyWeightPattern.exe"
	"C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\FlyWeightPattern.dir --manifests  -- C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\FlyWeightPattern.dir\objects1.rsp @<<
 /out:FlyWeightPattern.exe /implib:FlyWeightPattern.lib /pdb:H:\CLionPros\FlyWeightPattern\cmake-build-debug\FlyWeightPattern.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\FlyWeightPattern.dir\build: FlyWeightPattern.exe

.PHONY : CMakeFiles\FlyWeightPattern.dir\build

CMakeFiles\FlyWeightPattern.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FlyWeightPattern.dir\cmake_clean.cmake
.PHONY : CMakeFiles\FlyWeightPattern.dir\clean

CMakeFiles\FlyWeightPattern.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" H:\CLionPros\FlyWeightPattern H:\CLionPros\FlyWeightPattern H:\CLionPros\FlyWeightPattern\cmake-build-debug H:\CLionPros\FlyWeightPattern\cmake-build-debug H:\CLionPros\FlyWeightPattern\cmake-build-debug\CMakeFiles\FlyWeightPattern.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\FlyWeightPattern.dir\depend
