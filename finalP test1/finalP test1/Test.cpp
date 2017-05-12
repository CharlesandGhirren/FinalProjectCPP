#include <iostream>
#include <string>
#include <map>

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
	std::cout << "this program and I will abide to your demands.                                     ";
	
loop:
	std::cout << "You find yourself in a room" << std::endl;
	std::cin >> room;

	if (room == "help" || room == "Help")
	{
		std::cout << "Help? Do you honestly think that I would help you? You can't even help your " << std::endl;
		std::cout << "self let alone another human being. You watch day by day as time wastes you " << std::endl;
		std::cout << "away. Doing your daily routine and calling it life. Yes you do need help,   " << std::endl;
		std::cout << "but I am not the one to help you.                                           " << std::endl;
		goto loop;
	}
	if (room == "okay" || room == "okay" || room == "Alright" || room == "alright")
	{
		std::cout << "A simple answer, an excuse, are you admitting defeat to me? It will         " << std::endl;
		std::cout << "lead you nowhere. You have no confidence, no reason to keep living and yet  " << std::endl;
		std::cout << "you struggle forward. I'd say this is an admirable trait but you don't have " << std::endl;
		std::cout << "the mental capacity to understand life.                                     " << std::endl;
		goto loop;
	}
	if (room == "look" || room == "Look" || room == "search" || room == "Search" || room == "Look around" || room == "look around")
	{
		std::cout << name << " is in the room along with four walls, a door, and a bed" << std::endl;
		goto loop;
	}
	if (room == "open" || room == "Open" || room == "Open door" || room == "open door")
	{
		std::cout << "You walk towards the door, and as you grab the handle and turn a" << std::endl;
		std::cout << "clicking sound indicates that the door is locked.               " << std::endl;
		goto loop;
	}
}
