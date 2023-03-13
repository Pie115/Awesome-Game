#ifndef GAME_HPP
#define GAME_HPP
#include "boss.h"
#include "playableCharacter.h"
#include <iostream>

class Game
{

    private:
        PlayableCharacter* player = new PlayableCharacter();
        Boss* boss = new Boss(); 

    public:
        void RunGame();
};




#endif GAME_HPP