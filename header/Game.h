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



    public:
        void Allocate();
        void MainMenu();
        void StartGame(const string& name, int characterclass);
        void RunGame();
        void Deallocate();
};




#endif //GAME_HPP