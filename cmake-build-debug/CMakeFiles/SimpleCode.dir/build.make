# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "D:\Northeastern\Northeastern Software\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Northeastern\Northeastern Software\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SimpleCode.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SimpleCode.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SimpleCode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimpleCode.dir/flags.make

CMakeFiles/SimpleCode.dir/main.cpp.obj: CMakeFiles/SimpleCode.dir/flags.make
CMakeFiles/SimpleCode.dir/main.cpp.obj: D:/Northeastern/Freshman/Fall\ Semester/GE\ 1501\ Cornerstone\ of\ Engineering\ I/CLionProjects/Cornerstone\ Project/main.cpp
CMakeFiles/SimpleCode.dir/main.cpp.obj: CMakeFiles/SimpleCode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SimpleCode.dir/main.cpp.obj"
	"D:\Northeastern\Northeastern Software\CLion 2023.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SimpleCode.dir/main.cpp.obj -MF CMakeFiles\SimpleCode.dir\main.cpp.obj.d -o CMakeFiles\SimpleCode.dir\main.cpp.obj -c "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project\main.cpp"

CMakeFiles/SimpleCode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimpleCode.dir/main.cpp.i"
	"D:\Northeastern\Northeastern Software\CLion 2023.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project\main.cpp" > CMakeFiles\SimpleCode.dir\main.cpp.i

CMakeFiles/SimpleCode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimpleCode.dir/main.cpp.s"
	"D:\Northeastern\Northeastern Software\CLion 2023.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project\main.cpp" -o CMakeFiles\SimpleCode.dir\main.cpp.s

# Object files for target SimpleCode
SimpleCode_OBJECTS = \
"CMakeFiles/SimpleCode.dir/main.cpp.obj"

# External object files for target SimpleCode
SimpleCode_EXTERNAL_OBJECTS =

SimpleCode.exe: CMakeFiles/SimpleCode.dir/main.cpp.obj
SimpleCode.exe: CMakeFiles/SimpleCode.dir/build.make
SimpleCode.exe: CMakeFiles/SimpleCode.dir/linkLibs.rsp
SimpleCode.exe: CMakeFiles/SimpleCode.dir/objects1.rsp
SimpleCode.exe: CMakeFiles/SimpleCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SimpleCode.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SimpleCode.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimpleCode.dir/build: SimpleCode.exe
.PHONY : CMakeFiles/SimpleCode.dir/build

CMakeFiles/SimpleCode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SimpleCode.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SimpleCode.dir/clean

CMakeFiles/SimpleCode.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project" "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project" "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project\cmake-build-debug" "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project\cmake-build-debug" "D:\Northeastern\Freshman\Fall Semester\GE 1501 Cornerstone of Engineering I\CLionProjects\Cornerstone Project\cmake-build-debug\CMakeFiles\SimpleCode.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SimpleCode.dir/depend

