[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=9935895&assignment_repo_type=AssignmentRepo)

Authors:  

Paimon Goulart - https://github.com/Pie115. 

Robert Layco - https://github.com/lay6351. 

Ivan Ao - https://github.com/fhzzzs. 

Dylan Nguyen - https://github.com/dylannguyen079. 


## Project Description 
Our team wants to make an RPG fighting type game all in the console. We wanted to make it similar to Final Fantasy, or Pokemon. This project is significant to us because our whole group loves to play video games, and grew up playing video games, so doing a game for a final school project is like a dream come true. We want to implement the game just using the C++ console. We want to make the game text based at first, if we have more time in the end we can consider implementing graphics. The features that we want to implement consist of the following:
> * Have the player select a character to play as in the beginning. Each with different abilities.
> * Have the player phase off against several enemies, each with increasing difficulty.

The game allows the user to select a character from 3 unique archetypes: Archer, Mage, and Warrior. Each archetype has unique statlines such as health and damage. Each archetype also has 4 abilities unique to them. Each ability has a random chance to strike the enemy. We implemented this because we want the user to use strategy when battling enemies. For example, the polymorph ability from Mage should do significant damage, however will have a very small chance to hit. We implemented this fighting style because we felt like it was the best way to balance each character and abilities. When you select a character, you will be entered into a training round where you fight a dummy. After defeating the dummy, the game will begin and you will fight 3 bosses. The combat controls of this game are simple. You can either attack with your abilities, block, or concede. You must defeat the first boss before moving on to the next boss. Each boss has unique voice lines that are triggered at the beginning of the round, after each attack, and when they are defeated.

## UML Diagram
> ![Cs100 UML](https://user-images.githubusercontent.com/122497831/225538572-ab36ee8c-e195-4667-9f5c-6cf4087c2600.png)
 
 > Description: The character class is an abstract class with derived classes Boss and PlayableCharacter. The Boss and PlayableCharacter class will have abilities, items and special traits that will affect overall gameplay. The Boss and Character classes will be handled by the Game Class.
 > 
 ## Class Description
To make this game, we implemented several classes with unique attributes and methods. The character class is the base class of boss and playable character. The character class contains attributes and methods that boss and playable character inherits. For example, the character class contains name, health, damage, setHealth(), setDamage(), takeDamager(), and heal() which the boss and playable character class share. The boss class is unique in the sense that it has its own attributes and methods. The boss has his own abilities and items separate from the character class. The bosses also have unique voice lines that are only applicable to the bosses. On the other hand, the playable character is unique in the sense that it has abilities specific to the playable character and not applicable for the boss.
We have an abilities class that defines attributes and methods for character abilities. Both the boss and the playable character class will take attributes and methods from this class such as abilityName, damageMultiplier, and percentMiss.
The game class is the most important class in terms of the game’s logic. It manages the flow of the game by interacting with players and containing the character entities. The game runs in a loop and creates new instances of playable characters and bosses. The game calls functions from the abilities class such as AttackMiss() to determine the combat of the game.

Single Responsibility Principle:
Adding a game and game manager class to separate the UI management from data managment. The game manager manages the inputs of the game such as starting/quitting the game, creating a character, using abilities, and calling the game itself to input the actions in the game class. The game class takes the inputs from the game manager and outputs depending on the game manager. The changes allow us to separate the outputs and the inputs which allows us to have more organized functionality.

Liskov Substitution Principle:
We add bosses with their own unique items and abilities. The playable character class have their own unique items and abilities. These classes are inherited from the character class. They all have the same basic attack with different abilities and items. This will prevent the playable character from using abilities and items that only a boss should use and vice versa.

Interface Segregation Principle:
As a playable character, we don't need voicelines. We decided that it should be unique to the boss. We removed the starting voiceline, ending voiceline, and voiceline variable from the main character class. We removed the respected getters and setters from the main character class as well. We added it to only be used by Boss. Voicelines for the characters would not have made sense and would have made or code much messier than it needed to be.


 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
