#ifndef BOSS_HPP
#define BOSS_HPP
#include "./header/character.h"
#include <vector>
#include <string>

using namespace std;

class Boss : public Character
{
    private: 
        vector<string> bossPassive;
        vector<string> bossAbility;
        vector<string> bossItem;
        string startingVoiceLine = "";
        string endingVoiceLine = "";
        vector<string> randomVoiceLine;
    
    public:
        //setters
        void setBossPassive(const string& s);
        void setBossAbility(const string& s);
        void setBossItem(const string& s);
        void setStartingVoiceLine(const string& s);
        void setEndingVoiceLine(const string& s);
        void setRandomVoiceLine(const string& s);

        //getters
        vector<string> getBossPassive() const;
        vector<string> getBossAbility() const;
        vector<string> getBossItem() const;
        string getStartingVoiceLine() const;
        string getEndingVoiceLine() const;
        string getRandomVoiceLine() const;
};


#endif