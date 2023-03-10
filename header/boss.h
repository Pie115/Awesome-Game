#ifndef BOSS_HPP
#define BOSS_HPP
#include "./header/character.h"
#include <vector>
#include <string>

class Boss : public Character
{
    private: 
        std::vector<std::string> bossPassive;
        std::vector<std::string> bossAbility;
        std::vector<std::string> bossItem;
        std::string startingVoiceLine = "";
        std::string endingVoiceLine = "";
        std::vector<std::string> randomVoiceLine;
    
    public:
        //setters
        void setBossPassive(std::string&);
        void setBossAbility(std::string&);
        void setBossItem(std::string&);
        void setStartingVoiceLine(std::string&);
        void setEndingVoiceLine(std::string&);
        void setRandomVoiceLine(std::string&);

        //getters
        std::vector<std::string> getBossPassive() const;
        std::vector<std::string> getBossAbility() const;
        std::vector<std::string> getBossItem() const;
        std::string getStartingVoiceLine() const;
        std::string getEndingVoiceLine() const;
        std::string getRandomVoiceLine() const;
}






#endif //BOSS_HPP