# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build

# Include any dependencies generated for this target.
include CMakeFiles/tests_lab3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tests_lab3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tests_lab3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tests_lab3.dir/flags.make

CMakeFiles/tests_lab3.dir/test/test.cpp.o: CMakeFiles/tests_lab3.dir/flags.make
CMakeFiles/tests_lab3.dir/test/test.cpp.o: /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/test/test.cpp
CMakeFiles/tests_lab3.dir/test/test.cpp.o: CMakeFiles/tests_lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tests_lab3.dir/test/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tests_lab3.dir/test/test.cpp.o -MF CMakeFiles/tests_lab3.dir/test/test.cpp.o.d -o CMakeFiles/tests_lab3.dir/test/test.cpp.o -c /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/test/test.cpp

CMakeFiles/tests_lab3.dir/test/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests_lab3.dir/test/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/test/test.cpp > CMakeFiles/tests_lab3.dir/test/test.cpp.i

CMakeFiles/tests_lab3.dir/test/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests_lab3.dir/test/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/test/test.cpp -o CMakeFiles/tests_lab3.dir/test/test.cpp.s

# Object files for target tests_lab3
tests_lab3_OBJECTS = \
"CMakeFiles/tests_lab3.dir/test/test.cpp.o"

# External object files for target tests_lab3
tests_lab3_EXTERNAL_OBJECTS =

tests_lab3: CMakeFiles/tests_lab3.dir/test/test.cpp.o
tests_lab3: CMakeFiles/tests_lab3.dir/build.make
tests_lab3: lib/libgtest.a
tests_lab3: lib/libgtest_main.a
tests_lab3: libFigures.a
tests_lab3: lib/libgtest.a
tests_lab3: CMakeFiles/tests_lab3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tests_lab3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tests_lab3.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=tests_lab3 -D TEST_EXECUTABLE=/mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build/tests_lab3 -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=tests_lab3_TESTS -D CTEST_FILE=/mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build/tests_lab3[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.25/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/tests_lab3.dir/build: tests_lab3
.PHONY : CMakeFiles/tests_lab3.dir/build

CMakeFiles/tests_lab3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tests_lab3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tests_lab3.dir/clean

CMakeFiles/tests_lab3.dir/depend:
	cd /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3 /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3 /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build /mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr3/build/CMakeFiles/tests_lab3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tests_lab3.dir/depend

