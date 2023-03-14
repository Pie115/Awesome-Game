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

    public:
        void Allocate();
        void MainMenu();
        void StartGame(const string& name);
        void RunGame();
        void Deallocate();
};




#endif //GAME_HPP