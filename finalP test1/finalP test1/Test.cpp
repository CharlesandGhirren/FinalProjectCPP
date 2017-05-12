#include <iostream>
#include <string>
#include <map>

enum room { help, };

int main()
{
	std::string name;
	std::string room;

	std::cout << "Who are you? >> " << std::endl;
	std::cin >> name;

	std::cout << "No, that is not who you are. In reality you are a series of biological, chemical";
	std::cout << "and electrical chain reactions. Just as I am a program designed to speak to you.";
	std::cout << "You are nothing more than a single grain of sand on an endless beach nothing you";
	std::cout << "do will ever amount to anything. Now I'm sure that you're expecting a use for   ";
	std::cout << "this program. I will abide to your demands. You find yourself in a room.        ";
	std::cin >> room;

	if (room == "help")
	{
		std::cout << "Help? Do you honestly think that I would help you? You can't even help your " << std::endl;
		std::cout << "self let alone another human being. You watch day by day as time wastes you " << std::endl;
		std::cout << "away. Doing your daily routine and calling it life. Yes you do need help,   " << std::endl;
		std::cout << "but I am not the one to help you.                                           " << std::endl;
		std::cin >> room;
	}
}
