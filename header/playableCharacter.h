#ifndef PLAYABLECHARACTER_HPP
#define PLAYABLECHARACTER_HPP
#include "./header/character.h"
class PlayableCharacter : public Character
{
    private:
        std::string PlayablePassive;
        //std::vector<Abilities> PlayableAbility(); TODO - ADD ABILITY
        //std::vector<Items> PlayableItems(); TODO - ADD ITEMS

    public:
        void setPlayablePassive(std::string);
        void setPlayableAbility(); //TODO - ADD ABILITIES
        void setPlayableItems(); //TODO - ADD ABILITIES
        std::string getPlayablePassive();
        std::string getPlayableAbility();
        std::string getPlayableItems();
};

#endif PLAYABLECHARACTER_HPP;