#include "RPSGame.h"

void RPSGame::startMenu()
{
	std::cout << "Enter r for Rock\n";
	std::cout << "Enter p for Paper\n";
	std::cout << "Enter s for Scissors\n";
	std::cout << "Enter q to quit\n\n";
}

// Computer gives a random number and gets returned as character -> 1 = 'r'
char RPSGame::computer()
{
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> distr(1, 3);

	int randomNumber = distr(gen);

	switch (randomNumber)
	{
	case 1:
		return 'r';
	case 2: 
		return 'p';
	case 3:
		return 's';
	}
}

// Receives a char and converts to a string -> 'r' = "Rock"
std::string RPSGame::showChoice(char choice)
{
	switch (choice)
	{
	case 'r':
		return "Rock";
	case 'p':
		return "Paper";
	case 's':
		return "scissors";
	}
}
