# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Semester 2-2\Algorithoms\Lab Works\DPLast"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Semester 2-2\Algorithoms\Lab Works\DPLast\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/DPLast.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DPLast.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DPLast.dir/flags.make

CMakeFiles/DPLast.dir/main.cpp.obj: CMakeFiles/DPLast.dir/flags.make
CMakeFiles/DPLast.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semester 2-2\Algorithoms\Lab Works\DPLast\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DPLast.dir/main.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DPLast.dir\main.cpp.obj -c "D:\Semester 2-2\Algorithoms\Lab Works\DPLast\main.cpp"

CMakeFiles/DPLast.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DPLast.dir/main.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semester 2-2\Algorithoms\Lab Works\DPLast\main.cpp" > CMakeFiles\DPLast.dir\main.cpp.i

CMakeFiles/DPLast.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DPLast.dir/main.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semester 2-2\Algorithoms\Lab Works\DPLast\main.cpp" -o CMakeFiles\DPLast.dir\main.cpp.s

# Object files for target DPLast
DPLast_OBJECTS = \
"CMakeFiles/DPLast.dir/main.cpp.obj"

# External object files for target DPLast
DPLast_EXTERNAL_OBJECTS =

DPLast.exe: CMakeFiles/DPLast.dir/main.cpp.obj
DPLast.exe: CMakeFiles/DPLast.dir/build.make
DPLast.exe: CMakeFiles/DPLast.dir/linklibs.rsp
DPLast.exe: CMakeFiles/DPLast.dir/objects1.rsp
DPLast.exe: CMakeFiles/DPLast.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Semester 2-2\Algorithoms\Lab Works\DPLast\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DPLast.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DPLast.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DPLast.dir/build: DPLast.exe

.PHONY : CMakeFiles/DPLast.dir/build

CMakeFiles/DPLast.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DPLast.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DPLast.dir/clean

CMakeFiles/DPLast.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Semester 2-2\Algorithoms\Lab Works\DPLast" "D:\Semester 2-2\Algorithoms\Lab Works\DPLast" "D:\Semester 2-2\Algorithoms\Lab Works\DPLast\cmake-build-debug" "D:\Semester 2-2\Algorithoms\Lab Works\DPLast\cmake-build-debug" "D:\Semester 2-2\Algorithoms\Lab Works\DPLast\cmake-build-debug\CMakeFiles\DPLast.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/DPLast.dir/depend
