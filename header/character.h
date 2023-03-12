#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <vector>

using namespace std; 
class Character
{
    public:
        Character();
        ~Character();

        // setter
        void setNames(const string& n);
        void setHealth(int h);
        void setDamage(int d);
        void takeDamage(int d);
        // getter

        string getNames() const;
        int getHealth() const;
        int getDamage() const;
        
    private:
        string names = ""; 
        int health = 0;
        int damage = 0;

};


#endif // CHARACTER_HPP