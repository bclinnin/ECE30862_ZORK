// zork_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "zork_header.h"


using namespace std;

string Get_User_Input()
{
	string user_input;

	//cout << "Please enter a string here ya filthy animal\n";
	getline(std::cin, user_input);
	//cout << "This is your string:  " << user_input << "\n";

	return user_input;
}



string go_north(room_object * current_room)
{
	if (current_room->borders[0] != "")
	{
		return(current_room->borders[0]);
	}
	return(current_room->name);
}
string go_south(room_object * current_room)
{
	if (current_room->borders[2] != "")
	{
		return(current_room->borders[2]);
	}
	return(current_room->name);
}
string go_east(room_object * current_room)
{
	if (current_room->borders[1] != "")
	{
		return(current_room->borders[1]);
	}
	return(current_room->name);
}
string go_west(room_object * current_room)
{
	if (current_room->borders[3] != "")
	{
		return(current_room->borders[3]);
	}
	return(current_room->name);
}


void list_inventory()
{
}
void take_item(string item)
{
}
void open_container(string container)
{
}
void open_exit()
{
}
void read_item(string item)
{
}
void drop_item(string item)
{
}
void put_item(string item, string container)
{
}
void turn_on(string item)
{
}
void attack_creature(string creature, string item)
{
}