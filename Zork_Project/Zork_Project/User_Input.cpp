// zork_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <string>
#include <sstream>
#include <vector> 
#include "zork_header.h"


using namespace std;
void Parse_User_Input(string user_input);
/*
int main()
{
	string user_input;

	cout << "Please enter a string here ya filthy animal\n";
	getline(std::cin, user_input);
	cout << "This is your string:  " << user_input << "\n";

	Parse_User_Input(user_input);
	return 0;
}
*/
void Parse_User_Input(string user_input)
{
	int i = 0;
	int counter = 0;
	string string_array[50];

	istringstream iss(user_input);
	string word;

	while (iss >> word) {
		cout << word << "\n";
		string_array[counter] = word;
		counter++;

	}
	//MOVE NORTH
	if (string_array[0] == "n")
	{
		go_north();
	}
	//MOVE SOUTH
	else if (string_array[0] == "s")
	{
		go_south();
	}
	//MOVE EAST
	else if (string_array[0] == "e")
	{
		go_east();
	}
	//MOVE WEST
	else if (string_array[0] == "w")
	{
		go_west();
	}
	//READS INVENTORY DISPLAY
	else if (string_array[0] == "i")
	{
		list_inventory();
	}
	// READS TAKE (ITEM)
	else if ((string_array[0] == "take") && (counter == 2))
	{
		take_item(string_array[1]);
	}
	//READS OPEN (CONTAINER)
	else if (string_array[0] == "open")
	{
		if ((string_array[1] != "exit") && (counter == 2))
		{
			open_container(string_array[1]);
		}
	}
	//READS OPEN EXIT
	else if (string_array[0] == "open")
	{
		if ((string_array[1] == "exit") && (counter == 2))
		{
			open_exit();
		}
	}
	//READS  READ (ITEM)
	else if ((string_array[0] == "read") && (counter == 2))
	{
		read_item(string_array[1]);
	}
	//READS DROP (ITEM)
	else if ((string_array[0] == "drop") && (counter == 2))
	{
		drop_item(string_array[1]);
	}
	//PUTS (ITEM) IN (CONTAINER)
	if ((string_array[0] == "put") && (counter == 4))
	{
		put_item(string_array[1], string_array[3]);
	}
	//READS TURN ON (ITEM)
	if ((string_array[0] == "turn") && (string_array[1] == "on") && (counter == 3))
	{
		turn_on(string_array[2]);
	}
	//READS ATTACK (CREATURE) WITH (ITEM)
	if ((string_array[0] == "attack") && (string_array[2] == "with") && (counter == 4))
	{
		attack_creature(string_array[1], string_array[3]);
	}
}




void go_north()
{
}
void go_south()
{
}
void go_east()
{
}
void go_west()
{
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