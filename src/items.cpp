#include "../header/items.h"

using namespace std;

void items::setItemName(string name){
    itemname = name;
}

void items::setDamagePoints(int inputdamagepoints){
    damagepoints = inputdamagepoints;
}

void items::setHealPoints(int inputhealpoints){
    healpoints = inputhealpoints;
}

string items::getItemName(){
    return itemname;
}

int items::getDamagePoints(){
    return damagepoints;
}

int items::getHealPoints(){
    return healpoints;
}