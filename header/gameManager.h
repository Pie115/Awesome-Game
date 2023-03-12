#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include "Enemy.h"
#include "Game.h"
using namespace std;

class GameManager {

    public:
    GameManager();
    ~GameManager();
    void runGame();
   
    private:
    void setPlayerName(string name);
    string getPlayerName() const;
    void setSelectedCharacter(int characterIndex);
    int getSelectedCharacter() const;
  
    void OutputGameScreen(int round_number) const;
    char GetInput() const;
    void displayMenu();
    void handleInput(char input);
    void AttackEnemy();
    void Defend();
    void OutputInvalidInput() const;
    void OutputGameOverScreen() const;
    shared_ptr<Enemy> GenerateNewEnemy(int round_number) const;
    
    PlayableCharacter* player;
    Game* game;
    string playerName;
    int selectedCharacterIndex;


}
#endif