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
include CMakeFiles/O.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/O.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/O.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/O.dir/flags.make

CMakeFiles/O.dir/O._Calculator.cpp.obj: CMakeFiles/O.dir/flags.make
CMakeFiles/O.dir/O._Calculator.cpp.obj: ../O.\ Calculator.cpp
CMakeFiles/O.dir/O._Calculator.cpp.obj: CMakeFiles/O.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/O.dir/O._Calculator.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/O.dir/O._Calculator.cpp.obj -MF CMakeFiles\O.dir\O._Calculator.cpp.obj.d -o CMakeFiles\O.dir\O._Calculator.cpp.obj -c "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\O. Calculator.cpp"

CMakeFiles/O.dir/O._Calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/O.dir/O._Calculator.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\O. Calculator.cpp" > CMakeFiles\O.dir\O._Calculator.cpp.i

CMakeFiles/O.dir/O._Calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/O.dir/O._Calculator.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\O. Calculator.cpp" -o CMakeFiles\O.dir\O._Calculator.cpp.s

# Object files for target O
O_OBJECTS = \
"CMakeFiles/O.dir/O._Calculator.cpp.obj"

# External object files for target O
O_EXTERNAL_OBJECTS =

O.exe: CMakeFiles/O.dir/O._Calculator.cpp.obj
O.exe: CMakeFiles/O.dir/build.make
O.exe: CMakeFiles/O.dir/linklibs.rsp
O.exe: CMakeFiles/O.dir/objects1.rsp
O.exe: CMakeFiles/O.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable O.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\O.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/O.dir/build: O.exe
.PHONY : CMakeFiles/O.dir/build

CMakeFiles/O.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\O.dir\cmake_clean.cmake
.PHONY : CMakeFiles/O.dir/clean

CMakeFiles/O.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug" "C:\Users\islam\problem_solving\codeforces\assuit sheet\sheet#1\cmake-build-debug\CMakeFiles\O.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/O.dir/depend
