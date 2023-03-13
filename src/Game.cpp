#include "../header/Game.h"

void Game::RunGame(){ 
    string name;
    cout<<"Welcome fighter, please enter a name you would like to go by:"<<endl;
    cin>>name;
    player->setNames(name);
    player->setHealth(40);
    player->setDamage(20);
    player->setPlayableAbility("basic attack");

    boss->setNames("A weird looking training dummy");
    boss->setHealth(20);
    boss->setDamage(10);
    boss->setBossAbility("mega swing");
    boss->setStartingVoiceLine("I will crush you!");
    boss->setRandomVoiceLine("Take this!");
    boss->setRandomVoiceLine("You won't stand a chance!");
    boss->setRandomVoiceLine("Good luck with this!");
    boss->setEndingVoiceLine("How is this even possible?!?!");

    cout<<"Very well, "<<player->getNames()<<" I hope you prepared well"<<endl;
    cout<<"You will be facing against "<<boss->getNames()<<"!"<<endl;
    cout<<endl;

    cout<<boss->getNames()<<": '"<<boss->getStartingVoiceLine()<<"'"<<endl;
    while(boss->getHealth() > 0 && player->getHealth() > 0){

        int player_action;
        bool block = false;

        cout<<player->getNames()<<" Health: "<<player->getHealth()<<endl;
        cout<<boss->getNames()<<" Health: "<<boss->getHealth()<<endl;
        cout<<"Players turn, please input action"<<endl;
        cout<<"1: Use Ability"<<endl;
        cout<<"2: Block"<<endl;
        cout<<"3: Concede"<<endl;
        cout<<"4: Info"<<endl;
        cin>>player_action;

        while(player_action < 1 || player_action >= 4 || (!cin.good())){
            if(player_action == 4){
                cout<<"Here is a list of actions you may perform against the boss"<<endl;
                cout<<"Use ability allows you to select an ability from a list of your abilities"<<endl;
                cout<<"Block allows you to block this turn. If you block you will cut the damage you take from the boss in half"<<endl;
                cout<<"Concede allows you to leave the match early and end the game"<<endl;
            }
            else{
                cin.clear();
                cin.ignore(1, '\n');
                cout<<"Enter a valid option: "<<endl;
            }
            cout<<"1: Use Ability"<<endl;
            cout<<"2: Block"<<endl;
            cout<<"3: Concede"<<endl;
            cout<<"4: Info"<<endl;
            cin>>player_action;
        }
        if(player_action == 1){
            cout<<"Which ability would you like to use?"<<endl;
            cout<<"Choices:"<<endl;

            for(int i = 0; i < player->getAbilityNum(); i++){
                cout<<i+1<<": "<<player->getPlayableAbility(i)<<endl;
            }
            cin>>player_action;
            while(player_action < player->getAbilityNum() || player_action > player->getAbilityNum() || (!cin.good())){
                cout<<"That is not a valid choice, please select a valid ability"<<endl;
                cout<<"Choices:"<<endl;

                for(int i = 0; i < player->getAbilityNum(); i++){
                    cout<<i+1<<": "<<player->getPlayableAbility(i)<<endl;
                }
                cin>>player_action;
            }
            if(player->getPlayableAbility(player_action-1) == "basic attack"){
                cout<<player->getNames()<<" uses "<<player->getPlayableAbility(player_action-1)<<endl;
                cout<<boss->getNames()<<" takes "<<player->getDamage()<<" damage!"<<endl;
                boss->takeDamage(player->getDamage());
            }
            player_action = 0;
        }
        else if(player_action == 2){
            block = true;
        }
        else if(player_action == 3){
            cout<<"You conceded the match, the game will end"<<endl;
            abort();
        }
        if(boss->getHealth() > 0){
            cout<<"Bosses turn:"<<endl;
            cout<<boss->getNames()<<": '"<<boss->getRandomVoiceLine()<<"'"<<endl;
            string boss_ability;
            boss_ability = boss->getBossAbility();
            
            if(boss_ability == "mega swing"){
                cout<<boss->getNames()<<" uses "<<boss_ability<<endl;
                if(block == true){
                    cout<<player->getNames()<<" blocks!"<<player->getNames()<<" takes "<<(1/2)*(boss->getDamage())<<" damage!"<<endl;
                    player->takeDamage((1/2)*boss->getDamage());
                }
                else{
                    cout<<player->getNames()<<" takes "<<(boss->getDamage())<<" damage!"<<endl;
                    player->takeDamage(boss->getDamage());
                }
            }
        }
    }
    if(player->getHealth() <=0){
        cout<<player->getNames()<<" lost! Better luck next time!"<<endl;
    }
    else{
        cout<<boss->getNames()<<" was defeated! you may move on to the next"<<endl;
    }
}
