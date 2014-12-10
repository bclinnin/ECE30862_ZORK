#ifndef ZORK_HEADER
#define ZORK_HEADER
#include <vector> 

using namespace std;
void go_north();
void go_south();
void go_east();
void go_west();
void list_inventory();
void take_item(string item);
void open_container(string container);
void open_exit();
void read_item(string item);
void drop_item(string item);
void put_item(string item, string container);
void turn_on(string item);
void attack_creature(string creature, string item);

class creature_object
{
public:
	creature_object();

};

class item_object
{
public:
	item_object();

};

class container_object
{
public:
	container_object();

};


class trigger_object
{
public:
	trigger_object();

};

class room_object
{

public:
	string name;
	string description;
	vector<string> creatures;
	vector<string> items;
	vector<string> containers;
	vector<trigger_object> triggers;
	string borders[4];  //NORTH = IDX 0     EAST = IDX 1     SOUTH = IDX 2       WEST = IDX 3
	room_object(){
	}
	void init_name_and_description(string name_, string description_)
	{
		name = name_;
		description = description_;
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

#endif /* ZORK_HEADER */