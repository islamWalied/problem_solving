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
include CMakeFiles/X.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/X.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/X.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/X.dir/flags.make

CMakeFiles/X.dir/X._Two_intervals.cpp.obj: CMakeFiles/X.dir/flags.make
CMakeFiles/X.dir/X._Two_intervals.cpp.obj: ../X.\ Two\ intervals.cpp
CMakeFiles/X.dir/X._Two_intervals.cpp.obj: CMakeFiles/X.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/X.dir/X._Two_intervals.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/X.dir/X._Two_intervals.cpp.obj -MF CMakeFiles\X.dir\X._Two_intervals.cpp.obj.d -o CMakeFiles\X.dir\X._Two_intervals.cpp.obj -c "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\X. Two intervals.cpp"

CMakeFiles/X.dir/X._Two_intervals.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/X.dir/X._Two_intervals.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\X. Two intervals.cpp" > CMakeFiles\X.dir\X._Two_intervals.cpp.i

CMakeFiles/X.dir/X._Two_intervals.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/X.dir/X._Two_intervals.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\X. Two intervals.cpp" -o CMakeFiles\X.dir\X._Two_intervals.cpp.s

# Object files for target X
X_OBJECTS = \
"CMakeFiles/X.dir/X._Two_intervals.cpp.obj"

# External object files for target X
X_EXTERNAL_OBJECTS =

X.exe: CMakeFiles/X.dir/X._Two_intervals.cpp.obj
X.exe: CMakeFiles/X.dir/build.make
X.exe: CMakeFiles/X.dir/linklibs.rsp
X.exe: CMakeFiles/X.dir/objects1.rsp
X.exe: CMakeFiles/X.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable X.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\X.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/X.dir/build: X.exe
.PHONY : CMakeFiles/X.dir/build

CMakeFiles/X.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\X.dir\cmake_clean.cmake
.PHONY : CMakeFiles/X.dir/clean

CMakeFiles/X.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug\CMakeFiles\X.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/X.dir/depend

