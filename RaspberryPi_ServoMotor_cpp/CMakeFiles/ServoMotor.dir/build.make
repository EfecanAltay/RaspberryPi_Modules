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
CMAKE_SOURCE_DIR = /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp

# Include any dependencies generated for this target.
include CMakeFiles/ServoMotor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ServoMotor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ServoMotor.dir/flags.make

CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o: CMakeFiles/ServoMotor.dir/flags.make
CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o: src/servoMotor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o -c /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/src/servoMotor.cpp

CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/src/servoMotor.cpp > CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.i

CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/src/servoMotor.cpp -o CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.s

CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o.requires:

.PHONY : CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o.requires

CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o.provides: CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o.requires
	$(MAKE) -f CMakeFiles/ServoMotor.dir/build.make CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o.provides.build
.PHONY : CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o.provides

CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o.provides.build: CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o


CMakeFiles/ServoMotor.dir/main.cpp.o: CMakeFiles/ServoMotor.dir/flags.make
CMakeFiles/ServoMotor.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ServoMotor.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ServoMotor.dir/main.cpp.o -c /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/main.cpp

CMakeFiles/ServoMotor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ServoMotor.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/main.cpp > CMakeFiles/ServoMotor.dir/main.cpp.i

CMakeFiles/ServoMotor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ServoMotor.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/main.cpp -o CMakeFiles/ServoMotor.dir/main.cpp.s

CMakeFiles/ServoMotor.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ServoMotor.dir/main.cpp.o.requires

CMakeFiles/ServoMotor.dir/main.cpp.o.provides: CMakeFiles/ServoMotor.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ServoMotor.dir/build.make CMakeFiles/ServoMotor.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ServoMotor.dir/main.cpp.o.provides

CMakeFiles/ServoMotor.dir/main.cpp.o.provides.build: CMakeFiles/ServoMotor.dir/main.cpp.o


# Object files for target ServoMotor
ServoMotor_OBJECTS = \
"CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o" \
"CMakeFiles/ServoMotor.dir/main.cpp.o"

# External object files for target ServoMotor
ServoMotor_EXTERNAL_OBJECTS =

ServoMotor: CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o
ServoMotor: CMakeFiles/ServoMotor.dir/main.cpp.o
ServoMotor: CMakeFiles/ServoMotor.dir/build.make
ServoMotor: /usr/local/lib/libwiringPi.so
ServoMotor: CMakeFiles/ServoMotor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ServoMotor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ServoMotor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ServoMotor.dir/build: ServoMotor

.PHONY : CMakeFiles/ServoMotor.dir/build

CMakeFiles/ServoMotor.dir/requires: CMakeFiles/ServoMotor.dir/src/servoMotor.cpp.o.requires
CMakeFiles/ServoMotor.dir/requires: CMakeFiles/ServoMotor.dir/main.cpp.o.requires

.PHONY : CMakeFiles/ServoMotor.dir/requires

CMakeFiles/ServoMotor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ServoMotor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ServoMotor.dir/clean

CMakeFiles/ServoMotor.dir/depend:
	cd /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp /home/pi/raspberryPi_Modules/RaspberryPi_ServoMotor_cpp/CMakeFiles/ServoMotor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ServoMotor.dir/depend

