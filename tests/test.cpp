#include "gtest/gtest.h"
#include "header/abilities.h"
#include "header/boss.h"
#include "header/character.h"
#include "header/Game.h"
#include "header/playableCharacter.h"


TEST(gameTest, test0) {

    EXPECT_NO_THROW (Game g = Game());
}

TEST(bossTest, test1) {

    Boss* boss = new Boss();
    EXPECT_NO_THROW (boss->setNames("osidn"));
}

