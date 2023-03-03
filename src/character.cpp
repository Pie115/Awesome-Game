#include "./header/character.h"
Character::Character();
Character::~Character();
// setter

virtual void Character::setNames(std::string n):names(n){}
virtual void Character::setHealth(double h):health(h){};
virtual void Character::setDamage(double d):damage(d){};
virtual void Character::setResistance(double r):resistance(r){};
virtual void Character::setStartingVoiceLine(std::string& SVL):startingVoiceLine(SVL){};  //svl = starting voice line
virtual void Character::setEndingVoiceLine(std::string& EVL):endingVoiceLine(EVL){};    //evl = ending voice line
virtual void Character::addRandomVoiceLine(std::string& RVL):randomVoiceLine(RVL){};    //rvl = random voice line

// getter

virtual std::string Character::getNames() const { return names; }
virtual double Character::getHealth() const { return health; }
virtual double Character::getDamage() const { return damage; }
virtual double Character::getResistance() const { return resistance; }
virtual std::string Character::getStartingVoiceLine() const { return startingVoiceLine; }
virtual std::string Character::getEndingVoiceLine() const { return endingVoiceLine; }
virtual std::string Character::getRandomVoiceLine() const { return randomVoiceLine; }

// Attak function.
virtual double Character::baseAttack();