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
include CMakeFiles/GradeCalculator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GradeCalculator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GradeCalculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GradeCalculator.dir/flags.make

CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.o: CMakeFiles/GradeCalculator.dir/flags.make
CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.o: ../gradecalculator.cpp
CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.o: CMakeFiles/GradeCalculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.o -MF CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.o.d -o CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.o -c "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/gradecalculator.cpp"

CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/gradecalculator.cpp" > CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.i

CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/gradecalculator.cpp" -o CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.s

CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.o: CMakeFiles/GradeCalculator.dir/flags.make
CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.o: ../gradeFunctions.cpp
CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.o: CMakeFiles/GradeCalculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.o -MF CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.o.d -o CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.o -c "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/gradeFunctions.cpp"

CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/gradeFunctions.cpp" > CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.i

CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/gradeFunctions.cpp" -o CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.s

CMakeFiles/GradeCalculator.dir/student.cpp.o: CMakeFiles/GradeCalculator.dir/flags.make
CMakeFiles/GradeCalculator.dir/student.cpp.o: ../student.cpp
CMakeFiles/GradeCalculator.dir/student.cpp.o: CMakeFiles/GradeCalculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GradeCalculator.dir/student.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GradeCalculator.dir/student.cpp.o -MF CMakeFiles/GradeCalculator.dir/student.cpp.o.d -o CMakeFiles/GradeCalculator.dir/student.cpp.o -c "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/student.cpp"

CMakeFiles/GradeCalculator.dir/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GradeCalculator.dir/student.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/student.cpp" > CMakeFiles/GradeCalculator.dir/student.cpp.i

CMakeFiles/GradeCalculator.dir/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GradeCalculator.dir/student.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/student.cpp" -o CMakeFiles/GradeCalculator.dir/student.cpp.s

# Object files for target GradeCalculator
GradeCalculator_OBJECTS = \
"CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.o" \
"CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.o" \
"CMakeFiles/GradeCalculator.dir/student.cpp.o"

# External object files for target GradeCalculator
GradeCalculator_EXTERNAL_OBJECTS =

GradeCalculator: CMakeFiles/GradeCalculator.dir/gradecalculator.cpp.o
GradeCalculator: CMakeFiles/GradeCalculator.dir/gradeFunctions.cpp.o
GradeCalculator: CMakeFiles/GradeCalculator.dir/student.cpp.o
GradeCalculator: CMakeFiles/GradeCalculator.dir/build.make
GradeCalculator: CMakeFiles/GradeCalculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable GradeCalculator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GradeCalculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GradeCalculator.dir/build: GradeCalculator
.PHONY : CMakeFiles/GradeCalculator.dir/build

CMakeFiles/GradeCalculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GradeCalculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GradeCalculator.dir/clean

CMakeFiles/GradeCalculator.dir/depend:
	cd "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug" "/Users/calebnewman/Documents/GitHub/COP3003/Grade Calculator/cmake-build-debug/CMakeFiles/GradeCalculator.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/GradeCalculator.dir/depend
