CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(AwesomeGame
    src/main.cpp
    src/boss.cpp
    src/character.cpp
    src/playableCharacter.cpp
    src/Game.cpp
    src/abilities.cpp
    src/items.cpp
)

ADD_EXECUTABLE(test
    tests/gametest.cpp
    tests/abilitytest.cpp
    tests/itemstest.cpp
    tests/bosstest.cpp
    tests/playableCharacterTests.cpp
    tests/characterTest.cpp
    src/boss.cpp
    src/character.cpp
    src/playableCharacter.cpp
    src/Game.cpp
    src/abilities.cpp
    src/items.cpp
)

target_link_libraries(test gmock gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)