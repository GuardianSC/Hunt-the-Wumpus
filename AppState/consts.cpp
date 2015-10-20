#include "consts.h"
#include <iostream>

// Simple selection menu with some security.
STATE mainMenu()
{
	system("cls");
	std::cout << "Welcome to the main menu!" << std::endl;
	std::cout << "1: Start new game" << std::endl;
	std::cout << "2: Splash Screen"  << std::endl;
	std::cout << "3: Exit Game"		 << std::endl;
		
	switch (getNumValid(1, 3))
	{
	case 1: return PLAY; //return will break the state.
	case 2: return INIT;
	case 3: return EXIT;
	}		
}

// Presents a welcome screen
void splash()
{
	system("cls");
	std::cout << "Welcome to Hunt the Metroid!" << std::endl;
	std::cout << "This is based off of the classic Hunt the Wumpus game." << std::endl;
	std::cout << "This game follows the same rules as Wumpus." << std::endl;
	std::cout << "There is one metroid you have to find by going through its cave and finding clues." << std::endl;
	std::cout << "There are also pits and other monsters that can kill you." << std::endl;
	std::cout << "You have a total of five missiles to use to kill the metroid. If you run out you lose." << std::endl;
	//std::cout << "If you don't know what the rules are, visit http://jayisgames.com/games/hunt-the-wumpus/." << std::endl; // Maybe include rules in program instead of just a link if there is time
	//std::cout << "You can also play the original Hunt the Wumpus there as well." << std::endl;

	std::cout << std::endl;
	std::cout << "Chris Lutz, christopher.lutz@students.aie.edu.au, 10/20/2015" << std::endl;
	system("pause");
	system("cls");
}

// presents a farewell screen
void exit()
{
	system("cls");
	std::cout << "Thank you for playing!" << std::endl;

	system("pause");
}


/*
	This useful little guy will produce a prompt, requesting a number.
	It will validate that it is indeed a number and that it is within
	a particular range. A procedure like this is great for getting
	rudimentary input from the user.

	This function WILL cause the application to hang, so if there
	is real-time rendering going on, it will halt.
*/
int getNumValid(int min, int max)
{
	int selectRoom;	
	
	do
	{		
		std::cout << "Enter a valid number (" << min << "-" << max << "): ";
		std::cin >> selectRoom;

		if (std::cin.fail() || selectRoom < min || selectRoom > max)
		{
			std::cin.clear();			//clears the input buffer
			std::cin.ignore(80,'\n');	//resets the input buffer
			std::cout << "Invalid entry." << std::endl;
		}
		else break; //stop looping if the input was valid
	} while (true);

	return selectRoom;
}