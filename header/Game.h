#ifndef GAME_HPP
#define GAME_HPP
#include "boss.h"
#include "playableCharacter.h"
#include <iostream>
#include <vector>

using namespace std;

class Game
{

    private:   

        PlayableCharacter* player;
        Boss* corruptguardian; 
        Boss* necromancer; 
        Boss* eldritchHorror; 

        vector<Boss*> firstBoss;
        vector<Boss*> secondBoss;
        vector<Boss*> finalBoss;
        vector<Boss*> bossOrder;

        abilities* crushingblow;
        abilities* deathcharge;
        abilities* guardianswrath;
        abilities* deathgrip;

        abilities* deathcoil;
        abilities* shadowbolt;
        abilities* curseofdoom;
        abilities* raisehell;

        abilities* tentaclestrike;
        abilities* voidblast;
        abilities* mindwarp;
        abilities* natureswrath;

        //warrior
        abilities* swordslash;
        abilities* shieldbash;
        abilities* whirlwind;
        abilities* heartpierce;

        //archer
        abilities* piercingshot;
        abilities* explosivearrow;
        abilities* multishot;
        abilities* headshot;
        
        //mage
        abilities* fireball;
        abilities* iceshard;
        abilities* lightingstrike;
        abilities* polymorph;




    public:
        Game();
        ~Game();
        int MainMenu();
        void StartGame(const string& name, int characterclass);
        int RunGame();
};




#endif //GAME_HPP