# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/silence/Documents/again/attention

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/silence/Documents/again/attention

# Utility rule file for SCM_CONFIG.

# Include any custom commands dependencies for this target.
include opencog/CMakeFiles/SCM_CONFIG.dir/compiler_depend.make

# Include the progress variables for this target.
include opencog/CMakeFiles/SCM_CONFIG.dir/progress.make

SCM_CONFIG: opencog/CMakeFiles/SCM_CONFIG.dir/build.make
.PHONY : SCM_CONFIG

# Rule to build all files generated by this target.
opencog/CMakeFiles/SCM_CONFIG.dir/build: SCM_CONFIG
.PHONY : opencog/CMakeFiles/SCM_CONFIG.dir/build

opencog/CMakeFiles/SCM_CONFIG.dir/clean:
	cd /home/silence/Documents/again/attention/opencog && $(CMAKE_COMMAND) -P CMakeFiles/SCM_CONFIG.dir/cmake_clean.cmake
.PHONY : opencog/CMakeFiles/SCM_CONFIG.dir/clean

opencog/CMakeFiles/SCM_CONFIG.dir/depend:
	cd /home/silence/Documents/again/attention && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/silence/Documents/again/attention /home/silence/Documents/again/attention/opencog /home/silence/Documents/again/attention /home/silence/Documents/again/attention/opencog /home/silence/Documents/again/attention/opencog/CMakeFiles/SCM_CONFIG.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : opencog/CMakeFiles/SCM_CONFIG.dir/depend
