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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/exercise4fanhui.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise4fanhui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise4fanhui.dir/flags.make

CMakeFiles/exercise4fanhui.dir/return.c.o: CMakeFiles/exercise4fanhui.dir/flags.make
CMakeFiles/exercise4fanhui.dir/return.c.o: ../return.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exercise4fanhui.dir/return.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/exercise4fanhui.dir/return.c.o   -c /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/return.c

CMakeFiles/exercise4fanhui.dir/return.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exercise4fanhui.dir/return.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/return.c > CMakeFiles/exercise4fanhui.dir/return.c.i

CMakeFiles/exercise4fanhui.dir/return.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exercise4fanhui.dir/return.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/return.c -o CMakeFiles/exercise4fanhui.dir/return.c.s

# Object files for target exercise4fanhui
exercise4fanhui_OBJECTS = \
"CMakeFiles/exercise4fanhui.dir/return.c.o"

# External object files for target exercise4fanhui
exercise4fanhui_EXTERNAL_OBJECTS =

exercise4fanhui: CMakeFiles/exercise4fanhui.dir/return.c.o
exercise4fanhui: CMakeFiles/exercise4fanhui.dir/build.make
exercise4fanhui: CMakeFiles/exercise4fanhui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exercise4fanhui"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercise4fanhui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise4fanhui.dir/build: exercise4fanhui

.PHONY : CMakeFiles/exercise4fanhui.dir/build

CMakeFiles/exercise4fanhui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercise4fanhui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercise4fanhui.dir/clean

CMakeFiles/exercise4fanhui.dir/depend:
	cd /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug/CMakeFiles/exercise4fanhui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercise4fanhui.dir/depend

