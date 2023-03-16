#include "../header/boss.h"
#include "../header/playableCharacter.h"
#include "../header/Game.h"
#include <iostream>
using namespace std;

int main()
{
    Game* game = new Game();
    if(game->MainMenu() != 0){
        game->RunGame();
    }
    delete game;
    return 0;
}