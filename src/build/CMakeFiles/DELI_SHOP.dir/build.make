# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = C:\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src\build

# Include any dependencies generated for this target.
include CMakeFiles/DELI_SHOP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DELI_SHOP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DELI_SHOP.dir/flags.make

CMakeFiles/DELI_SHOP.dir/Main.cpp.obj: CMakeFiles/DELI_SHOP.dir/flags.make
CMakeFiles/DELI_SHOP.dir/Main.cpp.obj: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DELI_SHOP.dir/Main.cpp.obj"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DELI_SHOP.dir\Main.cpp.obj -c C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src\Main.cpp

CMakeFiles/DELI_SHOP.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DELI_SHOP.dir/Main.cpp.i"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src\Main.cpp > CMakeFiles\DELI_SHOP.dir\Main.cpp.i

CMakeFiles/DELI_SHOP.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DELI_SHOP.dir/Main.cpp.s"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src\Main.cpp -o CMakeFiles\DELI_SHOP.dir\Main.cpp.s

# Object files for target DELI_SHOP
DELI_SHOP_OBJECTS = \
"CMakeFiles/DELI_SHOP.dir/Main.cpp.obj"

# External object files for target DELI_SHOP
DELI_SHOP_EXTERNAL_OBJECTS =

DELI_SHOP.exe: CMakeFiles/DELI_SHOP.dir/Main.cpp.obj
DELI_SHOP.exe: CMakeFiles/DELI_SHOP.dir/build.make
DELI_SHOP.exe: CMakeFiles/DELI_SHOP.dir/linklibs.rsp
DELI_SHOP.exe: CMakeFiles/DELI_SHOP.dir/objects1.rsp
DELI_SHOP.exe: CMakeFiles/DELI_SHOP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DELI_SHOP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DELI_SHOP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DELI_SHOP.dir/build: DELI_SHOP.exe

.PHONY : CMakeFiles/DELI_SHOP.dir/build

CMakeFiles/DELI_SHOP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DELI_SHOP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DELI_SHOP.dir/clean

CMakeFiles/DELI_SHOP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src\build C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src\build C:\Users\RAJARSI\Documents\GitHub\DELI_SHOP\src\build\CMakeFiles\DELI_SHOP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DELI_SHOP.dir/depend

