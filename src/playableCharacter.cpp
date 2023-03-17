#include "../header/character.h"
#include "../header/playableCharacter.h"

void PlayableCharacter::setPlayableAbility(abilities* a) {
    PlayableAbility.push_back(a);
}

void PlayableCharacter::setPlayableItems(items* a){
    PlayableItems.push_back(a);
}

int PlayableCharacter::getAbilityNum(){
    return PlayableAbility.size();
}

int PlayableCharacter::getItemNum(){
    return PlayableItems.size();
}

abilities* PlayableCharacter::getPlayableAbility(int index){ 
    return PlayableAbility[index];
}

items* PlayableCharacter::getPlayableItems(int index){
    return PlayableItems[index];
}
