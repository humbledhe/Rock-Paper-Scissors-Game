#pragma once

#include <iostream>
#include <random>
#include <string>
#include <ctime>

class RPSGame
{
public:
	void startMenu();
	char computer();
	std::string showChoice(char choice);
};

