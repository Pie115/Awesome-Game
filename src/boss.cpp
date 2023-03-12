#include "./header/boss.h"
#include <cstdlib> 

using namespace std;

void Boss::setBossPassive(const string& s){
    bossPassive.push_back(s);
}

void Boss::setBossAbility(const string& s){
    bossAbility.push_back(s);
}

void Boss::setBossItem(const string& s){
    bossItem.push_back(s);
}

void Boss::setStartingVoiceLine(const string& s){
    startingVoiceLine = s;
}

void Boss::setEndingVoiceLine(const string& s){
    endingVoiceLine = s;    
}

void Boss::setRandomVoiceLine(const string& s){
    randomVoiceLine.push_back(s);
}


vector<string> Boss::getBossPassive() const { 
    return bossPassive;
}

vector<string> Boss::getBossAbility() const { 
    return bossAbility;
}

vector<string> Boss::getBossItem() const { 
    return bossItem;
}

string Boss::getStartingVoiceLine() const { 
    return startingVoiceLine;
}

string Boss::getEndingVoiceLine() const { 
    return endingVoiceLine;
}

string Boss::getRandomVoiceLine() const
{
    // return random voice from 0 to randomVoiceLine.capacity.
    return randomVoiceLine[rand() % randomVoiceLine.size()];
}