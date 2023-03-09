#include "./header/boss.h"

void Boss::setBossPassive(std::string&);

void Boss::setBossAbility(std::string&);

void Boss::setBossItem(std::string&);

void Boss::setStartingVoiceLine(std::string&);

void Boss::setEndingVoiceLine(std::string&);

void Boss::setRandomVoiceLine(std::string&);


vector<std::string> Boss::getBossPassive() const { return bossPassive;}

vector<std::string> Boss::getBossAbility() const { return bossAbility;}

vector<std::string> Boss::getBossItem() const { return bossItem;}

std::string Boss::getStartingVoiceLine() const { return startingVoiceLine;}

std::string Boss::getEndingVoiceLine() const { return endingVoiceLine;}

std::string Boss::getRandomVoiceLine() const
{
    // return random voice from 0 to randomVoiceLine.capacity.
    return randomVoiceLine.at(rand() % randomVoiceLine.capacity());
}