#include <iostream> 
#include <stdlib.h> 
#include <stdio.h>
int hp = 20, notmp = 20, ehp = 35;

void lose(void)
{
	std::cout << "You lose." << std::endl;
	hp < 1;
	notmp < 1;
}

void win(void)
{
	std::cout << "You win." << std::endl;
	ehp < 1;
}

int main()
{
	int choice;
	int move;
	bool gameOn = true;

	std::cout << "*******************************\n";
	std::cout << " 1 - Start the game.\n";
	std::cout << " 2 - Help.\n";
	std::cout << " 3 - Exit.\n";
	std::cout << " Enter your choice and press enter: ";

	std::cin >> choice;

	while (gameOn != false){

		switch (choice)
		{
		case 1:
			std::cout << "game start!\n";
		label:
			std::cout << "enemy health points: " << ehp << std::endl << "health points: " << hp << std::endl << "magic points: " << notmp << std::endl << "(4) Attack" << std::endl << "(5) Magic Spell" << std::endl << "(6) Summon" << std::endl;
			std::cin >> move;
			system("cls");
			std::cout << "Status:" << std::endl;

			if (move == 4)
			{
				std::cout << "You sliced the enemy with your sword." << std::endl;
				ehp -= 1;
				if (ehp < 1)
				{
					win();
					return 0;
				}

				if (hp < 1, notmp < 1)
				{
					lose();
					return 0;
				}
				std::cout << "The enemy cast a Magic Spell." << std::endl << std::endl;
				hp -= 2;
			}

			if (move == 5)
			{
				std::cout << "You cast a devistating Magic Spell." << std::endl;
				ehp -= 3;
				notmp -= 1;
				if (ehp < 1)
				{
					win();
					return 0;
				}

				if (hp < 1, notmp < 1)
				{
					lose();
					return 0;
				}
				std::cout << "The enemy used his sword." << std::endl << std::endl;
				hp -= 1;
			}

			if (move == 6)
			{
				std::cout << "You summoned a Ghost!" << std::endl;
				ehp -= 10;
				notmp -= 15;
				hp -= 1;
				if (ehp < 1)
				{
					win();
					return 0;
				}

				if (hp < 1, notmp < 1)
				{
					lose();
					return 0;
				}
				std::cout << "The enemy used his sword." << std::endl << std::endl;
				hp -= 1;
			}
			break;
		
		case 2:
<<<<<<< HEAD
			std::cout << "You really thought I'd would help you, thats funny.\n" << std::endl;
=======
			std::cout << "That's funny, you really think I would help you?" << std::endl;
>>>>>>> origin/master
			break;
		case 3:
			std::cout << "End of Program.\n";
			gameOn = false;
			break;
		default:
			std::cout << "Not a Valid Choice. \n";
			std::cout << "Choose again.\n";
			std::cin >> choice;
			break;
		}

	}
	return 0;
}