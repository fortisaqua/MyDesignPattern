# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wanghongxuan/CLionProjects/DecoratorPattern

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wanghongxuan/CLionProjects/DecoratorPattern/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DecoratorPattern.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DecoratorPattern.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DecoratorPattern.dir/flags.make

CMakeFiles/DecoratorPattern.dir/main.cpp.o: CMakeFiles/DecoratorPattern.dir/flags.make
CMakeFiles/DecoratorPattern.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wanghongxuan/CLionProjects/DecoratorPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DecoratorPattern.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DecoratorPattern.dir/main.cpp.o -c /Users/wanghongxuan/CLionProjects/DecoratorPattern/main.cpp

CMakeFiles/DecoratorPattern.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DecoratorPattern.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wanghongxuan/CLionProjects/DecoratorPattern/main.cpp > CMakeFiles/DecoratorPattern.dir/main.cpp.i

CMakeFiles/DecoratorPattern.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DecoratorPattern.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wanghongxuan/CLionProjects/DecoratorPattern/main.cpp -o CMakeFiles/DecoratorPattern.dir/main.cpp.s

CMakeFiles/DecoratorPattern.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/DecoratorPattern.dir/main.cpp.o.requires

CMakeFiles/DecoratorPattern.dir/main.cpp.o.provides: CMakeFiles/DecoratorPattern.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/DecoratorPattern.dir/build.make CMakeFiles/DecoratorPattern.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/DecoratorPattern.dir/main.cpp.o.provides

CMakeFiles/DecoratorPattern.dir/main.cpp.o.provides.build: CMakeFiles/DecoratorPattern.dir/main.cpp.o


# Object files for target DecoratorPattern
DecoratorPattern_OBJECTS = \
"CMakeFiles/DecoratorPattern.dir/main.cpp.o"

# External object files for target DecoratorPattern
DecoratorPattern_EXTERNAL_OBJECTS =

DecoratorPattern: CMakeFiles/DecoratorPattern.dir/main.cpp.o
DecoratorPattern: CMakeFiles/DecoratorPattern.dir/build.make
DecoratorPattern: CMakeFiles/DecoratorPattern.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wanghongxuan/CLionProjects/DecoratorPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DecoratorPattern"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DecoratorPattern.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DecoratorPattern.dir/build: DecoratorPattern

.PHONY : CMakeFiles/DecoratorPattern.dir/build

CMakeFiles/DecoratorPattern.dir/requires: CMakeFiles/DecoratorPattern.dir/main.cpp.o.requires

.PHONY : CMakeFiles/DecoratorPattern.dir/requires

CMakeFiles/DecoratorPattern.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DecoratorPattern.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DecoratorPattern.dir/clean

CMakeFiles/DecoratorPattern.dir/depend:
	cd /Users/wanghongxuan/CLionProjects/DecoratorPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wanghongxuan/CLionProjects/DecoratorPattern /Users/wanghongxuan/CLionProjects/DecoratorPattern /Users/wanghongxuan/CLionProjects/DecoratorPattern/cmake-build-debug /Users/wanghongxuan/CLionProjects/DecoratorPattern/cmake-build-debug /Users/wanghongxuan/CLionProjects/DecoratorPattern/cmake-build-debug/CMakeFiles/DecoratorPattern.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DecoratorPattern.dir/depend

