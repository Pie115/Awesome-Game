#ifndef BOSS_HPP
#define BOSS_HPP
#include "character.h"
#include "abilities.h"
#include <vector>
#include <string>
#include <cstdlib> 

using namespace std;

class Boss : public Character
{
    private: 
        vector<abilities*> bossAbility;
        vector<string> bossItem;
        string startingVoiceLine = "";
        string endingVoiceLine = "";
        vector<string> randomVoiceLine;
    
    public:
        //setters
        void setBossAbility(abilities* s);
        void setBossItem(const string& s);
        void setStartingVoiceLine(const string& s);
        void setEndingVoiceLine(const string& s);
        void setRandomVoiceLine(const string& s);

        //getters
        abilities* getBossAbility();
        vector<string> getBossItem() const;
        string getStartingVoiceLine() const;
        string getEndingVoiceLine() const;
        string getRandomVoiceLine() const;
};


#endif //BOSS_HPP