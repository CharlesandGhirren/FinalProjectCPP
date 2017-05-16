#include <iostream>
#include <string>


int main(int argc, char **argv)
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
	if (room == "open" || room == "Open" || room == "Open door" || room == "open door" ||room == "door")
	{

		std::cout << "You walk towards the door, and as you grab the handle and turn a" << std::endl;
		std::cout << "clicking sound indicates that the door is locked.               " << std::endl;
		goto loop;
	}
	if (room == "Where am I?" || room == "where am i" || room == "what is this place" || room == "What is this place?")
	{
		std::cout << "The confines of your mind, trapped by the convictions that you set for " << std::endl;
		std::cout << "yourself.  " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		goto loop;
	}
	if (room == "How do I get out?" || room == "how do I get out" || room == "Get me out of here" || room == "get me out of here" || room == "Let me out" || room == "get me out")
	{
		std::cout << "You must find your own way out, perhaps it is not the room that you are " << std::endl;
		std::cout << "escaping but you yourself.  " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		goto loop;
	}
	if (room == "Why am I here?" || room == "why am i here" || room == "Why me?" || room == "why me")
	{
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		goto loop;
	}
	if (room == "can you open the door" || room == "Can you open the door?")
	{
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		goto loop;
	}
	if (room == "Where does this door lead?" || room == "where does this door lead")
	{
		std::cout << "Where else but to a whole new world?" << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		goto loop;
	}
	if (room == "sleep in bed" || room == "Sleep in bed" || room == "Go to bed" || room == "go to bed" || room == "go to sleep" || room == "Go to sleep")
	{
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		goto loop;
	}
	if (room == "Who am I?" || room == "who am i")
	{
		std::cout << "You are " << name << " or at least that's who you believe yourself to be, " << std::endl;
		std::cout << "although in reality we are the ones that  " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		goto loop;
	}
}
