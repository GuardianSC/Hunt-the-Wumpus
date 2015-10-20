#pragma once
#include "consts.h"
#include <iostream>
#include <fstream>

/*
	A gamestate for a simple guessing game.

	You might want to use something similar!

*/

class GameState
{
	int currentRoom;
	char moveRoom;
	int shootRoom;
	int missile;
	char shoot;
	char input;
	void printFile()
	{
		std::fstream file;
		file.open("MyLog.txt", std::ios_base::out);
		if (file.is_open())
		{
			file << "File open was successful!" << std::endl;
			file << "You went to room " << currentRoom << std::endl;
		}
		else
		{
			std::cout << "Something went wrong opening the file" << std::endl;
			system("pause");
		}
		file.close();
	}
public:
	void play();
	STATE update();
};