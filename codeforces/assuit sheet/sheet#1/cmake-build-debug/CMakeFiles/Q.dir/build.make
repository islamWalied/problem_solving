# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Q.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Q.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Q.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Q.dir/flags.make

CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.obj: CMakeFiles/Q.dir/flags.make
CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.obj: ../Q.\ Coordinates\ of\ a\ Point.cpp
CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.obj: CMakeFiles/Q.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.obj -MF CMakeFiles\Q.dir\Q._Coordinates_of_a_Point.cpp.obj.d -o CMakeFiles\Q.dir\Q._Coordinates_of_a_Point.cpp.obj -c "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\Q. Coordinates of a Point.cpp"

CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\Q. Coordinates of a Point.cpp" > CMakeFiles\Q.dir\Q._Coordinates_of_a_Point.cpp.i

CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\Q. Coordinates of a Point.cpp" -o CMakeFiles\Q.dir\Q._Coordinates_of_a_Point.cpp.s

# Object files for target Q
Q_OBJECTS = \
"CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.obj"

# External object files for target Q
Q_EXTERNAL_OBJECTS =

Q.exe: CMakeFiles/Q.dir/Q._Coordinates_of_a_Point.cpp.obj
Q.exe: CMakeFiles/Q.dir/build.make
Q.exe: CMakeFiles/Q.dir/linklibs.rsp
Q.exe: CMakeFiles/Q.dir/objects1.rsp
Q.exe: CMakeFiles/Q.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Q.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Q.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Q.dir/build: Q.exe
.PHONY : CMakeFiles/Q.dir/build

CMakeFiles/Q.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Q.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Q.dir/clean

CMakeFiles/Q.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug\CMakeFiles\Q.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Q.dir/depend

