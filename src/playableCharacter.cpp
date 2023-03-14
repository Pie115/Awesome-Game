#include "../header/character.h"
#include "../header/playableCharacter.h"

void PlayableCharacter::setPlayableAbility(abilities* a) {
    PlayableAbility.push_back(a);
}

void PlayableCharacter::setPlayableItems(const string& a){
    PlayableItems.push_back(a);
}

int PlayableCharacter::getAbilityNum(){
    return PlayableAbility.size();
}
abilities* PlayableCharacter::getPlayableAbility(int index){ 
    return PlayableAbility[index];
}

string PlayableCharacter::getPlayableItems(int index){
    return PlayableItems[index];
}
