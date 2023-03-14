#include "../header/boss.h"
#include "../header/playableCharacter.h"
#include "../header/Game.h"
#include <iostream>
using namespace std;

int main()
{
    Game* game = new Game();
    game->Allocate();
    game->MainMenu();
    game->RunGame();
    game->Deallocate();

    delete game;
    return 0;
}