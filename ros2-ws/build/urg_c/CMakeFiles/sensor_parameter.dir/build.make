# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/precag/Documents/ros2-ws/src/urg_c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/precag/Documents/ros2-ws/build/urg_c

# Include any dependencies generated for this target.
include CMakeFiles/sensor_parameter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sensor_parameter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sensor_parameter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sensor_parameter.dir/flags.make

CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.o: CMakeFiles/sensor_parameter.dir/flags.make
CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.o: /home/precag/Documents/ros2-ws/src/urg_c/current/samples/sensor_parameter.c
CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.o: CMakeFiles/sensor_parameter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/precag/Documents/ros2-ws/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.o -MF CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.o.d -o CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.o -c /home/precag/Documents/ros2-ws/src/urg_c/current/samples/sensor_parameter.c

CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/precag/Documents/ros2-ws/src/urg_c/current/samples/sensor_parameter.c > CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.i

CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/precag/Documents/ros2-ws/src/urg_c/current/samples/sensor_parameter.c -o CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.s

# Object files for target sensor_parameter
sensor_parameter_OBJECTS = \
"CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.o"

# External object files for target sensor_parameter
sensor_parameter_EXTERNAL_OBJECTS =

sensor_parameter: CMakeFiles/sensor_parameter.dir/current/samples/sensor_parameter.c.o
sensor_parameter: CMakeFiles/sensor_parameter.dir/build.make
sensor_parameter: libopen_urg_sensor.a
sensor_parameter: liburg_c.so
sensor_parameter: CMakeFiles/sensor_parameter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/precag/Documents/ros2-ws/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sensor_parameter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sensor_parameter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sensor_parameter.dir/build: sensor_parameter
.PHONY : CMakeFiles/sensor_parameter.dir/build

CMakeFiles/sensor_parameter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sensor_parameter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sensor_parameter.dir/clean

CMakeFiles/sensor_parameter.dir/depend:
	cd /home/precag/Documents/ros2-ws/build/urg_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/precag/Documents/ros2-ws/src/urg_c /home/precag/Documents/ros2-ws/src/urg_c /home/precag/Documents/ros2-ws/build/urg_c /home/precag/Documents/ros2-ws/build/urg_c /home/precag/Documents/ros2-ws/build/urg_c/CMakeFiles/sensor_parameter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sensor_parameter.dir/depend
