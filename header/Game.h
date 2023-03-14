#ifndef GAME_HPP
#define GAME_HPP
#include "boss.h"
#include "playableCharacter.h"
#include <iostream>

class Game
{

    private:
        PlayableCharacter* player;
        Boss* boss; 
        abilities* megasmash;

        //warrior
        abilities* swordslash;
        abilities* shieldbash;
        abilities* whirlwind;
        abilities* heartpierce;

        abilities* piercingshot;
        abilities* explosivearrow;
        abilities* multishot;
        abilities* headshot;
        
        abilities* fireball;
        abilities* iceshard;
        abilities* lightingstrike;
        abilities* polymorph;




    public:
        Game();
        ~Game();
        void MainMenu();
        void StartGame(const string& name, int characterclass);
        void RunGame();
};




#endif //GAME_HPP