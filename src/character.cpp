#include "../header/character.h"


Character::Character(){

}
Character::~Character(){
    
}
// setter

void Character::setNames(const string& n){
    names = n;
}
void Character::setHealth(int h){
    health = h;
}
void Character::setDamage(int d){
    damage = d;
}

void Character::takeDamage(int d){
    health = health - d;
}

void Character::heal(int h){
    health = health + h;
}

string Character::getNames() const{ 
    return names; 
}
int Character::getHealth() const { 
    return health; 
}
int Character::getDamage() const { 
    return damage; 
}

