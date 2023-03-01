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
        virtual void setNames(std::string n);
        virtual void setHealth(double h);
        virtual void setDamage(double d);
        virtual void setResistance(double r);
        virtual void setStartingVoiceLine(std::string SVL);  //svl = starting voice line
        virtual void setEndingVoiceLine(std::string EVL);    //evl = ending voice line
        virtual void addRandomVoiceLine(std::string RVL);    //rvl = random voice line

        // getter

        virtual std::string getNames() const;
        virtual double getHealth() const;
        virtual double getDamage() const;
        virtual double getResistance() const;
        virtual std::string getStartingVoiceLine() const;
        virtual std::string getEndingVoiceLine() const;
        virtual std::string getRandomVoiceLine() const;
        
        // Attak function.
        virtual double baseAttack();

    private:
        std::string names = ""; 
        double health = 0;
        double damage = 0;
        double resistance = 0;
        std::string startingVoiceLine = "";
        std::string endingVoiceLine = "";
        std::vector<std::string> randomVoiceLine;


}


#endif // CHARACTER_HPP