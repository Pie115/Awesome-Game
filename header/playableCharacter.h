#ifndef PLAYABLECHARACTER_HPP
#define PLAYABLECHARACTER_HPP
#include "character.h"

using namespace std;

class PlayableCharacter : public Character
{
    private:
        vector<string> PlayableAbility; 
        vector<string> PlayableItems; 
    public:
        void setPlayableAbility(const string& a); 
        void setPlayableItems(const string& a); 

        int getAbilityNum();
        
        string getPlayableAbility(int index);
        string getPlayableItems(int index);
};

#endif //PLAYABLECHARACTER_HPP