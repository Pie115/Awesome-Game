# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /home/csmajs/pgoul002/final-project-awesome-game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csmajs/pgoul002/final-project-awesome-game

# Include any dependencies generated for this target.
include CMakeFiles/test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test.dir/flags.make

CMakeFiles/test.dir/test.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/test.cpp.o: test.cpp
CMakeFiles/test.dir/test.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csmajs/pgoul002/final-project-awesome-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test.dir/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/test.cpp.o -MF CMakeFiles/test.dir/test.cpp.o.d -o CMakeFiles/test.dir/test.cpp.o -c /home/csmajs/pgoul002/final-project-awesome-game/test.cpp

CMakeFiles/test.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csmajs/pgoul002/final-project-awesome-game/test.cpp > CMakeFiles/test.dir/test.cpp.i

CMakeFiles/test.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csmajs/pgoul002/final-project-awesome-game/test.cpp -o CMakeFiles/test.dir/test.cpp.s

CMakeFiles/test.dir/src/boss.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/boss.cpp.o: src/boss.cpp
CMakeFiles/test.dir/src/boss.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csmajs/pgoul002/final-project-awesome-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test.dir/src/boss.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/boss.cpp.o -MF CMakeFiles/test.dir/src/boss.cpp.o.d -o CMakeFiles/test.dir/src/boss.cpp.o -c /home/csmajs/pgoul002/final-project-awesome-game/src/boss.cpp

CMakeFiles/test.dir/src/boss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/src/boss.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csmajs/pgoul002/final-project-awesome-game/src/boss.cpp > CMakeFiles/test.dir/src/boss.cpp.i

CMakeFiles/test.dir/src/boss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/boss.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csmajs/pgoul002/final-project-awesome-game/src/boss.cpp -o CMakeFiles/test.dir/src/boss.cpp.s

CMakeFiles/test.dir/src/character.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/character.cpp.o: src/character.cpp
CMakeFiles/test.dir/src/character.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csmajs/pgoul002/final-project-awesome-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/test.dir/src/character.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/character.cpp.o -MF CMakeFiles/test.dir/src/character.cpp.o.d -o CMakeFiles/test.dir/src/character.cpp.o -c /home/csmajs/pgoul002/final-project-awesome-game/src/character.cpp

CMakeFiles/test.dir/src/character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/src/character.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csmajs/pgoul002/final-project-awesome-game/src/character.cpp > CMakeFiles/test.dir/src/character.cpp.i

CMakeFiles/test.dir/src/character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/character.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csmajs/pgoul002/final-project-awesome-game/src/character.cpp -o CMakeFiles/test.dir/src/character.cpp.s

CMakeFiles/test.dir/src/playableCharacter.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/playableCharacter.cpp.o: src/playableCharacter.cpp
CMakeFiles/test.dir/src/playableCharacter.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csmajs/pgoul002/final-project-awesome-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/test.dir/src/playableCharacter.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/playableCharacter.cpp.o -MF CMakeFiles/test.dir/src/playableCharacter.cpp.o.d -o CMakeFiles/test.dir/src/playableCharacter.cpp.o -c /home/csmajs/pgoul002/final-project-awesome-game/src/playableCharacter.cpp

CMakeFiles/test.dir/src/playableCharacter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/src/playableCharacter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csmajs/pgoul002/final-project-awesome-game/src/playableCharacter.cpp > CMakeFiles/test.dir/src/playableCharacter.cpp.i

CMakeFiles/test.dir/src/playableCharacter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/playableCharacter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csmajs/pgoul002/final-project-awesome-game/src/playableCharacter.cpp -o CMakeFiles/test.dir/src/playableCharacter.cpp.s

CMakeFiles/test.dir/src/Game.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/Game.cpp.o: src/Game.cpp
CMakeFiles/test.dir/src/Game.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csmajs/pgoul002/final-project-awesome-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/test.dir/src/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/Game.cpp.o -MF CMakeFiles/test.dir/src/Game.cpp.o.d -o CMakeFiles/test.dir/src/Game.cpp.o -c /home/csmajs/pgoul002/final-project-awesome-game/src/Game.cpp

CMakeFiles/test.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/src/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csmajs/pgoul002/final-project-awesome-game/src/Game.cpp > CMakeFiles/test.dir/src/Game.cpp.i

CMakeFiles/test.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csmajs/pgoul002/final-project-awesome-game/src/Game.cpp -o CMakeFiles/test.dir/src/Game.cpp.s

CMakeFiles/test.dir/src/abilities.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/abilities.cpp.o: src/abilities.cpp
CMakeFiles/test.dir/src/abilities.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csmajs/pgoul002/final-project-awesome-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/test.dir/src/abilities.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/abilities.cpp.o -MF CMakeFiles/test.dir/src/abilities.cpp.o.d -o CMakeFiles/test.dir/src/abilities.cpp.o -c /home/csmajs/pgoul002/final-project-awesome-game/src/abilities.cpp

CMakeFiles/test.dir/src/abilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/src/abilities.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csmajs/pgoul002/final-project-awesome-game/src/abilities.cpp > CMakeFiles/test.dir/src/abilities.cpp.i

CMakeFiles/test.dir/src/abilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/abilities.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csmajs/pgoul002/final-project-awesome-game/src/abilities.cpp -o CMakeFiles/test.dir/src/abilities.cpp.s

# Object files for target test
test_OBJECTS = \
"CMakeFiles/test.dir/test.cpp.o" \
"CMakeFiles/test.dir/src/boss.cpp.o" \
"CMakeFiles/test.dir/src/character.cpp.o" \
"CMakeFiles/test.dir/src/playableCharacter.cpp.o" \
"CMakeFiles/test.dir/src/Game.cpp.o" \
"CMakeFiles/test.dir/src/abilities.cpp.o"

# External object files for target test
test_EXTERNAL_OBJECTS =

test: CMakeFiles/test.dir/test.cpp.o
test: CMakeFiles/test.dir/src/boss.cpp.o
test: CMakeFiles/test.dir/src/character.cpp.o
test: CMakeFiles/test.dir/src/playableCharacter.cpp.o
test: CMakeFiles/test.dir/src/Game.cpp.o
test: CMakeFiles/test.dir/src/abilities.cpp.o
test: CMakeFiles/test.dir/build.make
test: lib/libgmock.a
test: lib/libgtest.a
test: lib/libgtest_main.a
test: lib/libgtest.a
test: CMakeFiles/test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csmajs/pgoul002/final-project-awesome-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test.dir/build: test
.PHONY : CMakeFiles/test.dir/build

CMakeFiles/test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test.dir/clean

CMakeFiles/test.dir/depend:
	cd /home/csmajs/pgoul002/final-project-awesome-game && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csmajs/pgoul002/final-project-awesome-game /home/csmajs/pgoul002/final-project-awesome-game /home/csmajs/pgoul002/final-project-awesome-game /home/csmajs/pgoul002/final-project-awesome-game /home/csmajs/pgoul002/final-project-awesome-game/CMakeFiles/test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test.dir/depend

