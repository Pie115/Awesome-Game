#pragma once
#include "playableCharacter.h"

class GameManager {
    public:
    GameManager();
    ~GameManager();
    void GameLoop();
    void AddPlayableCharacter(PlayableCharacter* character);
    void AddEnemy(Enemy* enemy);
   
   
    private:
    void OutputGameScreen(PlayerCharacter player, Enemy enemy, int round);
    char getInput();
    void AccessItemShop(PlayableCharacter& player);
    void OutputInvalidInput();
    void GameOverScreen();
    Enemy* GenerateNewEnemy(int round);
    void DeleteCharacters();


}