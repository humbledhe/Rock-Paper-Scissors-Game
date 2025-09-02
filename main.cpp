#include "RPSGame.h"

#include <iostream>
#include <string>
#include <random>

int main()
{
	RPSGame game;

	int option;

	do
	{
		std::cout << "*************Rock Paper Scissors Game************\n\n";
		std::cout << "1. Player vs computer\n";
		std::cout << "2. Player vs Player\n";
		std::cout << "3. Exit\n\n";

		std::cin >> option;

		char player{};

		switch (option)
		{
		case 1: // Player vs Computer logic
			system("cls");

			do
			{
				game.startMenu();

				std::cout << "Choice: ";
				std::cin >> player;
				
				char computer = game.computer();

				// Convert choice from char to string -> 'r' = "Rock"
				std::string computerChoice = game.showChoice(computer);
				std::string playerChoice = game.showChoice(player);

				switch (player)
				{
				case 'r': // Player choses rock
					system("cls");

					// If computer choice is scissors, player wins
					if (player == 'r' && computer == 's')
					{
						std::cout << "You chose " << playerChoice << std::endl;
						std::cout << "Computer chose " << computerChoice << std::endl;
						std::cout << "You win\n\n";
					}
					// If computer chooses paper, player looses
					else if (player == 'r' && computer == 'p')
					{
						std::cout << "You chose " << playerChoice << std::endl;
						std::cout << "Computer chose " << computerChoice << std::endl;
						std::cout << "You loose\n\n";
					}
					// If computer chooses rock, its a tie
					else
					{
						std::cout << "You chose " << playerChoice << std::endl;
						std::cout << "Computer chose " << computerChoice << std::endl;
						std::cout << "Tie\n\n";
					}
					break;

				case 'p': // Player chooses paper
					system("cls");

					// If computer chooses rock, player wins
					if (player == 'p' && computer == 'r')
					{
						std::cout << "You chose " << playerChoice << std::endl;
						std::cout << "Computer chose " << computerChoice << std::endl;
						std::cout << "You win\n\n";
					}
					// If computer chooses scissors, player looses 
					else if (player == 'p' && computer == 's')
					{
						std::cout << "You chose " << playerChoice << std::endl;
						std::cout << "Computer chose " << computerChoice << std::endl;
						std::cout << "You loose\n\n";
					}
					// If computer chooses paper, its a tie
					else
					{
						std::cout << "You chose " << playerChoice << std::endl;
						std::cout << "Computer chose " << computerChoice << std::endl;
						std::cout << "Tie\n\n";
					}
					break;

				case 's': // Player chooses scissors
					system("cls");

					// If computer chooses paper, player wins
					if (player == 's' && computer == 'p')
					{
						std::cout << "You chose " << playerChoice << std::endl;
						std::cout << "Computer chose " << computerChoice << std::endl;
						std::cout << "You win\n\n";
					}
					// If computer chooses rock, player looses 
					else if (player == 's' && computer == 'r')
					{
						std::cout << "You chose " << playerChoice << std::endl;
						std::cout << "Computer chose " << computerChoice << std::endl;
						std::cout << "You loose\n\n";
					}
					// If computer chooses scissors, its a tie
					else
					{
						std::cout << "You chose " << playerChoice << std::endl;
						std::cout << "Computer chose " << computerChoice << std::endl;
						std::cout << "Tie\n\n";
					}
					break;
				}

			} while (player != 'q'); // player chooses q to exit
			system("cls");
			break;

		case 2: // Player vs Player logic
			std::cin.clear();

			system("cls"); // Clears screen after input
			char player1, player2;

			do 
			{
				game.startMenu();

				std::cout << "Player1: ";
				std::cin >> player1;
				std::cout << "player2: ";
				std::cin >> player2;

				// Convert choice from char to string -> 'r' = "Rock"
				std::string playerChoice1 = game.showChoice(player1);
				std::string playerChoice2 = game.showChoice(player2);

				switch (player1)
				{
				case 'r': // Player1 chooses rock
					system("cls");

					// If player2 chooses scissors, player one wins
					if (player1 == 'r' && player2 == 's')
					{
						std::cout << "You chose " << playerChoice1 << std::endl;
						std::cout << "player2 chose " << playerChoice2 << std::endl;
						std::cout << "You win\n\n";
					}
					// If player2 chooses paper, player1 looses 
					else if (player1 == 'r' && player2 == 'p')
					{
						std::cout << "You chose " << playerChoice1 << std::endl;
						std::cout << "player2 chose " << playerChoice2 << std::endl;
						std::cout << "You loose\n\n";
					}
					// If player2 chooses rock, its a tie
					else
					{
						std::cout << "You chose " << playerChoice1 << std::endl;
						std::cout << "player2 chose " << playerChoice2 << std::endl;
						std::cout << "Tie\n\n";
					}
					break;

				case 'p': // Player chooses paper
					system("cls");

					// If player2 chooses rock, player1 wins
					if (player1 == 'p' && player2 == 'r')
					{
						std::cout << "You chose " << playerChoice1 << std::endl;
						std::cout << "player2 chose " << playerChoice2 << std::endl;
						std::cout << "You win\n\n";
					}
					// If player2 chooses scissors, player1 looses
					else if (player1 == 'p' && player2 == 's')
					{
						std::cout << "You chose " << playerChoice1 << std::endl;
						std::cout << "player2 chose " << playerChoice2 << std::endl;
						std::cout << "You loose\n\n";
					}
					// If player2 chooses paper, its a tie
					else
					{
						std::cout << "You chose " << playerChoice1 << std::endl;
						std::cout << "player2 chose" << playerChoice2 << std::endl;
						std::cout << "Tie\n\n";
					}
					break;

				case 's': // Player1 chooses scissors
					system("cls");

					// If player2 chooses paper, player1 wins
					if (player1 == 's' && player2 == 'p')
					{
						std::cout << "You chose " << playerChoice1 << std::endl;
						std::cout << "player2 chose" << playerChoice2 << std::endl;
						std::cout << "You win\n\n";
					}
					// If player2 chooses rock, player1 looses
					else if (player1 == 's' && player2 == 'r')
					{
						std::cout << "You chose " << playerChoice1 << std::endl;
						std::cout << "player2 chose" << playerChoice2 << std::endl;
						std::cout << "You loose\n\n";
					}
					// If player2 chooses scissors, its a tie
					else
					{
						std::cout << "You chose " << playerChoice1 << std::endl;
						std::cout << "player2 chose" << playerChoice2 << std::endl;
						std::cout << "Tie\n\n";
					}
					break;
				}
			} while (player1 != 'q' && player2 != 'q'); // If either players enters q to quit

		default:
			system("cls");
		}
	} while (option != 3); // User enters 3 to quit

	return 0;
}