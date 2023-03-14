#include "../header/character.h"
#include "../header/boss.h"


using namespace std;


void Boss::setBossAbility(abilities* s){
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

abilities* Boss::getBossAbility(){ 
    srand(time(nullptr));
    return bossAbility[rand() % bossAbility.size()];
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
    srand(time(nullptr));
    // return random voice from 0 to randomVoiceLine.capacity.
    return randomVoiceLine[rand() % randomVoiceLine.size()];
}