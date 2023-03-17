#ifndef PLAYABLECHARACTER_HPP
#define PLAYABLECHARACTER_HPP
#include "character.h"
#include "abilities.h"
#include "items.h"

using namespace std;

class PlayableCharacter : public Character
{
    private:
        vector<abilities*> PlayableAbility; 
        vector<items*> PlayableItems; 
    public:
        void setPlayableAbility(abilities* a); 
        void setPlayableItems(items* a); 

        int getAbilityNum();
        int getItemNum();
        
        abilities* getPlayableAbility(int index);
        items* getPlayableItems(int index);
};

#endif //PLAYABLECHARACTER_HPP