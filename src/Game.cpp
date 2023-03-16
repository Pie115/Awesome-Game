#include "../header/Game.h"

Game::Game(){
    //character initialize
    player = new PlayableCharacter();
    corruptguardian = new Boss();
    necromancer = new Boss();
    eldritchHorror = new Boss();

    //corruptguardian abilities
    crushingblow = new abilities();
    deathcharge = new abilities();
    guardianswrath = new abilities();
    deathgrip = new abilities();

    //necromancer abilities
    deathcoil = new abilities();
    shadowbolt = new abilities();
    curseofdoom = new abilities();
    raisehell = new abilities();

    //eldritchhorror abilities
    tentaclestrike = new abilities();
    voidblast = new abilities();
    mindwarp = new abilities();
    natureswrath = new abilities();

    //warrior abilities;
    swordslash = new abilities();
    shieldbash = new abilities();
    whirlwind = new abilities();
    heartpierce = new abilities();

    //archer abilities
    piercingshot = new abilities();
    explosivearrow = new abilities();
    multishot = new abilities();
    headshot = new abilities();

    //mage abilities
    fireball = new abilities();
    iceshard = new abilities();
    lightingstrike = new abilities();
    polymorph = new abilities();

}


Game::~Game(){
    delete player;
    delete corruptguardian;
    delete necromancer;
    delete eldritchHorror;

    delete crushingblow;
    delete deathcharge;
    delete guardianswrath;
    delete deathgrip;

    delete deathcoil;
    delete shadowbolt;
    delete curseofdoom;
    delete raisehell;

    delete tentaclestrike;
    delete voidblast;
    delete mindwarp;
    delete natureswrath;

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
        exit(0);
    }
}

