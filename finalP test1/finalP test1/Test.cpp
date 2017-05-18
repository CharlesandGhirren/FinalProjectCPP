#include <iostream>
#include <string>

// This is based of a flash game called you find yourself in a room, I've put my own
// spin on it but I am taking no cedibility for this program and do not claim that 
// I came up with the idea

int main(int argc, char **argv)
{
	std::string name;
	std::string room;
	std::string reply;
	std::string room2;

	std::cout << "Who are you? >> " << std::endl;
	getline(std::cin, name);

	std::cout << "No, that is not who you are. In reality you are a series of biological, chemical";
	std::cout << "and electrical chain reactions. Just as I am a program designed to speak to you.";
	std::cout << "You are nothing more than a single grain of sand on an endless beach nothing you";
	std::cout << "do will ever amount to anything. Now I'm sure that you're expecting a use for   ";
	std::cout << "this program and I will abide to your demands.                                     ";
	
loop:
	std::cout << "You find yourself in a room" << std::endl;
	getline(std::cin, room);

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
		std::cout << "A simple answer, an excuse, are you admitting defeat? It will               " << std::endl;
		std::cout << "lead you nowhere. You have no confidence, no reason to keep living and yet  " << std::endl;
		std::cout << "you struggle forward. I'd say this is an admirable trait but you don't have " << std::endl;
		std::cout << "the mental capacity to understand life.                                     " << std::endl;
		goto loop;
	}
	if (room == "look" || room == "Look" || room == "search" || room == "Search" || room == "Look around" || room == "look around")
	{
		std::cout << name << " is in the room, along with four walls, a door, and a bed" << std::endl;
		goto loop; 
	}
	if (room == "open" || room == "Open" || room == "Open door" || room == "open door" || room  == "door" || room == "open the door" || room == "Open the door")
	{

		std::cout << "You walk towards the door, and as you grab the handle and turn a" << std::endl;
		std::cout << "clicking sound indicates that the door is locked.               " << std::endl;
		goto loop;
	}
	if (room == "Where am I?" || room == "where am i" || room == "what is this place" || room == "What is this place?")
	{
		std::cout << "The confines of your mind, trapped by the convictions that you set for " << std::endl;
		std::cout << "yourself. you should just give up like so many before you did. There's " << std::endl;
		std::cout << "no escape from your mind.                                              " << std::endl;
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
		std::cout << "Why ask why? Why is a question of submission. Are you submitting to me? " << std::endl;
		getline(std::cin, reply);

		if (reply == "yes" || reply == "Yes")
		{
			std::cout << "You're pathetic to give up so easily, maybe I should just end your life." << std::endl;
			std::cout << "No, no that would accomplish nothing, the door in front of you opens." << std::endl;
			goto loop2;
		}

		if (reply == "no" || reply == "No")
		{
			goto loop;
		}
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
		std::cout << "Where else but to a whole new world? Behind this door lies   " << std::endl;
		std::cout << "a mystery that drives humans forward. Interesting how humans " << std::endl;
		std::cout << "can find purpose in nothing more than an idea.               " << std::endl;
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
	if (room == "Look under bed" || room == "look under bed")
	{
		std::cout << "Searching under the bed you find nothing, not that it would matter." << std::endl;
		std::cout << "I highly doubt you would be able to figure out what you needed to do " << std::endl;
		std::cout << "even if there was something here." << std::endl;
		goto loop;
	}
	if (room == "Give up" || room == "give up" || room == "I give up")
	{
		std::cout << "Predictable " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		goto loop2;
	}
	std::cout << "Please input something logical." << std::endl;
	goto loop;

loop2:
	std::cout << "You find yourself in a room" << std::endl;
	getline(std::cin, room2);

	if (room2 == "look" || room2 == "Look" || room2 == "search" || room2 == "Search" || room2 == "Look around" || room2 == "look around")
	{
		std::cout << name << " is in the room, along with four walls, a door, and a key pad" << std::endl;
		goto loop2;
	}
}
