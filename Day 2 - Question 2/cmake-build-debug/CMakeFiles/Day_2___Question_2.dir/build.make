# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\5th Semester\CPP\Day 2 - Question 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\5th Semester\CPP\Day 2 - Question 2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Day_2___Question_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Day_2___Question_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Day_2___Question_2.dir/flags.make

CMakeFiles/Day_2___Question_2.dir/main.cpp.obj: CMakeFiles/Day_2___Question_2.dir/flags.make
CMakeFiles/Day_2___Question_2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\5th Semester\CPP\Day 2 - Question 2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Day_2___Question_2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Day_2___Question_2.dir\main.cpp.obj -c "E:\5th Semester\CPP\Day 2 - Question 2\main.cpp"

CMakeFiles/Day_2___Question_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day_2___Question_2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\5th Semester\CPP\Day 2 - Question 2\main.cpp" > CMakeFiles\Day_2___Question_2.dir\main.cpp.i

CMakeFiles/Day_2___Question_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day_2___Question_2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\5th Semester\CPP\Day 2 - Question 2\main.cpp" -o CMakeFiles\Day_2___Question_2.dir\main.cpp.s

CMakeFiles/Day_2___Question_2.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Day_2___Question_2.dir/main.cpp.obj.requires

CMakeFiles/Day_2___Question_2.dir/main.cpp.obj.provides: CMakeFiles/Day_2___Question_2.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Day_2___Question_2.dir\build.make CMakeFiles/Day_2___Question_2.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Day_2___Question_2.dir/main.cpp.obj.provides

CMakeFiles/Day_2___Question_2.dir/main.cpp.obj.provides.build: CMakeFiles/Day_2___Question_2.dir/main.cpp.obj


# Object files for target Day_2___Question_2
Day_2___Question_2_OBJECTS = \
"CMakeFiles/Day_2___Question_2.dir/main.cpp.obj"

# External object files for target Day_2___Question_2
Day_2___Question_2_EXTERNAL_OBJECTS =

Day_2___Question_2.exe: CMakeFiles/Day_2___Question_2.dir/main.cpp.obj
Day_2___Question_2.exe: CMakeFiles/Day_2___Question_2.dir/build.make
Day_2___Question_2.exe: CMakeFiles/Day_2___Question_2.dir/linklibs.rsp
Day_2___Question_2.exe: CMakeFiles/Day_2___Question_2.dir/objects1.rsp
Day_2___Question_2.exe: CMakeFiles/Day_2___Question_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\5th Semester\CPP\Day 2 - Question 2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Day_2___Question_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Day_2___Question_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Day_2___Question_2.dir/build: Day_2___Question_2.exe

.PHONY : CMakeFiles/Day_2___Question_2.dir/build

CMakeFiles/Day_2___Question_2.dir/requires: CMakeFiles/Day_2___Question_2.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Day_2___Question_2.dir/requires

CMakeFiles/Day_2___Question_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Day_2___Question_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Day_2___Question_2.dir/clean

CMakeFiles/Day_2___Question_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\5th Semester\CPP\Day 2 - Question 2" "E:\5th Semester\CPP\Day 2 - Question 2" "E:\5th Semester\CPP\Day 2 - Question 2\cmake-build-debug" "E:\5th Semester\CPP\Day 2 - Question 2\cmake-build-debug" "E:\5th Semester\CPP\Day 2 - Question 2\cmake-build-debug\CMakeFiles\Day_2___Question_2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Day_2___Question_2.dir/depend

