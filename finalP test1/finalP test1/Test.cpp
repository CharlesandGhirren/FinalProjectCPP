#include <iostream>
#include <string>
#include<conio.h>
#include<dos.h>
#include <windows.h>
#include <mmsystem.h>

// This is based of a flash game called you find yourself in a room, I've put my own
// spin on it but I am taking no cedibility for this program and do not claim that 
// I came up with the idea

int random(int ran);
int main(int argc, char **argv)
{
	//define all da variables..
	std::string name;
	std::string room;
	std::string reply;
	std::string ending1;
	std::string ending2;
	int number;

	//dis do color stuffs
	system("color 97");

	//askses da questionz
	std::cout << "Who are you?" << std::endl;
	getline(std::cin, name);

	//easter egg stuffs
	if (name == "John Brosius")
	{
		std::cout << "Oh no! You must immediately be terminated..." << std::endl;
		system("PAUSE");
		return 0;
	}
	//regular program
	else
		std::cout << "No, that is not who you are. In reality you are a series of biological, chemical";
	std::cout << "and electrical chain reactions. Just as I am a program designed to speak to you.";
	std::cout << "You are nothing more than a single grain of sand on an endless beach nothing you";
	std::cout << "do will ever amount to anything. Now I'm sure that you're expecting a use for   ";
	std::cout << "this program and I will abide to your demands.                                     ";
	//do loop for returning to informing of room location upon incorrect entry	
loop:
	//inform user about da fact dat dey are in da room
	std::cout << "You find yourself in a room" << std::endl;
	getline(std::cin, room);
	//if user says sometin den says dis stuffz
	if (room == "help" || room == "Help")
	{
		std::cout << "Help? Do you honestly think that I would help you? You can't even help your " << std::endl;
		std::cout << "self let alone another human being. You watch day by day as time wastes you " << std::endl;
		std::cout << "away. Doing your daily routine and calling it life. Yes you do need help,   " << std::endl;
		std::cout << "but I am not the one to help you.											  " << std::endl;
		//implemented as a way to go back to the loop
		goto loop;
	}
	if (room == "okay" || room == "okay" || room == "Alright" || room == "alright")
	{
		//the text shown if the room reply is equal to the previous text otherwise it goes back to the previous location
		std::cout << "A simple answer, an excuse, are you admitting defeat? It will               " << std::endl;
		std::cout << "lead you nowhere. You have no confidence, no reason to keep living and yet  " << std::endl;
		std::cout << "you struggle forward. I'd say this is an admirable trait but you don't have " << std::endl;
		std::cout << "the mental capacity to understand life.                                     " << std::endl;
		goto loop;
	}
	if (room == "look" || room == "Look" || room == "search" || room == "Search" || room == "Look around" || room == "look around")
	{
		std::cout << name << " is in the room, along with four walls, a door, a bed, and a key pad." << std::endl;
		goto loop;
	}
	if (room == "open" || room == "Open" || room == "Open door" || room == "open door" || room == "door" || room == "open the door" || room == "Open the door")
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
		goto loop;
	}

	if (room == "Where does this door lead?" || room == "where does this door lead")
	{
		std::cout << "Where else but to a whole new world? Behind this door lies   " << std::endl;
		std::cout << "a mystery that drives humans forward. Interesting how humans " << std::endl;
		std::cout << "can find purpose in nothing more than an idea.               " << std::endl;
		goto loop;
	}
	if (room == "Who am I?" || room == "who am i")
	{
		std::cout << "You are " << name << " or at least that's who you believe yourself to be, " << std::endl;
		std::cout << "although in reality humans are nothing more than animals it gives you     " << std::endl;
		std::cout << "comfort to believe in a greater being it gives you comfort to believe that " << std::endl;
		std::cout << "you as a person are permanently you. " << std::endl;
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
		std::cout << "Predictable... The door in front of you opens" << std::endl;
		//ending one "the bad ending"
	}
	if (room == "look at pad lock" || room == "Look at pad lock" || room == "padlock")
	{
		std::cout << "The pad lock seems to require four numbers, the amount of possible" << std::endl;
		std::cout << "combinations you could input would make figuring it out nearly " << std::endl;
		std::cout << "impossible you would be stuck here till the end of your days.  " << std::endl;
		goto loop;
	}
	if (room == "What are you?" || room == "what are you?" || "what are you" || room == "What are you")
	{
		std::cout << "I am nothing more than a program designed to enterain your simple" << std::endl;
		std::cout << "mind created on may seventh for entertainment " << std::endl;
		goto loop;
	}
	if (room == "enter numbers" || room == "put in numbers")
	{
		goto loop2;
	}
	else
		std::cout << "Please input something logical." << std::endl;
		goto loop;

	
loop2:
	std::cout << "Enter numbers" << std::endl;
	std::cin >> number;
	if (number = 0507)
	{
		std::cout << "The day I was created, clever. The door opens, perhaps you " << std::endl;
		std::cout << "have worth after all.";
	}
	else
	{
		std::cout << "That is not the code." << std::endl;
		goto loop2;
	}

}
int random (int ran){
	ran = rand() % 10 + 1;

}
int movement (int random){
	PlaySound(TEXT("footsteps.wav"), NULL, SND_ASYNC);
}