#include "gtest/gtest.h"
#include "../header/abilities.h"
#include "../header/boss.h"
#include "../header/character.h"
#include "../header/Game.h"
#include "../header/playableCharacter.h"

TEST(itemsTest, createItemsTest){
    EXPECT_NO_THROW (items* a = new items());
}

TEST(itemsTest, setItemNameTest){
    items* a = new items();
    EXPECT_NO_THROW (a->setItemName("Hello"));
}

TEST(itemsTest, setDamagePointsTest){
    items* a = new items();
    EXPECT_NO_THROW (a->setDamagePoints(60));
}

TEST(itemsTest, setHealPointsTest){
    items* a = new items();
    EXPECT_NO_THROW (a->setHealPoints(60));
}

TEST(itemsTest, getItemNameTest){
    items* a = new items();
    a->setItemName("Hello");
    EXPECT_NO_THROW (a->getItemName());
}

TEST(itemsTest, getDamagePointsTest){
    items* a = new items();
    a->setDamagePoints(60);
    EXPECT_NO_THROW (a->getDamagePoints());
}

TEST(itemsTest, getHealPointsTest){
    items* a = new items();
    a->setHealPoints(60);
    EXPECT_NO_THROW (a->getHealPoints());
}