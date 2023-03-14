#ifndef ABILITIES_HPP
#define ABILITIES_HPP
#include <vector>
#include <string>
#include <cstdlib> 

using namespace std;

class abilities
{
    private:
        string abilityname; 
        double damagemultiplier; 
        int percentmiss;
    public:
        void setAbilityName(string name);
        void setAbilityDamageMultiplier(double damage);
        void setAbilityPercentMiss(int percentmiss);

        string getAbilityName();
        double getAbilityDamageMultiplier();
        int getAbilityPercentMiss();
        bool AttackMiss();
};






#endif //ABILITIES_HPP