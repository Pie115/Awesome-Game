#ifndef PLAYABLECHARACTER_HPP
#define PLAYABLECHARACTER_HPP
#include "character.h"
#include "abilities.h"

using namespace std;

class PlayableCharacter : public Character
{
    private:
        vector<abilities*> PlayableAbility; 
        vector<string> PlayableItems; 
    public:
        void setPlayableAbility(abilities* a); 
        void setPlayableItems(const string& a); 

        int getAbilityNum();
        
        abilities* getPlayableAbility(int index);
        string getPlayableItems(int index);
};

#endif //PLAYABLECHARACTER_HPP