# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/code/CommandParseTool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/code/CommandParseTool/build

# Include any dependencies generated for this target.
include CMakeFiles/cmdparse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmdparse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmdparse.dir/flags.make

CMakeFiles/cmdparse.dir/utility/Value.cpp.o: CMakeFiles/cmdparse.dir/flags.make
CMakeFiles/cmdparse.dir/utility/Value.cpp.o: ../utility/Value.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/code/CommandParseTool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cmdparse.dir/utility/Value.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cmdparse.dir/utility/Value.cpp.o -c /root/code/CommandParseTool/utility/Value.cpp

CMakeFiles/cmdparse.dir/utility/Value.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmdparse.dir/utility/Value.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/code/CommandParseTool/utility/Value.cpp > CMakeFiles/cmdparse.dir/utility/Value.cpp.i

CMakeFiles/cmdparse.dir/utility/Value.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmdparse.dir/utility/Value.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/code/CommandParseTool/utility/Value.cpp -o CMakeFiles/cmdparse.dir/utility/Value.cpp.s

CMakeFiles/cmdparse.dir/utility/command.cpp.o: CMakeFiles/cmdparse.dir/flags.make
CMakeFiles/cmdparse.dir/utility/command.cpp.o: ../utility/command.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/code/CommandParseTool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cmdparse.dir/utility/command.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cmdparse.dir/utility/command.cpp.o -c /root/code/CommandParseTool/utility/command.cpp

CMakeFiles/cmdparse.dir/utility/command.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmdparse.dir/utility/command.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/code/CommandParseTool/utility/command.cpp > CMakeFiles/cmdparse.dir/utility/command.cpp.i

CMakeFiles/cmdparse.dir/utility/command.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmdparse.dir/utility/command.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/code/CommandParseTool/utility/command.cpp -o CMakeFiles/cmdparse.dir/utility/command.cpp.s

# Object files for target cmdparse
cmdparse_OBJECTS = \
"CMakeFiles/cmdparse.dir/utility/Value.cpp.o" \
"CMakeFiles/cmdparse.dir/utility/command.cpp.o"

# External object files for target cmdparse
cmdparse_EXTERNAL_OBJECTS =

../lib/libcmdparse.so: CMakeFiles/cmdparse.dir/utility/Value.cpp.o
../lib/libcmdparse.so: CMakeFiles/cmdparse.dir/utility/command.cpp.o
../lib/libcmdparse.so: CMakeFiles/cmdparse.dir/build.make
../lib/libcmdparse.so: CMakeFiles/cmdparse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/code/CommandParseTool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../lib/libcmdparse.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmdparse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmdparse.dir/build: ../lib/libcmdparse.so

.PHONY : CMakeFiles/cmdparse.dir/build

CMakeFiles/cmdparse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmdparse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmdparse.dir/clean

CMakeFiles/cmdparse.dir/depend:
	cd /root/code/CommandParseTool/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/code/CommandParseTool /root/code/CommandParseTool /root/code/CommandParseTool/build /root/code/CommandParseTool/build /root/code/CommandParseTool/build/CMakeFiles/cmdparse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmdparse.dir/depend

