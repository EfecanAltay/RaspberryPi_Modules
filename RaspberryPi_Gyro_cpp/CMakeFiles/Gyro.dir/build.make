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
CMAKE_SOURCE_DIR = /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp

# Include any dependencies generated for this target.
include CMakeFiles/Gyro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Gyro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Gyro.dir/flags.make

CMakeFiles/Gyro.dir/gyro.cpp.o: CMakeFiles/Gyro.dir/flags.make
CMakeFiles/Gyro.dir/gyro.cpp.o: gyro.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Gyro.dir/gyro.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Gyro.dir/gyro.cpp.o -c /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp/gyro.cpp

CMakeFiles/Gyro.dir/gyro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Gyro.dir/gyro.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp/gyro.cpp > CMakeFiles/Gyro.dir/gyro.cpp.i

CMakeFiles/Gyro.dir/gyro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Gyro.dir/gyro.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp/gyro.cpp -o CMakeFiles/Gyro.dir/gyro.cpp.s

CMakeFiles/Gyro.dir/gyro.cpp.o.requires:

.PHONY : CMakeFiles/Gyro.dir/gyro.cpp.o.requires

CMakeFiles/Gyro.dir/gyro.cpp.o.provides: CMakeFiles/Gyro.dir/gyro.cpp.o.requires
	$(MAKE) -f CMakeFiles/Gyro.dir/build.make CMakeFiles/Gyro.dir/gyro.cpp.o.provides.build
.PHONY : CMakeFiles/Gyro.dir/gyro.cpp.o.provides

CMakeFiles/Gyro.dir/gyro.cpp.o.provides.build: CMakeFiles/Gyro.dir/gyro.cpp.o


# Object files for target Gyro
Gyro_OBJECTS = \
"CMakeFiles/Gyro.dir/gyro.cpp.o"

# External object files for target Gyro
Gyro_EXTERNAL_OBJECTS =

Gyro: CMakeFiles/Gyro.dir/gyro.cpp.o
Gyro: CMakeFiles/Gyro.dir/build.make
Gyro: /usr/local/lib/libwiringPi.so
Gyro: CMakeFiles/Gyro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Gyro"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Gyro.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Gyro.dir/build: Gyro

.PHONY : CMakeFiles/Gyro.dir/build

CMakeFiles/Gyro.dir/requires: CMakeFiles/Gyro.dir/gyro.cpp.o.requires

.PHONY : CMakeFiles/Gyro.dir/requires

CMakeFiles/Gyro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Gyro.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Gyro.dir/clean

CMakeFiles/Gyro.dir/depend:
	cd /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp /home/pi/raspberryPi_Modules/RaspberryPi_Gyro_cpp/CMakeFiles/Gyro.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Gyro.dir/depend

