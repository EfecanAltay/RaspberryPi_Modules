# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_SOURCE_DIR = /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp

# Include any dependencies generated for this target.
include CMakeFiles/L298N.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/L298N.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/L298N.dir/flags.make

CMakeFiles/L298N.dir/l298n.cpp.o: CMakeFiles/L298N.dir/flags.make
CMakeFiles/L298N.dir/l298n.cpp.o: l298n.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/L298N.dir/l298n.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/L298N.dir/l298n.cpp.o -c /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/l298n.cpp

CMakeFiles/L298N.dir/l298n.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/L298N.dir/l298n.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/l298n.cpp > CMakeFiles/L298N.dir/l298n.cpp.i

CMakeFiles/L298N.dir/l298n.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/L298N.dir/l298n.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/l298n.cpp -o CMakeFiles/L298N.dir/l298n.cpp.s

CMakeFiles/L298N.dir/l298n.cpp.o.requires:

.PHONY : CMakeFiles/L298N.dir/l298n.cpp.o.requires

CMakeFiles/L298N.dir/l298n.cpp.o.provides: CMakeFiles/L298N.dir/l298n.cpp.o.requires
	$(MAKE) -f CMakeFiles/L298N.dir/build.make CMakeFiles/L298N.dir/l298n.cpp.o.provides.build
.PHONY : CMakeFiles/L298N.dir/l298n.cpp.o.provides

CMakeFiles/L298N.dir/l298n.cpp.o.provides.build: CMakeFiles/L298N.dir/l298n.cpp.o


CMakeFiles/L298N.dir/main.cpp.o: CMakeFiles/L298N.dir/flags.make
CMakeFiles/L298N.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/L298N.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/L298N.dir/main.cpp.o -c /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/main.cpp

CMakeFiles/L298N.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/L298N.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/main.cpp > CMakeFiles/L298N.dir/main.cpp.i

CMakeFiles/L298N.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/L298N.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/main.cpp -o CMakeFiles/L298N.dir/main.cpp.s

CMakeFiles/L298N.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/L298N.dir/main.cpp.o.requires

CMakeFiles/L298N.dir/main.cpp.o.provides: CMakeFiles/L298N.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/L298N.dir/build.make CMakeFiles/L298N.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/L298N.dir/main.cpp.o.provides

CMakeFiles/L298N.dir/main.cpp.o.provides.build: CMakeFiles/L298N.dir/main.cpp.o


# Object files for target L298N
L298N_OBJECTS = \
"CMakeFiles/L298N.dir/l298n.cpp.o" \
"CMakeFiles/L298N.dir/main.cpp.o"

# External object files for target L298N
L298N_EXTERNAL_OBJECTS =

L298N: CMakeFiles/L298N.dir/l298n.cpp.o
L298N: CMakeFiles/L298N.dir/main.cpp.o
L298N: CMakeFiles/L298N.dir/build.make
L298N: /usr/local/lib/libwiringPi.so
L298N: CMakeFiles/L298N.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable L298N"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/L298N.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/L298N.dir/build: L298N

.PHONY : CMakeFiles/L298N.dir/build

CMakeFiles/L298N.dir/requires: CMakeFiles/L298N.dir/l298n.cpp.o.requires
CMakeFiles/L298N.dir/requires: CMakeFiles/L298N.dir/main.cpp.o.requires

.PHONY : CMakeFiles/L298N.dir/requires

CMakeFiles/L298N.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/L298N.dir/cmake_clean.cmake
.PHONY : CMakeFiles/L298N.dir/clean

CMakeFiles/L298N.dir/depend:
	cd /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp /home/pi/raspberryPi_Modules/RaspberryPi_L298N_cpp/CMakeFiles/L298N.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/L298N.dir/depend

