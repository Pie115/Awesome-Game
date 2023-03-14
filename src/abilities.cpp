#include "../header/abilities.h"

using namespace std;

void abilities::setAbilityName(string name){
    abilityname = name;
}


void abilities::setAbilityDamageMultiplier(double damage){
    damagemultiplier = damage; 
}


void abilities::setAbilityPercentMiss(int pmiss){
    percentmiss = pmiss;
}


string abilities::getAbilityName(){
    return abilityname;
}


double abilities::getAbilityDamageMultiplier(){
    return damagemultiplier;
}


int abilities::getAbilityPercentMiss(){
    return percentmiss;
}


bool abilities::AttackMiss(){
    srand(time(nullptr));

    int x = rand()%100;

    if(x >= percentmiss){
        return false;
    }
    return true;
}