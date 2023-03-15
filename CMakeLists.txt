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

ADD_EXECUTABLE(test
    tests/test.cpp
    src/boss.cpp
    src/character.cpp
    src/playableCharacter.cpp
    src/Game.cpp
    src/abilities.cpp
)

target_link_libraries(test gmock gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)