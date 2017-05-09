#include <iostream> 
#include <stdlib.h> 
#include <stdio.h>
int hp = 20, mp = 20, ehp = 35;

void lose(void)
{
	std::cout << "You lose." << endl;
	hp < 0;
	mp = 20;
	ehp = 20;
}

void win(void)
{
	cout << "You win." << endl;
	hp = 20;
	mp = 20;
	ehp = 20;
}

int main()
{
	int choice;
	int move;
	bool gameOn = true;
	while (gameOn != false){
		cout << "*******************************\n";
		cout << " 1 - Start the game.\n";
		cout << " 2 - Help.\n";
		cout << " 3 - Exit.\n";
		cout << " Enter your choice and press return: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "game start!\n";
		label:
			cout << "ehp: " << ehp << std::endl << "hp: " << hp << std::endl << "mp: " << mp << std::endl << "(4) Attack" << std::endl << "(5) Magic Spell" << std::endl << "(6) Summon" << std::endl;
			cin >> move;
			system("cls");
			cout << "Status:" << endl;

			if (move == 4)
			{
				cout << "You sliced the enemy with your sword." << endl;
				ehp -= 1;
				if (ehp < 0)
				{
					win();
					return 0;
				}

				if (hp < 0)
				{
					lose();
					return 0;
				}
				cout << "The enemy cast a Magic Spell." << endl << endl;
				hp -= 2;
			}

			if (move == 5)
			{
				cout << "You cast a devistating Magic Spell." << endl;
				ehp -= 2;
				mp -= 1;
				if (ehp < 0)
				{
					win();
					return 0;
				}

				if (hp < 0)
				{
					lose();
					return 0;
				}
				cout << "The enemy used his sword." << endl << endl;
				hp -= 1;
			}

			if (move == 6)
			{
				cout << "You summoned a Ghost!" << endl;
				ehp -= 10;
				mp -= 15;
				hp -= 1;
				if (ehp < 0)
				{
					win();
					return 0;
				}

				if (hp < 0)
				{
					lose();
					return 0;
				}
				cout << "The enemy used his sword." << endl << endl;
				hp -= 1;
			}
			break;
		
		case 2:
			cout << "thats funny, you really think I would help you?\n";
			break;
		case 3:
			cout << "End of Program.\n";
			gameOn = false;
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}

	}
	return 0;
}