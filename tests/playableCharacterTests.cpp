#include "gtest/gtest.h"
#include "../header/abilities.h"
#include "../header/items.h"
#include "../header/boss.h"
#include "../header/character.h"
#include "../header/Game.h"
#include "../header/playableCharacter.h"


TEST(playerTest, createPlayerTest) {
    EXPECT_NO_THROW (PlayableCharacter* p = new PlayableCharacter());
}

TEST(playerTest, setAbilityTest) {
    PlayableCharacter* p = new PlayableCharacter();
    abilities* ability = new abilities();
    EXPECT_NO_THROW (p->setPlayableAbility(ability));
}

TEST(playerTest, setItemTest) {
    PlayableCharacter* p = new PlayableCharacter();
    items* item = new items();
    EXPECT_NO_THROW (p->setPlayableItems(item));
}

TEST(playerTest, getAbilityTest) {
    PlayableCharacter* p = new PlayableCharacter();
    abilities* ability = new abilities();
    p->setPlayableAbility(ability);
    EXPECT_NO_THROW (p->getPlayableAbility(0));
}

TEST(playerTest, getItemTest) {
    PlayableCharacter* p = new PlayableCharacter();
    items* item = new items();
    p->setPlayableItems(item);
    EXPECT_NO_THROW (p->getPlayableItems(0));
}

