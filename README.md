[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=9935895&assignment_repo_type=AssignmentRepo)

Authors:  

Paimon Goulart - https://github.com/Pie115. 

Robert Layco - https://github.com/lay6351. 

Ivan Ao - https://github.com/fhzzzs. 

Dylan Nguyen - https://github.com/dylannguyen079. 


## Project Description 
Our team wants to make an RPG fighting type game all in the console. We wanted to make it similar to Final Fantasy, or Pokemon. This project is signifigant to us because our whole group loves to play video games, and grew up playing video games, so doing a game for a final school project is like a dream come true. We want to implement the game just using the C++ console. We want to make the game text based at first, if we have more time in the end we can consider implementing graphics.
The features that we want to implement consist of the following:
> * Have the player select a character to play as in the begining. Each with different abilities.
> * Have the player phase off against several enemies, each with increasing difficulty. 
> * Have the payer access an item shop, between battles, where they can upgrade equipment/abilities.
> * Have a leaderboard based on points earned through several different factors throughout the game.
 > ![Untitled Diagram](https://user-images.githubusercontent.com/116398521/222713848-54d9edf4-1966-45be-8cf6-8baefd53bc3d.jpg)
 
 > Description: The character class is an abstract class with derived classes Boss and PlayableCharacter. The Boss and PlayableCharacter class will have abilities, items and special traits that will affect overall gameplay. The Boss and Character classes will be handled by the Game and GameManager.
 > 
Single Responsibility Principle:
Adding a game and game manager class to separate the UI management from data managment. The game manager manages the inputs of the game such as starting/quitting the game, creating a character, using abilities, and calling the game itself to input the actions in the game class. The game class takes the inputs from the game manager and outputs depending on the game manager. The changes allow us to separate the outputs and the inputs which allows us to have more organized functionality.

Liskov Substitution Principle:
We add bosses with their own unique items and abilities. The playable character classhave their own unique items and abilities. These classes are inherited from the character class. They all have the same basic attack with different abilities and items. This will prevent the playable character from using abilities and items that only a boss should use and vice versa.

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
 
