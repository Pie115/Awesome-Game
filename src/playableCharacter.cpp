#include "./header/character.h"
#include "./header/playableCharacter.h"

void PlayableCharacter::setPlayablePassive(std::string input_passive) {
    PlayablePassive = input_passive;
}

/*
void PlayableCharacter::setPlayableAbility(Abilities input_ability) {

}

void PlayableCharacter::setPlayableItems(Items input_item){

}
*/

std::string PlayableCharacter::getPlayablePassive(){
    return PlayablePassive;
}

/*
std::string PlayableCharacter::getPlayableAbility(){
    
}

std::string PlayableCharacter::getPlayableItems(){
    
}
*/