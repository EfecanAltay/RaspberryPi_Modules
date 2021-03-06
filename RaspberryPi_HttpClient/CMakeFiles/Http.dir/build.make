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
CMAKE_SOURCE_DIR = /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient

# Include any dependencies generated for this target.
include CMakeFiles/Http.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Http.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Http.dir/flags.make

CMakeFiles/Http.dir/httpClient.cpp.o: CMakeFiles/Http.dir/flags.make
CMakeFiles/Http.dir/httpClient.cpp.o: httpClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Http.dir/httpClient.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Http.dir/httpClient.cpp.o -c /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/httpClient.cpp

CMakeFiles/Http.dir/httpClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Http.dir/httpClient.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/httpClient.cpp > CMakeFiles/Http.dir/httpClient.cpp.i

CMakeFiles/Http.dir/httpClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Http.dir/httpClient.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/httpClient.cpp -o CMakeFiles/Http.dir/httpClient.cpp.s

CMakeFiles/Http.dir/httpClient.cpp.o.requires:

.PHONY : CMakeFiles/Http.dir/httpClient.cpp.o.requires

CMakeFiles/Http.dir/httpClient.cpp.o.provides: CMakeFiles/Http.dir/httpClient.cpp.o.requires
	$(MAKE) -f CMakeFiles/Http.dir/build.make CMakeFiles/Http.dir/httpClient.cpp.o.provides.build
.PHONY : CMakeFiles/Http.dir/httpClient.cpp.o.provides

CMakeFiles/Http.dir/httpClient.cpp.o.provides.build: CMakeFiles/Http.dir/httpClient.cpp.o


CMakeFiles/Http.dir/main.cpp.o: CMakeFiles/Http.dir/flags.make
CMakeFiles/Http.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Http.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Http.dir/main.cpp.o -c /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/main.cpp

CMakeFiles/Http.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Http.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/main.cpp > CMakeFiles/Http.dir/main.cpp.i

CMakeFiles/Http.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Http.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/main.cpp -o CMakeFiles/Http.dir/main.cpp.s

CMakeFiles/Http.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Http.dir/main.cpp.o.requires

CMakeFiles/Http.dir/main.cpp.o.provides: CMakeFiles/Http.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Http.dir/build.make CMakeFiles/Http.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Http.dir/main.cpp.o.provides

CMakeFiles/Http.dir/main.cpp.o.provides.build: CMakeFiles/Http.dir/main.cpp.o


# Object files for target Http
Http_OBJECTS = \
"CMakeFiles/Http.dir/httpClient.cpp.o" \
"CMakeFiles/Http.dir/main.cpp.o"

# External object files for target Http
Http_EXTERNAL_OBJECTS =

Http: CMakeFiles/Http.dir/httpClient.cpp.o
Http: CMakeFiles/Http.dir/main.cpp.o
Http: CMakeFiles/Http.dir/build.make
Http: /usr/lib/arm-linux-gnueabihf/libcurl.so
Http: /usr/lib/arm-linux-gnueabihf/libcurl.so
Http: CMakeFiles/Http.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Http"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Http.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Http.dir/build: Http

.PHONY : CMakeFiles/Http.dir/build

CMakeFiles/Http.dir/requires: CMakeFiles/Http.dir/httpClient.cpp.o.requires
CMakeFiles/Http.dir/requires: CMakeFiles/Http.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Http.dir/requires

CMakeFiles/Http.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Http.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Http.dir/clean

CMakeFiles/Http.dir/depend:
	cd /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient /home/pi/raspberryPi_Modules/RaspberryPi_HttpClient/CMakeFiles/Http.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Http.dir/depend

