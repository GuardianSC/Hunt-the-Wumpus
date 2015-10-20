#include "GameState.h"
#include <random>
#include <iostream>
#include <fstream>

void GameState::play()
{
	system("cls");
	std::cout << "The hunt is on! Go find the Metroid...or die trying." << std::endl;
	GameState::update();
}

STATE GameState::update(/*float dt*/)
{
	GameState::currentRoom = 1;
	GameState::missile = 5;
	GameState::input;
	GameState::moveRoom;
	GameState::shoot;

	if (GameState::missile <= 0)
	{
		std::cout << "You have run out of missiles!" << std::endl;
		std::cout << "Game over!" << std::endl;
		STATE EXIT;
	}

	if (GameState::currentRoom = 1)
	{
		std::cout << "You are in the entrance of the Metroid's lair." << std::endl;
		std::cout << "There are three rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		switch (input) 
		{
		case 'y':
		case 'Y':
			std::cout << "Which room do you want to shoot through?" << std::endl;
			std::cout << "2 3 5" << std::endl;
			std::cin >> shoot;
			std::cout << std::endl;
			switch (shoot)
			{
				case '2':
					shoot = 2;
					missile -= 1;
					break;
				case '3':
					shoot = 3;
					missile -= 1;
					break;
				case '5':
					shoot = 5;
					missile -= 1;
					break;
				default:
					break;
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 1;
			}

			break;
			 
		case 'n':
		case 'N':
			std::cout << "Choose a room to enter." << std::endl;
			std::cout << "2 3 5" << std::endl;
			std::cin >> moveRoom;
			switch (moveRoom)
			{
				case '2':
					moveRoom = 2;
					break;
				case '3':
					moveRoom = 3;
					break;
				case '5':
					moveRoom = 5;
					break;
				default:
					break;
			}
			if (moveRoom != 2 && moveRoom != 3 && moveRoom != 5)
			{
				std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
				currentRoom = 1;
			}
			currentRoom = moveRoom;
			GameState::printFile();
			std::cout << "You are in room " << currentRoom << std::endl;
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 2)
	{
		std::cout << "There are five rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "1 4 18 19 20" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '1':
						shoot = 1;
						missile -= 1;
						break;
					case '4':
						shoot = 4;
						missile -= 1;
						break;
					case '18':
						shoot = 19;
						missile -= 1;
						break;
					case '19':
						shoot = 19;
						missile -= 1;
						break;
					case '20':
						shoot = 10;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 2;
			}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "1 4 18 19 20" << std::endl;
				std::cout << "You feel a slight breeze from the direction of room 18." << std::endl;
				std::cout << "You hear strange sounds coming from the direcion of room 19" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '1':
					moveRoom = 1;
					break;
				case '4':
					moveRoom = 4;
					break;
				case '18':
					moveRoom = 18;
					break;
				case '19':
					moveRoom = 19;
					break;
				case '20':
					moveRoom = 20;
					break;
				default:
					break;
				}
				if (moveRoom != 1 && moveRoom != 4 && moveRoom != 18 && moveRoom != 19 && moveRoom != 20)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 2;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
		currentRoom = moveRoom;
	}
	if (GameState::currentRoom = 3)
	{
		std::cout << "There are three rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "1 4 19" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '1':
						shoot = 1;
						missile -= 1;
						break;
					case '4':
						shoot = 4;
						missile -= 1;
						break;
					case '19':
						shoot = 19;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 3;
			}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "1 4 19" << std::endl;
				std::cout << "You hear strange sounds coming from the direcion of room 19" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '1':
					moveRoom = 1;
					break;
				case '4':
					moveRoom = 4;
					break;
				case '19':
					moveRoom = 19;
					break;
				default:
					break;
				}
				if (moveRoom != 1 && moveRoom != 4 && moveRoom != 19)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 3;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 4)
	{
		std::cout << "There are three rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "2 3 19" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '2':
						shoot = 2;
						missile -= 1;
						break;
					case '3':
						shoot = 3;
						missile -= 1;
						break;
					case '19':
						shoot = 19;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 4;
			}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "2 3 19" << std::endl;
				std::cout << "You hear strange sounds coming from the direcion of room 19" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '2':
					moveRoom = 2;
					break;
				case '3':
					moveRoom = 3;
					break;
				case '19':
					moveRoom = 19;
					break;
				default:
					break;
				}
				if (moveRoom != 2 && moveRoom != 3 && moveRoom != 19)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 4;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 5)
	{
		std::cout << "There are three rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "6 7 8" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '6':
						shoot = 6;
						missile -= 1;
						break;
					case '7':
						shoot = 7;
						missile -= 1;
						break;
					case '8':
						shoot = 8;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 5;
			}
			break;

			case 'n':
			case 'N':
			{

				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "6 7 8" << std::endl;
				std::cout << "You hear strange sounds coming from the direcion of room 6" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '6':
					moveRoom = 6;
					break;
				case '7':
					moveRoom = 7;
					break;
				case '8':
					moveRoom = 8;
					break;
				default:
					break;
				}
				if (moveRoom != 6 && moveRoom != 7 && moveRoom != 8)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 5;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 6)
	{
		std::cout << "There are four rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot?" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << " 5 10 11 12" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '5':
						shoot = 5;
						missile -= 1;
						break;
					case '10':
						shoot = 10;
						missile -= 1;
						break;
					case '11':
						shoot = 11;
						missile -= 1;
						std::cout << "The missile hits the metroid, killing it!" << std::endl;
						std::cout << "You have won!" << std::endl;
						system("pause");
						STATE EXIT;
						break;
					case '12':
						shoot = 12;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 6;
			}
			if (shoot == 11)
			{
				std::cout << "The missile hits the metroid, killing it!" << std::endl;
				std::cout << "You have won!" << std::endl;
				system("pause");
				STATE current = EXIT;
				currentRoom = currentRoom;
			}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "5 10 11 12" << std::endl;
				std::cout << "The strange sounds are louder and sound like they are coming from the direction of room 11" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '5':
					moveRoom = 5;
					break;
				case '10':
					moveRoom = 10;
					break;
				case '11':
					moveRoom = 11;
					break;
				case '12':
					moveRoom = 12;
					break;
				default:
					break;
				}
				if (moveRoom != 5 && moveRoom != 10 && moveRoom != 11 && moveRoom != 12)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 6;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 7)
	{
		std::cout << "There are three rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "5 9 10" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '5':
						shoot = 5;
						missile -= 1;
						break;
					case '9':
						shoot = 9;
						missile -= 1;
						break;
					case '10':
						shoot = 10;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 7;
			}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "5 9 10" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '5':
					moveRoom = 5;
					break;
				case '9':
					moveRoom = 9;
					break;
				case '10':
					moveRoom = 10;
					break;
				default:
					break;
				}
				if (moveRoom != 5 && moveRoom != 9 && moveRoom != 10)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 7;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 8)
	{
		std::cout << "There are two rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "5 9" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '5':
						shoot = 5;
						missile -= 1;
						break;
					case '9':
						shoot = 9;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 8;
			}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "5 9" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '5':
					moveRoom = 5;
					break;
				case '9':
					moveRoom = 9;
					break;
				default:
					break;
				}
				if (moveRoom != 5 && moveRoom != 9)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 8;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 9)
	{
		std::cout << "There are three rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "7 8 10" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '7':
						shoot = 7;
						missile -= 1;
						break;
					case '8':
						shoot = 8;
						missile -= 1;
						break;
					case '10':
						shoot = 10;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 9;
			}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "7 8 10" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '7':
					moveRoom = 7;
					break;
				case '8':
					moveRoom = 8;
					break;
				case '10':
					moveRoom = 10;
					break;
				default:
					break;
				}
				if (moveRoom != 7 && moveRoom != 8 && moveRoom != 10)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 9;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 10)
	{
		std::cout << "There are four rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "6 7 9 12" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '6':
						shoot = 6;
						missile -= 1;
						break;
					case '7':
						shoot - 7;
						missile -= 1;
						break;
					case '9':
						shoot = 9;
						missile -= 1;
						break;
					case '12':
						shoot = 12;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			//if (shoot != 11)
			//{
			//	std::cout << "The missile hit nothing! Try again next time!" << std::endl;
			//	currentRoom = 10;
			//}
			break;

			case 'n':
			case 'N':
			{

				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "6 7 9 12" << std::endl;
				std::cout << "You hear strange sounds coming from the direcion of room 6" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '6':
					moveRoom = 6;
					break;
				case '7':
					moveRoom = 7;
					break;
				case '9':
					moveRoom = 9;
					break;
				case '12':
					moveRoom = 12;
					break;
				default:
					break;
				}
				if (moveRoom != 6 && moveRoom != 7 && moveRoom != 9 && moveRoom != 12)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 10;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 11)
	{
		std::cout << "You have stumbled into the Metroid's room! It awakens and attacks you before you can fight back." << std::endl;
		std::cout << "You have died. Game over." << std::endl;
		system("pause");
		STATE current = EXIT;
	}
	if (GameState::currentRoom = 12)
	{
		std::cout << "There are four rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "6 10 11 13" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '6':
						shoot = 6;
						missile -= 1;
						break;
					case '10':
						shoot = 10;
						missile -= 1;
						break;
					case '11':
						shoot = 11;
						missile -= 1;
						std::cout << "The missile hits the metroid, killing it!" << std::endl;
						std::cout << "You have won!" << std::endl;
						system("pause");
						STATE EXIT;
						break;
					case '13':
						shoot = 13;
						missile -= 1;
						break;
					default:
						break;
				}
			
			}
			//if (shoot != 11)
			//{
			//	std::cout << "The missile hit nothing! Try again next time!" << std::endl;
			//	currentRoom = 12;
			//}
			//if (shoot == 11)
			//{
			//	std::cout << "The missile hits the metroid, killing it!" << std::endl;
			//	std::cout << "You have won!" << std::endl;
			//	system("pause");
			//	STATE EXIT;
			//	currentRoom = currentRoom;
			//}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "6 10 11 13" << std::endl;
				std::cout << "You hear strange sounds coming from the direcion of room 6" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '6':
					moveRoom = 6;
					break;
				case '10':
					moveRoom = 10;
					break;
				case '11':
					moveRoom = 11;
					break;
				case '13':
					moveRoom = 13;
					break;
				default:
					break;
				}
				if (moveRoom != 6 && moveRoom != 10 && moveRoom != 11 && moveRoom != 13)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 12;
				}
				if (moveRoom = 11)
				{
					std::cout << "You walk into the metroid's room. It notices you and attacks before you can react." << std::endl;
					std::cout << "Game over!" << std::endl;
					STATE current = EXIT;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 13)
	{
		std::cout << "There are four rooms you can go into." << std::endl;
		std::cout << "You feel a slight breeze coming from the general direction of rooms 14 and 15." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "11 12 14 15" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '11':
						shoot = 11;
						missile -= 1;
						std::cout << "The missile hits the metroid, killing it!" << std::endl;
						std::cout << "You have won!" << std::endl;
						system("pause");
						STATE EXIT;
						break;
					case '12':
						shoot = 12;
						missile -= 1;
						break;
					case '14':
						shoot = 14;
						missile -= 1;
						break;
					case '15':
						break;
					default:
						break;
				}
			}

			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "11 12 14 15" << std::endl;
				std::cout << "You hear something moving around in room 15." << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '11':
					moveRoom = 11;
					break;
				case '12':
					moveRoom = 12;
					break;
				case '14':
					moveRoom = 14;
					break;
				case '15':
					moveRoom = 15;
					break;
				default:
					break;
				}
				if (moveRoom != 11 && moveRoom != 12 && moveRoom != 14 && moveRoom != 15)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 13;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 14)
	{
		std::cout << "There are two rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot?" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "13 16" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '13':
						shoot = 13;
						missile -= 1;
						break;
					case '16':
						shoot = 16;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			/*if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 14;
			}*/
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "13 16" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '13':
					moveRoom = 13;
					break;
				case '16':
					moveRoom = 16;
					break;
				default:
					break;
				}
				if (moveRoom != 13 && moveRoom != 16)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 14;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 15)
	{
		std::cout << "You walk into the room and are attacked by a space pirate! You are killed before you can react." << std::endl;
		std::cout << "You have died. Game over." << std::endl;
		system("pause");
		STATE EXIT;
	}
	if (GameState::currentRoom = 16)
	{
		std::cout << "There are three rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "14 15 17" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '14':
						shoot = 14;
						missile -= 1;
						break;
					case '15':
						shoot = 15;
						missile -= 1;
						break;
					case '17':
						shoot = 17;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			/*if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 16;
			}*/
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "14 15 17" << std::endl;
				std::cout << "You hear something moving around in room 15" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '14':
					moveRoom = 14;
					break;
				case '15':
					moveRoom = 15;
					break;
				case '17':
					moveRoom = 17;
					break;
				default:
					break;
				}
				if (moveRoom != 14 && moveRoom != 15 && moveRoom != 17)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 16;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 17)
	{
		std::cout << "There are three rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "16 18 19" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '16':
						shoot = 16;
						missile -= 1;
						break;
					case '18':
						shoot = 18;
						missile -= 1;
						break;
					case '19': 
						shoot = 19;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			//if (shoot != 11)
			//{
			//	std::cout << "The missile hit nothing! Try again next time!" << std::endl;
			//	currentRoom = 17;
			//}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "16 18 19" << std::endl;
				std::cout << "You feel a breeze from the direction of room 18" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '16':
					moveRoom = 16;
					break;
				case '18':
					moveRoom = 18;
					break;
				case '19':
					moveRoom = 19;
					break;
				default:
					break;
				}
				if (moveRoom != 16 && moveRoom != 18 && moveRoom != 19)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 17;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 18)
	{
		std::cout << "You have fallen into a pit!" << std::endl;
		std::cout << "You have died. Game over." << std::endl;
		system("pause");
	}
	if (GameState::currentRoom = 19)
	{
		std::cout << "There are three rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "2 3 4 11 17" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '2':
						shoot = 2;
						missile -= 1;
						break;
					case '3':
						shoot = 3;
						missile -= 1;
						break;
					case '4':
						shoot = 4;
						missile -= 1;
						break;
					case '11':
						shoot = 11;
						missile -= 1;
						std::cout << "The missile hits the metroid, killing it!" << std::endl;
						std::cout << "You have won!" << std::endl;
						system("pause");
						STATE EXIT;
						break;
					case '17':
						shoot = 17;
						missile--;
						break;
					default:
						break;
				}
			}
			/*if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 19;
			}*/
			/*if (shoot == 11)
			{
				std::cout << "The missile hits the metroid, killing it!" << std::endl;
				std::cout << "You have won!" << std::endl;
				system("pause");
				STATE EXIT;
				currentRoom = currentRoom;
			}*/
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "2 3 4 11 17" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '2':
					moveRoom = 2;
					break;
				case '3':
					moveRoom = 3;
					break;
				case '4':
					moveRoom = 4;
					break;
				case '11':
					moveRoom = 11;
					break;
				case '17':
					moveRoom = 17;
				default:
					break;
				}
				if (moveRoom != 2 && moveRoom != 3 && moveRoom != 4 && moveRoom != 11 && moveRoom != 17)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 19;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	if (GameState::currentRoom = 20)
	{
		std::cout << "There are two rooms you can go into." << std::endl;
		std::cout << "Would you like to shoot? [Y]es [N]o" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
			case 'y':
			case 'Y':
			{
				std::cout << "2 18" << std::endl;
				std::cin >> shoot;
				std::cout << std::endl;
				switch (shoot)
				{
					case '2':
						shoot = 2;
						missile -= 1;
						break;
					case '18':
						shoot = 18;
						missile -= 1;
						break;
					default:
						break;
				}
			}
			if (shoot != 11)
			{
				std::cout << "The missile hit nothing! Try again next time!" << std::endl;
				currentRoom = 20;
			}
			break;

			case 'n':
			case 'N':
			{
				std::cout << "Choose a room to enter." << std::endl;
				std::cout << "2 18" << std::endl;
				std::cin >> moveRoom;
				switch (moveRoom)
				{
				case '2':
					moveRoom = 2;
					break;
				case '18':
					moveRoom = 18;
					break;
				default:
					break;
				}
				if (moveRoom != 2 && moveRoom != 18)
				{
					std::cout << "That is not a valid room to enter. Please choose a valid room." << std::endl;
					currentRoom = 20;
				}
				currentRoom = moveRoom;
				GameState::printFile();
				std::cout << "You are in room " << currentRoom << std::endl;
			}
			break;
			default:
				break;
		}
	}
	return GAME;
}
