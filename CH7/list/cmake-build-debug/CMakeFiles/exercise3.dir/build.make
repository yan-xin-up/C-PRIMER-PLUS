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
include CMakeFiles/exercise3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise3.dir/flags.make

CMakeFiles/exercise3.dir/exercise3_break.c.o: CMakeFiles/exercise3.dir/flags.make
CMakeFiles/exercise3.dir/exercise3_break.c.o: ../exercise3\ break.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exercise3.dir/exercise3_break.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/exercise3.dir/exercise3_break.c.o   -c "/Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/exercise3 break.c"

CMakeFiles/exercise3.dir/exercise3_break.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exercise3.dir/exercise3_break.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/exercise3 break.c" > CMakeFiles/exercise3.dir/exercise3_break.c.i

CMakeFiles/exercise3.dir/exercise3_break.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exercise3.dir/exercise3_break.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/exercise3 break.c" -o CMakeFiles/exercise3.dir/exercise3_break.c.s

# Object files for target exercise3
exercise3_OBJECTS = \
"CMakeFiles/exercise3.dir/exercise3_break.c.o"

# External object files for target exercise3
exercise3_EXTERNAL_OBJECTS =

exercise3: CMakeFiles/exercise3.dir/exercise3_break.c.o
exercise3: CMakeFiles/exercise3.dir/build.make
exercise3: CMakeFiles/exercise3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exercise3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercise3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise3.dir/build: exercise3

.PHONY : CMakeFiles/exercise3.dir/build

CMakeFiles/exercise3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercise3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercise3.dir/clean

CMakeFiles/exercise3.dir/depend:
	cd /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug /Users/ivan/Documents/GitHub/C-PRIMER-PLUS/CH7/list/cmake-build-debug/CMakeFiles/exercise3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercise3.dir/depend

