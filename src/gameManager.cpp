#include iostream
#include gameManager.h
#include playableCharacter.h
#include enemy.h


using namespace std;

GameManger::GameManager() {
    player = new PlayableCharacter();
    game = new Game(player);
    enemy = GenerateNewEnemy(1);

}
GameManager::~GameManager() {
    delete player;
    delete game;
}


GameManager::runGame() {
    displayMenu();
    while(!game) {
        string input;
        getline(cin, input);
        handleInput(input);
        game.update();
    }
     game.displayGameOver();

}
void GameManager::setPlayerName(string name) {
    playerName = name;
    player->setName(playerName);
}
string GameManager::getPlayerName() const {
    return playerName;
}
GameManager::setSelectedCharacter(int characterIndex) {
    selectedCharacterIndex = characterIndex;
}
int GameManager::getSelectedCharacter() const {
    return selectedCharacterIndex;
}

void GameManager::displayMenu() {
    cout << "Welcome to the Awesome Fighting Game!\n\n";
    cout << "1. Start Game\n";
    cout << "2. Change Player Name\n";
    cout << "3. Change Character\n";
    cout << "4. Quit\n";
    cout << "\nEnter the number of your choice: ";
}

void GameManger::OutputInvalid() {
    
}

void GameManager::handleInput(string input) {
    if (input == "1") {
        game.startNewGame(playerName, selectedCharacterIndex);
    } else if (input == "2") {
        cout << "Enter your new name: ";
        getline(cin, input);
        setPlayerName(input);
    } else if (input == "3") {
        cout << "Select your character:\n";
        cout << "1. Archer\n";
        cout << "2. Mage\n";
        cout << "3. Warrior\n";
        cout << "\nEnter the number of your choice: ";
        getline(cin, input);
        setSelectedCharacter(stoi(input) - 1);
    } else if (input == "4") {
        game.quit();
    } else {
        cout << "Invalid input. Please try again.\n";
        displayMenu();
    }
}


 






