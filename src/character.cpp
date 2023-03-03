#include "./header/character.h"
Character::Character();
Character::~Character();
// setter

virtual void Character::setNames(std::string n):names(n){}
virtual void Character::setHealth(int h):health(h){};
virtual void Character::setDamage(int d):damage(d){};

// getter

virtual std::string Character::getNames() const { return names; }
virtual int Character::getHealth() const { return health; }
virtual int Character::getDamage() const { return damage; }

