#ifndef ZORK_HEADER
#define ZORK_HEADER
#include <vector>

using namespace std;


class creature_object
{
public:
	creature_object();

};

class item_object
{
public:
	string name;
	string writing;
	string condition;
	string turn_on_message;
	string turn_on_action;

	item_object(){

	}
	void init_name_and_writing(string name_, string writing_)
	{
		name = name_;
		writing = writing_;
	}
	void init_condition_status(string condition_, string turn_on_message_, string turn_on_action_)
	{
		condition = condition_;
		turn_on_message = turn_on_message_;
		turn_on_action = turn_on_action_;
	}

};

class container_object
{
public:
	//STATUS VARIABLES
	string name;
	string item;
	string status;
	string accept;
	//TRIGGER VARIABLES
	string has;
	string object;
	string owner;
	string print;
	string action; //WILL NEED TO PARSE THIS (TODO: WRITE A FUNCTION FOR ACTIONS)
	container_object(){
		item = "";
		status = "";
		accept = "";
		has = "";
		object = "";
		owner = "";
		print = "";
		action = "";
	}
	void init_non_trigger(string name_, string item_)
	{
		name = name_;
		item = item_;
	}
	void init_trigger(string name_, string status_, string accept_, string has_, string object_, string owner_, string print_, string action_)
	{
		name = name_;
		status = status_;
		accept = accept_;
		has = has_;
		object = object_;
		owner = owner_;
		print = print_;
		action = action_;
	}


};


class trigger_object
{
public:
	trigger_object(){}

};

class room_object
{

public:
	string name;
	string description;
	string type;
	vector<string> creatures;
	vector<string> items;
	vector<string> containers;
	vector<trigger_object> triggers;
	string borders[4];  //NORTH = IDX 0     EAST = IDX 1     SOUTH = IDX 2       WEST = IDX 3
	room_object(){
		type = "";
		borders[0] = "";
		borders[1] = "";
		borders[2] = "";
		borders[3] = "";
	}
	void init_name_and_description(string name_, string description_)
	{
		name = name_;
		description = description_;
	}
	void init_type(string type_){
		type = type_;
	}
	void set_borders(string name_, string direction)
	{
		if (direction == "north")
		{
			borders[0] = name_;
		}
		if (direction == "east")
		{
			borders[1] = name_;
		}
		if (direction == "south")
		{
			borders[2] = name_;
		}
		if (direction == "west")
		{
			borders[4] = name_;
		}
	}
	void get_items(string item_)
	{
		items.push_back(item_);
	}
	void get_containers(string container_)
	{
		containers.push_back(container_);
	}
	void get_creatures(string creature_)
	{
		creatures.push_back(creature_);
	}
	void add_trigger()
	{

	}
};
string go_north(room_object * current_room);
string go_south(room_object * current_room);
string go_east(room_object * current_room);
string go_west(room_object * current_room);
void list_inventory();
void take_item(string item);
void open_container(string container);
void open_exit();
void read_item(string item);
void drop_item(string item);
void put_item(string item, string container);
void turn_on(string item);
string Get_User_Input();
void attack_creature(string creature, string item);
room_object * Get_Start(vector<room_object*> rooms);
room_object * Get_Room(vector<room_object*> rooms, string room);

#endif /* ZORK_HEADER */