#include "../header/boss.h"
#include "../header/playableCharacter.h"
#include "../header/Game.h"
#include <iostream>
using namespace std;

int main()
{
    Game* game = new Game();
    
    game->MainMenu();
    game->RunGame();

    return 0;
}