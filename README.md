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

The game allows the user to select a character from 3 unique archetypes: Archer, Mage, and Warrior. Each archetype has unique statlines such as health and damage. Each archetype also has 4 abilities unique to them. Each ability has a random chance to strike the enemy. We implemented this because we want the user to use strategy when battling enemies. For example, the polymorph ability from Mage should do significant damage, however will have a very small chance to hit. We implemented this fighting style because we felt like it was the best way to balance each character and abilities. When you select a character, the game will begin and you will fight 3 bosses. The combat controls of this game are simple. You can either attack with your abilities, block, or concede. You must defeat the first boss before moving on to the next boss. Each boss has unique voice lines that are triggered at the beginning of the round, after each attack, and when they are defeated.

## UML Diagram
> ![image](https://user-images.githubusercontent.com/116398521/225921748-1ed59058-925b-4849-97c3-9b35fb4ca274.jpeg)

 
 > Description: The character class is an abstract class with derived classes Boss and PlayableCharacter. The Boss and PlayableCharacter class will have abilities, items and special traits that will affect overall gameplay. The Boss and Character classes will be handled by the Game Class.
 > 
 ## Class Description
To make this game, we implemented several classes with unique attributes and methods. The character class is the base class of boss and playable character. The character class contains attributes and methods that boss and playable character inherits. For example, the character class contains name, health, damage, setHealth(), setDamage(), takeDamage(), and heal() which the boss and playable character class share. The boss class is unique in the sense that it has its own attributes and methods. The boss has his own abilities and items separate from the character class. The bosses also have unique voice lines that are only applicable to the bosses. On the other hand, the playable character is unique in the sense that it has abilities specific to the playable character and not applicable for the boss.
We have an abilities class that defines attributes and methods for character abilities. Both the boss and the playable character class will take attributes and methods from this class such as abilityName, damageMultiplier, and percentMiss.
We have an item class that defines attributes and methods for character items. Both the boss and the playable character class will take attributes and methods from this class such as itemName, getDamagePoints and getHealPoints.
The game class is the most important class in terms of the game’s logic. It manages the flow of the game by interacting with players and containing the character entities. The game runs in a loop and creates new instances of playable characters and bosses. The game calls functions from the abilities class such as AttackMiss() to determine the combat of the game.

Open Close Princible:
We designed the character, playable character, and boss to have open close princible. We made it in such a way so that if we wanted to add any features to to any of these character, we can just add those features andf functions without making any changes to the previous features. We did this because in any sort of game, you want to be able to make updates, and add content, however you wouldn't want to go through the trouble of changing anything that worked previously if you just want to add a new feature.

Liskov Substitution Principle:
We add bosses with their own unique items and abilities. The playable character class have their own unique items and abilities. These classes are inherited from the character class. They all have the same basic attack with different abilities and items. This will prevent the playable character from using abilities and items that only a boss should use and vice versa.

Interface Segregation Principle:
As a playable character, we don't need voicelines. We decided that it should be unique to the boss. We removed the starting voiceline, ending voiceline, and voiceline variable from the main character class. We removed the respected getters and setters from the main character class as well. We added it to only be used by Boss. Voicelines for the characters would not have made sense and would have made or code much messier than it needed to be.


 ## Screenshots
 > ![Cs100 UML](https://user-images.githubusercontent.com/6378028/225709527-3ca614d9-a867-4f57-9045-2ad351d76fba.png)
 
 > ![Cs100 UML](https://user-images.githubusercontent.com/6378028/225709944-46a30055-60a6-4d57-974a-62868a0a61cf.png)

 > ![Cs100 UML](https://user-images.githubusercontent.com/6378028/225710872-313659ab-01c0-459a-9267-5255f8409015.png)
 
 > ![Cs100 UML](https://user-images.githubusercontent.com/6378028/225709742-8dc2d132-1934-460f-bc94-9f219e2d54b0.png)
 
 > ![Cs100 UML](https://user-images.githubusercontent.com/6378028/225711006-06588a92-8bc6-4d1b-8552-18f724539b1d.png)

 > ![Cs100 UML](https://user-images.githubusercontent.com/6378028/226020359-260906d4-c0be-43fb-b1d0-e1b43dea7f7c.png)

![image](https://user-images.githubusercontent.com/116398521/226018335-988a7e65-9b75-4a41-8a4b-cafd5c748810.png)

![image](https://user-images.githubusercontent.com/116398521/226019191-dd5e9e9a-fb2c-4cba-877a-200cc9d29f8e.png)

![image](https://user-images.githubusercontent.com/116398521/226019727-dd2f1331-e16f-4ccc-9c6b-1c54ad8b1fd2.png)

![image](https://user-images.githubusercontent.com/116398521/226020129-d9b4d186-d905-4a8a-b394-afa89a8bd6ce.png)

![image](https://user-images.githubusercontent.com/116398521/226020348-fd128be3-76f2-4566-aefa-4c331aca63b4.png)

 ## Installation/Usage
 In order to install and run our program, you either need to clone the repository, or unzip the file on the PC that has CMake installed. After, run these following commands in the command line. 
 
 1. cmake .
 2. make
 3. ./AwesomeGame

 The following commands above will create an executable for the game, then run it.
 
 ## Testing
 
 ### Unit Testing
 We unit tested every function in the project. The only two functions we didn't unit test were UI functions. Other than that, we were able to unit test everything else.
 
 > ![image](https://user-images.githubusercontent.com/116398521/226012212-80741fdf-6a5e-4a2e-ba61-686c4cfb5baa.png)
 
 ### Valgrind Report
 
 > ![Cs100 UML](https://user-images.githubusercontent.com/6378028/226017221-0c6418d6-babe-4799-a381-f9979dc3e477.png)
 
 
