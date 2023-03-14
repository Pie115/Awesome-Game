#include "../header/Game.h"

void Game::Allocate(){
    player = new PlayableCharacter();
    boss = new Boss();

    megasmash = new abilities();

    swordslash = new abilities();
    shieldbash = new abilities();
    whirlwind = new abilities();
    heartpierce = new abilities();

    piercingshot = new abilities();
    explosivearrow = new abilities();
    multishot = new abilities();
    headshot = new abilities();

    fireball = new abilities();
    iceshard = new abilities();
    lightingstrike = new abilities();
    polymorph = new abilities();



}

void Game::MainMenu(){
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

void Game::StartGame(const string& name, int characterclass){
    //boss_abilities
    megasmash->setAbilityName("Mega Smash");
    megasmash->setAbilityDamageMultiplier(1);
    megasmash->setAbilityPercentMiss(40);

    //warrior_abilities
    swordslash->setAbilityName("Sword Slash");
    swordslash->setAbilityDamageMultiplier(1.3);
    swordslash->setAbilityPercentMiss(40);

    shieldbash->setAbilityName("Shield Bash");
    shieldbash->setAbilityDamageMultiplier(0.5);
    shieldbash->setAbilityPercentMiss(0);

    whirlwind->setAbilityName("Whirlwind");
    whirlwind->setAbilityDamageMultiplier(0.7);
    whirlwind->setAbilityPercentMiss(20);

    heartpierce->setAbilityName("Heart Pierce");
    heartpierce->setAbilityDamageMultiplier(1000);
    heartpierce->setAbilityPercentMiss(99);

    //archer_abilities
    piercingshot->setAbilityName("Piercing Shot");
    piercingshot->setAbilityDamageMultiplier(1.9);
    piercingshot->setAbilityPercentMiss(50);

    explosivearrow->setAbilityName("Explosive Arrow");
    explosivearrow->setAbilityDamageMultiplier(0.7);
    explosivearrow->setAbilityPercentMiss(10);

    multishot->setAbilityName("multishot");
    multishot->setAbilityDamageMultiplier(0.9);
    multishot->setAbilityPercentMiss(20);

    headshot->setAbilityName("Head Shot");
    headshot->setAbilityDamageMultiplier(1000);
    headshot->setAbilityPercentMiss(99);

    //mage_abilities
    fireball->setAbilityName("Fireball");
    fireball->setAbilityDamageMultiplier(2);
    fireball->setAbilityPercentMiss(55);

    iceshard->setAbilityName("Ice Shard");
    iceshard->setAbilityDamageMultiplier(0.6);
    iceshard->setAbilityPercentMiss(10);

    lightingstrike->setAbilityName("lightningstrike");
    lightingstrike->setAbilityDamageMultiplier(0.3);
    lightingstrike->setAbilityPercentMiss(0);

    polymorph->setAbilityName("Polymorph");
    polymorph->setAbilityDamageMultiplier(1000);
    polymorph->setAbilityPercentMiss(95);


    player->setNames(name);
    player->setHealth(400);
    player->setDamage(20);


    if(characterclass == 1){
        cout<<"You've chosen the warrior"<<endl;
        player->setPlayableAbility(swordslash);
        player->setPlayableAbility(shieldbash);
        player->setPlayableAbility(whirlwind);
        player->setPlayableAbility(heartpierce);
    }
    if(characterclass == 2){
        cout<<"You've chosen the archer"<<endl;
        player->setPlayableAbility(piercingshot);
        player->setPlayableAbility(explosivearrow);
        player->setPlayableAbility(multishot);
        player->setPlayableAbility(headshot);
    }
    if(characterclass == 3){
        cout<<"You've chosen the mage"<<endl;
        player->setPlayableAbility(fireball);
        player->setPlayableAbility(iceshard);
        player->setPlayableAbility(lightingstrike);
        player->setPlayableAbility(polymorph);
    }
    boss->setNames("A weird looking training dummy");
    boss->setHealth(200);
    boss->setDamage(10);
    boss->setBossAbility(megasmash);
    boss->setStartingVoiceLine("I will crush you!");
    boss->setRandomVoiceLine("Take this!");
    boss->setRandomVoiceLine("You won't stand a chance!");
    boss->setRandomVoiceLine("Good luck with this!");
    boss->setEndingVoiceLine("How is this even possible?!?!");


}


void Game::RunGame(){ 
    string name;
    int characterclass;
    cout<<"Welcome fighter, please enter a name you would like to go by:"<<endl;
    cin>>name;
    cout<<"Great, now pick a class:"<<endl;
    cout<<"1: Warrior"<<endl;
    cout<<"2: Archer"<<endl;
    cout<<"3: Mage"<<endl; 
    cin>>characterclass;
    while(characterclass <= 0 || (!cin.good()) || characterclass > 3){
        cout<<"Enter a valid option:"<<endl;
        cout<<"1: Warrior"<<endl;
        cout<<"2: Archer"<<endl;
        cout<<"3: Mage"<<endl;
        cin>>characterclass;
    }
    StartGame(name, characterclass);

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
        system("clear");
        if(player_action == 1){
            cout<<"Which ability would you like to use?"<<endl;
            cout<<"Choices:"<<endl;

            for(int i = 0; i < player->getAbilityNum(); i++){
                cout<<i+1<<": "<<(player->getPlayableAbility(i))->getAbilityName()<<endl;
            }
            cin>>player_action;
            while(player_action < 1 || player_action > player->getAbilityNum() || (!cin.good())){
                cout<<"That is not a valid choice, please select a valid ability"<<endl;
                cout<<"Choices:"<<endl;

                for(int i = 0; i < player->getAbilityNum(); i++){
                    cout<<i+1<<": "<<(player->getPlayableAbility(i))->getAbilityName()<<endl;
                }
                cin>>player_action;
            }
            cout<<player->getNames()<<" uses "<<(player->getPlayableAbility(player_action-1))->getAbilityName()<<endl;
            if((player->getPlayableAbility(player_action-1))->AttackMiss() == false){
                cout<<boss->getNames()<<" takes "<<player->getDamage() * (player->getPlayableAbility(player_action-1))->getAbilityDamageMultiplier()<<" damage!"<<endl;
                boss->takeDamage(player->getDamage() * (player->getPlayableAbility(player_action-1))->getAbilityDamageMultiplier());
            }
            else{
                cout<<"But it missed!"<<endl;
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
            abilities* boss_ability;
            boss_ability = boss->getBossAbility();

            int tempdamage;
            cout<<boss->getNames()<<" uses "<<boss_ability->getAbilityName()<<endl;

            if(boss_ability->AttackMiss() == false){
                if(block == true){
                    tempdamage = (0.5)*(boss->getDamage()) * (boss_ability->getAbilityDamageMultiplier());
                    cout<<player->getNames()<<" blocks! "<<player->getNames()<<" takes "<<tempdamage<<" damage!"<<endl;
                    player->takeDamage(tempdamage);
                }
                else{
                    tempdamage = (boss->getDamage()) * (boss_ability->getAbilityDamageMultiplier());
                    cout<<player->getNames()<<" takes "<<(boss->getDamage())<<" damage!"<<endl;
                    player->takeDamage(boss->getDamage());
                }
                tempdamage = 0;
            }
            else{
                cout<<"But it missed!"<<endl;
            }
        }
    }
    if(player->getHealth() <=0){
        cout<<player->getNames()<<" lost! Better luck next time!"<<endl;
    }
    else{
        cout<<boss->getNames()<<" was defeated! You may move on to the next boss!"<<endl;
    }
}
    
void Game::Deallocate(){
    delete player;
    delete boss;
    delete megasmash;

    delete swordslash;
    delete shieldbash;
    delete whirlwind;
    delete heartpierce;

    delete piercingshot;
    delete explosivearrow;
    delete multishot;
    delete headshot;

    delete fireball;
    delete iceshard;
    delete lightingstrike;
    delete polymorph;
}