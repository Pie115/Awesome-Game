#include "./header/boss.h"
#include "./header/playableCharacter.h"
#include "./header/Game.h"
#include <iostream>
using namespace std;

void mainMenu(){
    int menu_choice = 0;
    cout<<"Welcome to Awesome Game!!"<<endl;
    cout<<"Input 0 to quit game"<<endl;
    cout<<"Input 1 to start game"<<endl;
    cout<<"Input 2 for info on how to play"<<endl;

    cin>>menu_choice;

    while(menu_choice < 0 || (!cin.good()) || menu_choice >= 2){
        if(menu_choice == 2){
            cout<<"Awesome game is a turn based fighting game!"<<endl;
            cout<<"As the player you shall face off against an array of different battles"<<endl;
            cout<<"You will use different abilities and items to defeat your enemies"<<endl;
            cout<<"With smart decision making and luck, you should be victorious"<<endl;
            cout<<"Good luck! You will need it >:)"<<endl;
        }

        else{
        cin.clear();
        cin.ignore(1, '\n');
        cout<<"Enter a valid option: "<<endl;
        }

        cout<<"Input 0 to quit game"<<endl;
        cout<<"Input 1 to start game"<<endl;
        cout<<"Input 2 for info on how to play"<<endl;
        cin>>menu_choice;
    }

    if(menu_choice == 0){
        abort();
    }

}

int main()
{
    Game* game = new Game();
    mainMenu();
    
    game->RunGame();

    return 0;
}