# Rock Paper Scissors Game

Implemented a simple rock paper scissors game in C++.

## Build project

To effortlessly build the project a Cmake file has been made.TO create the Build from this run the following command. If Cmake is configured for your IDE just press Build Button to create the executable. If not Edit ``` CMakeLists.txt ``` file and update the path to GCC and G++ compiler.

Once the build is complete just run the executable at path ```.\build\RPSGame.exe``` to start the game.

If this is not working run the following command from the root folder.

```bash
g++ -o rpcgame.exe ./main.cpp ./src/Game.cpp ./src/Judge.cpp ./src/NPCPlayerRandomImpl.cpp ./src/PlayerController.cpp

.\rpcgame.exe
```

# Code Flow

## Game Class
This class acts as the Boundary class for the entire game and wraps in the complete initialization and execution of the different tasks. So the ```main.cpp``` file just has to make a new Game object and run the 'startGame' function

```cpp
#include "./src/Game.hpp"

int main(){
	Game game;
	game.startGame();
}

```

## Player Controller Class

Handles all the functionalities related to the player. Important ones are the ```GetMove``` and ```PlayNextGame``` tasks which get the player's next move and whether he wants to play again respectively.

```GetMove``` Function takes in the user's move as a string transforms the string to Uppercase characters and compares with Possible options available. If it is a valid move the game proceeds or the player is asked to choose again.

```PlayNextGame``` function prompts the user to answer yes or no to whether he wants to play ahead. The choice keeps on appearing until a valid option is taken.
 

The player can also set his name through this class and other player-related actions.
 
## NPC Controller Interface
To implement the Computer (Non Playing Character) decides its move, an interface is made instead of a class.This enables us to have different strategy classes for NPC and choose amongst one without making changes to the flow. A new strategy class needs to just Implement the virtual function ```getMove``` of this interface according to their strategy, it can be either random or by weighing past user and computer moves.

## NPCplayerRandomImpl
This class has implemented the virtual function to have random moves strategy. SO far only this strategy has been implemented. Later we can have different variations.

### Enums Used
Two enums class are used everywhere to make the implementation clean. ```Move``` Enum class for all the possible move:- Rock, Paper, Scissor and ```Result``` enum to for the cases Draw, Player winning and Computer winning 
