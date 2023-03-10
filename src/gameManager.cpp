#include iostream
#include gameManager.h

void GameManager::GameLoop() {
    bool gameOver = false;
    PlayableCharacter player;
    Enemy enemy; 
    int round = 1;
    while(!gameOver) {
           OutputGameScreen(player, enemy, round);
           char input = GetInput();
        switch (input)
           {
      
        case 'a': //player attacks
            if(enemy.isDefeated()) {
            enemy = GenerateNewEnemy(round);
            round++;
           }
           break;
        
        case 'd': //player defends
           player.Defend();
           break;

        case 'i': //access item shop
           AccessItemShop(player);
           break;

        case 'q': //quit game
           game_over = true;
           break;
        
           
        default:
            OutputInvalidInput();
            break;
           }
             // Enemy attacks
        if (!enemy.IsDefeated()) {
            enemy.Attack(player);
            if (player.IsDefeated()) {
                // Player defeated
                game_over = true;
            }
        }
    }

    // Output game over screen to console
    OutputGameOverScreen(player_score);
}
    
void GameManager::OutputGameScreen(PlayerCharacter player, Enemy enemy, int round_number) {
    std::cout << "Round " << round_number << "\n\n";
    std::cout << "Player: " << player.GetName() << "\n";
    std::cout << "HP: " << player.GetHealth() << "\n\n";
    std::cout << "Enemy: " << enemy.GetName() << "\n";
    std::cout << "HP: " << enemy.GetHealth() << "\n\n";
    std::cout << "Options:\n";
    std::cout << "a - Attack\n";
    std::cout << "d - Defend\n";
    std::cout << "i - Item shop\n";
    std::cout << "q - Quit game\n\n";
}
char GameManager::GetInput() {
    char input;
    std::cout << "Enter option: ";
    std::cin >> input;
    std::cout << "\n";
    return input;
}

void GameManager::AccessItemShop(PlayerCharacter& player) {
 
}

void GameManager::OutputInvalidInput() {
    std::cout << "Invalid input. Please try again.\n\n";
}

void GameManager::OutputGameOverScreen(int player_score) {
    std::cout << "Game over\n";
    std::cout << "Final score: " << player_score << "\n";
}

Enemy GameManager::GenerateNewEnemy(int round_number) {

}






