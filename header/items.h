#ifndef ITEMS_HPP
#define ITEMS_HPP
#include <vector>
#include <string>
#include <cstdlib> 

using namespace std;

class items
{
    private:
        string itemname; 
        int damagepoints; 
        int healpoints;
    public:
        void setItemName(string name);
        void setDamagePoints(int inputdamagepoints);
        void setHealPoints(int inputhealpoints);

        string getItemName();
        int getDamagePoints();
        int getHealPoints();
};

#endif //ITEMS_HPP