#include "gtest/gtest.h"
#include "../header/abilities.h"
#include "../header/boss.h"
#include "../header/character.h"
#include "../header/Game.h"
#include "../header/playableCharacter.h"


TEST(gameTest, createGameTest) {
    EXPECT_NO_THROW (Game* g = new Game());
}


TEST(gameTest, startGameTest) {
    Game* g = new Game();
    EXPECT_NO_THROW (g->StartGame("hello", 1));
}