void Game::StartGame(const string& name, int characterclass){
    srand(time(nullptr));
    int randomboss;

    //guardian abilities
    crushingblow->setAbilityName("Crushing Blow");
    crushingblow->setAbilityDamageMultiplier(2);
    crushingblow->setAbilityPercentMiss(25);

    deathcharge->setAbilityName("Death Charge");
    deathcharge->setAbilityDamageMultiplier(2);
    deathcharge->setAbilityPercentMiss(23);
    
    guardianswrath->setAbilityName("Guardians Wrath");
    guardianswrath->setAbilityDamageMultiplier(2);
    guardianswrath->setAbilityPercentMiss(30); 

    deathgrip->setAbilityName("Death Grip");
    deathgrip->setAbilityDamageMultiplier(2);
    deathgrip->setAbilityPercentMiss(30);  

    //necromancer abilities

    deathcoil->setAbilityName("Death Coil");
    deathcoil->setAbilityDamageMultiplier(2.5);
    deathcoil->setAbilityPercentMiss(30);

    shadowbolt->setAbilityName("Shadow Bolt");
    shadowbolt->setAbilityDamageMultiplier(0.5);
    shadowbolt->setAbilityPercentMiss(0);
    
    curseofdoom->setAbilityName("Curse of Doom");
    curseofdoom->setAbilityDamageMultiplier(4);
    curseofdoom->setAbilityPercentMiss(90); 

    raisehell->setAbilityName("Raise Hell");
    raisehell->setAbilityDamageMultiplier(1);
    raisehell->setAbilityPercentMiss(20);  

    //Eldritch Horror abilities

    tentaclestrike->setAbilityName("Tentacle Strike");
    tentaclestrike->setAbilityDamageMultiplier(1.2);
    tentaclestrike->setAbilityPercentMiss(0);

    voidblast->setAbilityName("Void Blast");
    voidblast->setAbilityDamageMultiplier(1.5);
    voidblast->setAbilityPercentMiss(10);
    
    mindwarp->setAbilityName("Mind Warp");
    mindwarp->setAbilityDamageMultiplier(3);
    mindwarp->setAbilityPercentMiss(50); 

    natureswrath->setAbilityName("Natures Wrath");
    natureswrath->setAbilityDamageMultiplier(2.3);
    natureswrath->setAbilityPercentMiss(30);  
    
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
    heartpierce->setAbilityDamageMultiplier(10);
    heartpierce->setAbilityPercentMiss(80);

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
    headshot->setAbilityDamageMultiplier(15);
    headshot->setAbilityPercentMiss(90);

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
    polymorph->setAbilityPercentMiss(0);

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
    else if(characterclass == 2){
        cout<<"You've chosen the archer"<<endl;
        player->setPlayableAbility(piercingshot);
        player->setPlayableAbility(explosivearrow);
        player->setPlayableAbility(multishot);
        player->setPlayableAbility(headshot);
    }
    else if(characterclass == 3){
        cout<<"You've chosen the mage"<<endl;
        player->setPlayableAbility(fireball);
        player->setPlayableAbility(iceshard);
        player->setPlayableAbility(lightingstrike);
        player->setPlayableAbility(polymorph);
    }


    corruptguardian->setNames("Corrupt Guardian");
    corruptguardian->setHealth(200);
    corruptguardian->setDamage(10);
    corruptguardian->setBossAbility(crushingblow);
    corruptguardian->setBossAbility(deathcharge);
    corruptguardian->setBossAbility(guardianswrath);
    corruptguardian->setBossAbility(deathgrip);
    corruptguardian->setStartingVoiceLine("You dare to challenge me? Foolish mortals.");
    corruptguardian->setRandomVoiceLine("Take this!");
    corruptguardian->setRandomVoiceLine("I will not let you pass.");
    corruptguardian->setRandomVoiceLine("You cannot defeat me.");
    corruptguardian->setRandomVoiceLine("My power is unmatched.");
    corruptguardian->setRandomVoiceLine("You will regret this.");
    corruptguardian->setRandomVoiceLine("I am the guardian of this realm.");
    corruptguardian->setEndingVoiceLine("This isn't over yet. You will face me again.");


    necromancer->setNames("Necromancer");
    necromancer->setHealth(400);
    necromancer->setDamage(22);
    necromancer->setBossAbility(deathcoil);
    necromancer->setBossAbility(shadowbolt);
    necromancer->setBossAbility(curseofdoom);
    necromancer->setBossAbility(raisehell);
    necromancer->setStartingVoiceLine("Your death is inevitable.");
    necromancer->setRandomVoiceLine("You cannot stop the power of death.");
    necromancer->setRandomVoiceLine("You will join my army of the undead.");
    necromancer->setRandomVoiceLine("My magic is beyond your comprehension.");
    necromancer->setRandomVoiceLine("You will be consumed by darkness.");
    necromancer->setRandomVoiceLine("Your fate is sealed.");
    necromancer->setRandomVoiceLine("You cannot escape my grasp.");
    necromancer->setEndingVoiceLine("This is not the end. I will return, more powerful than before.");

    eldritchHorror->setNames("Eldritch Horror");
    eldritchHorror->setHealth(600);
    eldritchHorror->setDamage(25);
    eldritchHorror->setBossAbility(tentaclestrike);
    eldritchHorror->setBossAbility(mindwarp);
    eldritchHorror->setBossAbility(voidblast);
    eldritchHorror->setBossAbility(natureswrath);
    eldritchHorror->setStartingVoiceLine("Your reality is an illusion. Prepare to face true terror.");
    eldritchHorror->setRandomVoiceLine("You are not ready for the true nature of the universe.");
    eldritchHorror->setRandomVoiceLine("My form is beyond your comprehension.");
    eldritchHorror->setRandomVoiceLine("You cannot fathom the depths of my power.");
    eldritchHorror->setRandomVoiceLine("Your minds will shatter before me.");
    eldritchHorror->setRandomVoiceLine("Your sanity is a fleeting concept.");
    eldritchHorror->setRandomVoiceLine("The void beckons you.");
    eldritchHorror->setEndingVoiceLine("My essence cannot be destroyed. How is this possible.");


    firstBoss.push_back(corruptguardian);
    secondBoss.push_back(necromancer);
    finalBoss.push_back(eldritchHorror);

    randomboss = rand()%(finalBoss.size());
    bossOrder.push_back(finalBoss[randomboss]);
    randomboss = rand()%(secondBoss.size());
    bossOrder.push_back(secondBoss[randomboss]);
    randomboss = rand()%(firstBoss.size());
    bossOrder.push_back(firstBoss[randomboss]);
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

    int tempHealth = player->getHealth();
    while(bossOrder.size() > 0){
        Boss* tempboss = bossOrder[bossOrder.size()-1];
        cout<<"You will be facing against "<<tempboss->getNames()<<"!"<<endl;
        cout<<endl;
        cout<<tempboss->getNames()<<": '"<<tempboss->getStartingVoiceLine()<<"'"<<endl;
        while(tempboss->getHealth() > 0 && player->getHealth() > 0){

            int player_action;
            bool block = false;
            cout<<endl;
            cout<<player->getNames()<<" Health: "<<player->getHealth()<<endl;
            cout<<tempboss->getNames()<<" Health: "<<tempboss->getHealth()<<endl;
            cout<<"Players turn:"<<endl;
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
            cout<<endl;
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
                    cout<<tempboss->getNames()<<" takes "<<player->getDamage() * (player->getPlayableAbility(player_action-1))->getAbilityDamageMultiplier()<<" damage!"<<endl;
                    tempboss->takeDamage(player->getDamage() * (player->getPlayableAbility(player_action-1))->getAbilityDamageMultiplier());
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
                exit(0);
            }
            if(tempboss->getHealth() > 0){
                cout<<"Bosses turn:"<<endl;
                cout<<tempboss->getNames()<<": '"<<tempboss->getRandomVoiceLine()<<"'"<<endl;
                abilities* boss_ability;
                boss_ability = tempboss->getBossAbility();

                int tempdamage;
                cout<<tempboss->getNames()<<" uses "<<boss_ability->getAbilityName()<<endl;

                if(boss_ability->AttackMiss() == false){
                    if(block == true){
                        tempdamage = (0.5)*(tempboss->getDamage()) * (boss_ability->getAbilityDamageMultiplier());
                        cout<<player->getNames()<<" blocks! "<<player->getNames()<<" takes "<<tempdamage<<" damage!"<<endl;
                        player->takeDamage(tempdamage);
                    }
                    else{
                        tempdamage = (tempboss->getDamage()) * (boss_ability->getAbilityDamageMultiplier());
                        cout<<player->getNames()<<" takes "<<(tempboss->getDamage())<<" damage!"<<endl;
                        player->takeDamage(tempboss->getDamage());
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
        else if(tempboss->getHealth()<=0 && bossOrder.size() > 0){
            cout<<tempboss->getNames()<<": '"<<tempboss->getEndingVoiceLine()<<"'"<<endl;
            cout<<tempboss->getNames()<<" was defeated!"<<endl;
        }
        bossOrder.pop_back();
        player->setHealth(tempHealth);

        if(bossOrder.size() == 1){
            cout<<"You're about to face the last boss! Goodluck warrior."<<endl<<endl;
        }
    }
    cout<<"Congratulations warrior, you have defeated every boss. Let this day be a reminder of your greatness!"<<endl;
}
    
