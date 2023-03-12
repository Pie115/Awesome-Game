#include "./header/character.h"
#include "./header/playableCharacter.h"

void PlayableCharacter::setPlayableAbility(const string& a) {
    PlayableAbility.push_back(a);
}

void PlayableCharacter::setPlayableItems(const string& a){
    PlayableItems.push_back(a);
}

string PlayableCharacter::getPlayableAbility(int index){ 
    return PlayableAbility[index];
}

string PlayableCharacter::getPlayableItems(int index){
    return PlayableItems[index];
}
