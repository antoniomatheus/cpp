# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/antonio/learning/cpp/tests/googletest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/antonio/learning/cpp/tests/googletest

# Include any dependencies generated for this target.
include googletest-build/googletest/CMakeFiles/gtest_main.dir/depend.make

# Include the progress variables for this target.
include googletest-build/googletest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include googletest-build/googletest/CMakeFiles/gtest_main.dir/flags.make

googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: googletest-build/googletest/CMakeFiles/gtest_main.dir/flags.make
googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: googletest-src/googletest/src/gtest_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/antonio/learning/cpp/tests/googletest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd /home/antonio/learning/cpp/tests/googletest/googletest-build/googletest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c /home/antonio/learning/cpp/tests/googletest/googletest-src/googletest/src/gtest_main.cc

googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /home/antonio/learning/cpp/tests/googletest/googletest-build/googletest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/antonio/learning/cpp/tests/googletest/googletest-src/googletest/src/gtest_main.cc > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /home/antonio/learning/cpp/tests/googletest/googletest-build/googletest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/antonio/learning/cpp/tests/googletest/googletest-src/googletest/src/gtest_main.cc -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

lib/libgtest_main.a: googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
lib/libgtest_main.a: googletest-build/googletest/CMakeFiles/gtest_main.dir/build.make
lib/libgtest_main.a: googletest-build/googletest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/antonio/learning/cpp/tests/googletest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libgtest_main.a"
	cd /home/antonio/learning/cpp/tests/googletest/googletest-build/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean_target.cmake
	cd /home/antonio/learning/cpp/tests/googletest/googletest-build/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googletest-build/googletest/CMakeFiles/gtest_main.dir/build: lib/libgtest_main.a

.PHONY : googletest-build/googletest/CMakeFiles/gtest_main.dir/build

googletest-build/googletest/CMakeFiles/gtest_main.dir/clean:
	cd /home/antonio/learning/cpp/tests/googletest/googletest-build/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : googletest-build/googletest/CMakeFiles/gtest_main.dir/clean

googletest-build/googletest/CMakeFiles/gtest_main.dir/depend:
	cd /home/antonio/learning/cpp/tests/googletest && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/antonio/learning/cpp/tests/googletest /home/antonio/learning/cpp/tests/googletest/googletest-src/googletest /home/antonio/learning/cpp/tests/googletest /home/antonio/learning/cpp/tests/googletest/googletest-build/googletest /home/antonio/learning/cpp/tests/googletest/googletest-build/googletest/CMakeFiles/gtest_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : googletest-build/googletest/CMakeFiles/gtest_main.dir/depend

