#include "gtest/gtest.h"
#include "../header/abilities.h"
#include "../header/boss.h"
#include "../header/character.h"
#include "../header/Game.h"
#include "../header/playableCharacter.h"


TEST(characterTest, createCharacterTest) {
    EXPECT_NO_THROW (Character* c = new Character());
}

TEST(characterTest, setNameTest) {
    Character* c = new Character();
    EXPECT_NO_THROW (c->setNames("Hello"));
}
TEST(characterTest, setHealthTest) {
    Character* c = new Character();
    EXPECT_NO_THROW (c->setHealth(20));
}
TEST(characterTest, setDamageTest) {
    Character* c = new Character();
    EXPECT_NO_THROW (c->setDamage(20));
}
TEST(characterTest, setHealTest) {
    Character* c = new Character();
    c->setHealth(20);
    EXPECT_NO_THROW (c->heal(20));
}
TEST(characterTest, getNameTest) {
    Character* c = new Character();
    c->setNames("Hello");
    EXPECT_NO_THROW (c->getNames());
}
TEST(characterTest, takeDamageTest) {
    Character* c = new Character();
    c->setHealth(20);
    EXPECT_NO_THROW (c->takeDamage(20));
}
TEST(characterTest, getHealthTest) {
    Character* c = new Character();
    c->setHealth(20);
    EXPECT_NO_THROW (c->getHealth());
}
TEST(characterTest, getDamageTest) {
    Character* c = new Character();
    c->setDamage(20);
    EXPECT_NO_THROW (c->getDamage());
}