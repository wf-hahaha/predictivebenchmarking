# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/valerio/slampbenchmarking/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/valerio/slampbenchmarking/build

# Include any dependencies generated for this target.
include navigation/map_server/CMakeFiles/map_server-map_saver.dir/depend.make

# Include the progress variables for this target.
include navigation/map_server/CMakeFiles/map_server-map_saver.dir/progress.make

# Include the compile flags for this target's objects.
include navigation/map_server/CMakeFiles/map_server-map_saver.dir/flags.make

navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o: navigation/map_server/CMakeFiles/map_server-map_saver.dir/flags.make
navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o: /home/valerio/slampbenchmarking/src/navigation/map_server/src/map_saver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/valerio/slampbenchmarking/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o"
	cd /home/valerio/slampbenchmarking/build/navigation/map_server && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o -c /home/valerio/slampbenchmarking/src/navigation/map_server/src/map_saver.cpp

navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.i"
	cd /home/valerio/slampbenchmarking/build/navigation/map_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/valerio/slampbenchmarking/src/navigation/map_server/src/map_saver.cpp > CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.i

navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.s"
	cd /home/valerio/slampbenchmarking/build/navigation/map_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/valerio/slampbenchmarking/src/navigation/map_server/src/map_saver.cpp -o CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.s

navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o.requires:

.PHONY : navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o.requires

navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o.provides: navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o.requires
	$(MAKE) -f navigation/map_server/CMakeFiles/map_server-map_saver.dir/build.make navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o.provides.build
.PHONY : navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o.provides

navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o.provides.build: navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o


# Object files for target map_server-map_saver
map_server__map_saver_OBJECTS = \
"CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o"

# External object files for target map_server-map_saver
map_server__map_saver_EXTERNAL_OBJECTS =

/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: navigation/map_server/CMakeFiles/map_server-map_saver.dir/build.make
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/libtf.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/libtf2_ros.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/libactionlib.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/libmessage_filters.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/libroscpp.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/libtf2.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/librosconsole.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/librostime.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /opt/ros/kinetic/lib/libcpp_common.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/valerio/slampbenchmarking/devel/lib/map_server/map_saver: navigation/map_server/CMakeFiles/map_server-map_saver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/valerio/slampbenchmarking/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/valerio/slampbenchmarking/devel/lib/map_server/map_saver"
	cd /home/valerio/slampbenchmarking/build/navigation/map_server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/map_server-map_saver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
navigation/map_server/CMakeFiles/map_server-map_saver.dir/build: /home/valerio/slampbenchmarking/devel/lib/map_server/map_saver

.PHONY : navigation/map_server/CMakeFiles/map_server-map_saver.dir/build

navigation/map_server/CMakeFiles/map_server-map_saver.dir/requires: navigation/map_server/CMakeFiles/map_server-map_saver.dir/src/map_saver.cpp.o.requires

.PHONY : navigation/map_server/CMakeFiles/map_server-map_saver.dir/requires

navigation/map_server/CMakeFiles/map_server-map_saver.dir/clean:
	cd /home/valerio/slampbenchmarking/build/navigation/map_server && $(CMAKE_COMMAND) -P CMakeFiles/map_server-map_saver.dir/cmake_clean.cmake
.PHONY : navigation/map_server/CMakeFiles/map_server-map_saver.dir/clean

navigation/map_server/CMakeFiles/map_server-map_saver.dir/depend:
	cd /home/valerio/slampbenchmarking/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/valerio/slampbenchmarking/src /home/valerio/slampbenchmarking/src/navigation/map_server /home/valerio/slampbenchmarking/build /home/valerio/slampbenchmarking/build/navigation/map_server /home/valerio/slampbenchmarking/build/navigation/map_server/CMakeFiles/map_server-map_saver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : navigation/map_server/CMakeFiles/map_server-map_saver.dir/depend

