#include "gtest/gtest.h"
#include "../header/abilities.h"
#include "../header/boss.h"
#include "../header/character.h"
#include "../header/Game.h"
#include "../header/playableCharacter.h"


TEST(bossTest, createBossTest) {
    EXPECT_NO_THROW (Boss* g = new Boss());
}

TEST(bossTest, setAbilityTest) {
    Boss* boss = new Boss();
    abilities* ability = new abilities();
    EXPECT_NO_THROW (boss->setBossAbility(ability));
}

TEST(bossTest, setItemTest) {
    Boss* boss = new Boss();
    string item = "item";
    EXPECT_NO_THROW (boss->setBossItem(item));
}

TEST(bossTest, setStartingVoiceLineTest) {
    Boss* boss = new Boss();
    string voice = "voice";
    EXPECT_NO_THROW (boss->setStartingVoiceLine(voice));
}

TEST(bossTest, setEndingVoiceLineTest) {
    Boss* boss = new Boss();
    string voice = "voice";
    EXPECT_NO_THROW (boss->setEndingVoiceLine(voice));
}

TEST(bossTest, setRandomVoiceLineTest) {
    Boss* boss = new Boss();
    string voice = "voice";
    EXPECT_NO_THROW (boss->setRandomVoiceLine(voice));
}

TEST(bossTest, getAbilityTest) {
    Boss* boss = new Boss();
    abilities* ability = new abilities();
    boss->setBossAbility(ability);
    EXPECT_NO_THROW (boss->getBossAbility());
}

TEST(bossTest, getItemTest) {
    Boss* boss = new Boss();
    string item = "item";
    boss->setBossItem(item);
    EXPECT_NO_THROW (boss->getBossItem());
}

TEST(bossTest, getStartingVoiceLineTest) {
    Boss* boss = new Boss();
    string voice = "voice";
    boss->setStartingVoiceLine(voice);
    EXPECT_NO_THROW (boss->getStartingVoiceLine());
}

TEST(bossTest, getEndingVoiceLineTest) {
    Boss* boss = new Boss();
    string voice = "voice";
    boss->setEndingVoiceLine(voice);
    EXPECT_NO_THROW (boss->getEndingVoiceLine());
}

TEST(bossTest, getRandomVoiceLineTest) {
    Boss* boss = new Boss();
    string voice = "voice";
    boss->setRandomVoiceLine(voice);
    EXPECT_NO_THROW (boss->getRandomVoiceLine());
}
