# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ivan/github/C-PRIMER-PLUS/CH7/list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ivan/github/C-PRIMER-PLUS/CH7/list/cmake-build-debug-system

# Include any dependencies generated for this target.
include CMakeFiles/list7.2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/list7.2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/list7.2.dir/flags.make

CMakeFiles/list7.2.dir/cypher1.c.o: CMakeFiles/list7.2.dir/flags.make
CMakeFiles/list7.2.dir/cypher1.c.o: ../cypher1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ivan/github/C-PRIMER-PLUS/CH7/list/cmake-build-debug-system/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/list7.2.dir/cypher1.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/list7.2.dir/cypher1.c.o   -c /Users/ivan/github/C-PRIMER-PLUS/CH7/list/cypher1.c

CMakeFiles/list7.2.dir/cypher1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/list7.2.dir/cypher1.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ivan/github/C-PRIMER-PLUS/CH7/list/cypher1.c > CMakeFiles/list7.2.dir/cypher1.c.i

CMakeFiles/list7.2.dir/cypher1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/list7.2.dir/cypher1.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ivan/github/C-PRIMER-PLUS/CH7/list/cypher1.c -o CMakeFiles/list7.2.dir/cypher1.c.s

# Object files for target list7.2
list7_2_OBJECTS = \
"CMakeFiles/list7.2.dir/cypher1.c.o"

# External object files for target list7.2
list7_2_EXTERNAL_OBJECTS =

list7.2: CMakeFiles/list7.2.dir/cypher1.c.o
list7.2: CMakeFiles/list7.2.dir/build.make
list7.2: CMakeFiles/list7.2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ivan/github/C-PRIMER-PLUS/CH7/list/cmake-build-debug-system/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable list7.2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/list7.2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/list7.2.dir/build: list7.2

.PHONY : CMakeFiles/list7.2.dir/build

CMakeFiles/list7.2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/list7.2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/list7.2.dir/clean

CMakeFiles/list7.2.dir/depend:
	cd /Users/ivan/github/C-PRIMER-PLUS/CH7/list/cmake-build-debug-system && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ivan/github/C-PRIMER-PLUS/CH7/list /Users/ivan/github/C-PRIMER-PLUS/CH7/list /Users/ivan/github/C-PRIMER-PLUS/CH7/list/cmake-build-debug-system /Users/ivan/github/C-PRIMER-PLUS/CH7/list/cmake-build-debug-system /Users/ivan/github/C-PRIMER-PLUS/CH7/list/cmake-build-debug-system/CMakeFiles/list7.2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/list7.2.dir/depend

