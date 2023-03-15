CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(AwesomeGame
    src/main.cpp
    src/boss.cpp
    src/character.cpp
    src/playableCharacter.cpp
    src/Game.cpp
    src/abilities.cpp
)

