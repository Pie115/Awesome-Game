#include "gtest/gtest.h"
#include "../header/abilities.h"
#include "../header/boss.h"
#include "../header/character.h"
#include "../header/Game.h"
#include "../header/playableCharacter.h"


TEST(abilityTest, createAbilityTest) {
    EXPECT_NO_THROW (abilities* a = new abilities());
}

TEST(abilityTest, nameAbilityTest) {
    abilities* a = new abilities();
    EXPECT_NO_THROW (a->setAbilityName("Hello"));
}
TEST(abilityTest, damageAbilityTest) {
    abilities* a = new abilities();
    EXPECT_NO_THROW (a->setAbilityDamageMultiplier(30));
}
TEST(abilityTest, missAbilityTest) {
    abilities* a = new abilities();
    EXPECT_NO_THROW (a->setAbilityPercentMiss(30));
}
TEST(abilityTest, getNameAbilityTest) {
    abilities* a = new abilities();
    a->setAbilityName("Hello");
    EXPECT_NO_THROW (a->getAbilityName());
}
TEST(abilityTest, getDamageMultiplierTest) {
    abilities* a = new abilities();
    a->setAbilityDamageMultiplier(30);
    EXPECT_NO_THROW (a->getAbilityDamageMultiplier());
}
TEST(abilityTest, getPercentMissTest) {
    abilities* a = new abilities();
    a->setAbilityPercentMiss(30);
    EXPECT_NO_THROW (a->getAbilityPercentMiss());
}
TEST(abilityTest, attackmissTest) {
    abilities* a = new abilities();
    a->setAbilityPercentMiss(30);
    EXPECT_NO_THROW (a->AttackMiss());
}
