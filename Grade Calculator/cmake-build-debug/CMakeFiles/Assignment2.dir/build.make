# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Assignment2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment2.dir/flags.make

CMakeFiles/Assignment2.dir/GradeCalculator.cpp.o: CMakeFiles/Assignment2.dir/flags.make
CMakeFiles/Assignment2.dir/GradeCalculator.cpp.o: ../GradeCalculator.cpp
CMakeFiles/Assignment2.dir/GradeCalculator.cpp.o: CMakeFiles/Assignment2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment2.dir/GradeCalculator.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Assignment2.dir/GradeCalculator.cpp.o -MF CMakeFiles/Assignment2.dir/GradeCalculator.cpp.o.d -o CMakeFiles/Assignment2.dir/GradeCalculator.cpp.o -c "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/GradeCalculator.cpp"

CMakeFiles/Assignment2.dir/GradeCalculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment2.dir/GradeCalculator.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/GradeCalculator.cpp" > CMakeFiles/Assignment2.dir/GradeCalculator.cpp.i

CMakeFiles/Assignment2.dir/GradeCalculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment2.dir/GradeCalculator.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/GradeCalculator.cpp" -o CMakeFiles/Assignment2.dir/GradeCalculator.cpp.s

# Object files for target Assignment2
Assignment2_OBJECTS = \
"CMakeFiles/Assignment2.dir/GradeCalculator.cpp.o"

# External object files for target Assignment2
Assignment2_EXTERNAL_OBJECTS =

Assignment2: CMakeFiles/Assignment2.dir/GradeCalculator.cpp.o
Assignment2: CMakeFiles/Assignment2.dir/build.make
Assignment2: CMakeFiles/Assignment2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Assignment2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment2.dir/build: Assignment2
.PHONY : CMakeFiles/Assignment2.dir/build

CMakeFiles/Assignment2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment2.dir/clean

CMakeFiles/Assignment2.dir/depend:
	cd "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug/CMakeFiles/Assignment2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment2.dir/depend

