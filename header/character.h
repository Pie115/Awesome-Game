#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <vector>
class Character
{
    public:
        Character();
        ~Character();

        // setter
        virtual void setNames(std::string& n);
        virtual void setHealth(int h);
        virtual void setDamage(int d);

        // getter

        virtual std::string getNames() const;
        virtual int getHealth() const;
        virtual int getDamage() const;
        
    private:
        std::string names = ""; 
        int health = 0;
        int damage = 0;

}


#endif // CHARACTER_HPP