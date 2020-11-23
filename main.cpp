#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib> 
#include <chrono>
#include <iomanip>
#include <cmath>
#include <ctime>
#include "store.h"
#include "pet.h"

using namespace std;

class Room
{
private:
  int _x;
  int _y;
  bool _up;
  bool _down;
  bool _left;
  bool _right;
  char _symbol;
  int _seen;
  bool _store;
public:
  Room()
  {
    _x = 0;
    _y = 0;
    _up = false;
    _down = false;
    _left = false;
    _right = false;
    _symbol = 'o';
    _seen = 1;
  }
  Room(int x, int y, bool up, bool down, bool left, bool right, char symbol, bool store)
  {
    _x = x;
    _y = y;
    _up = up;
    _down = down;
    _left = left;
    _right = right;
    _symbol = symbol;
    _seen = 1;
    _store = store;
  }
  int x()
  {
    return _x;
  }
  int y()
  {
    return _y;
  }
  int up()
  {
    return _up;
  }
  int down()
  {
    return _down;
  }
  int left()
  {
    return _left;
  }
  int right()
  {
    return _right;
  }
  char symbol()
  {
    return _symbol;
  }
  int seen()
  {
  	return _seen;
  }
  bool store()
  {
  	return _store;
  }
};

bool existsRoom(vector<Room> dungeon, int x, int y)
{
  for(int i = 0; i < dungeon.size(); i++)
  {
    if(dungeon[i].x() == x && dungeon[i].y() == y)
    {
      return true;
    }
  }
  return false;
}

Room findRoom(vector<Room> dungeon, int x, int y)
{
  for(int i = 0; i < dungeon.size(); i++)
  {
    if(dungeon[i].x() == x && dungeon[i].y() == y)
    {
      return dungeon[i];
    }
  }
}

class Player
{
private:
  int _x;
  int _y;
  Room _curr;
  int _money;
  int _food;
  int _health;
public:
  Player(Room start)
  {
    _curr = start;
    _x = start.x();
    _y = start.y();
    _money = 5000;
    _food = 5;
    _health = 100;
  }
  int x()
  {
    return _x;
  }
  int y()
  {
    return _y;
  }
  Room curr()
  {
    return _curr;
  }
  int food()
  {
    return _food;
  }
  int money()
  {
    return _money;
  }
  int health()
  {
    return _health;
  }
  void move(char dir, vector<Room> maze)
  {
  	int x = _x;
  	int y = _y;
    if(dir == 'w')
    {
      if(_curr.up())
      {
        y++;
      }
      else
      {
        cout << "no up" << endl;
      }
    }
    else if(dir == 'd')
    {
      if(_curr.right())
      {
        x++;
      }
      else
      {
        cout << "no right" << endl;
      }
    }
    else if(dir == 's')
    {
      if(_curr.down())
      {
        y--;
      }
      else
      {
        cout << "no down" << endl;
      }
    }
    else if(dir == 'a')
    {
      if(_curr.left())
      {
        x--;
      }
      else
      {
        cout << "no left" << endl;
      }
    }
    
    if(existsRoom(maze, x, y))
    {
      _curr = findRoom(maze, x, y);
      _x = x;
      _y = y;
      _food--;
      return;
    }
    cout << "no room" << endl;
  }
};

void drawMap(vector<Room> dungeon, Player player)
{
  for(int y = 5; y > -5; y--)
  {
    for(int x = -5; x < 5; x++)
    {
      if(existsRoom(dungeon, x, y))
      {
      	Room curr = findRoom(dungeon, x, y);
      	//cout << curr.seen();
        if(fabs(player.curr().x() - curr.x()) < 2 &&
        	fabs(player.curr().y() - curr.y()) < 2 )
        {
          if(player.curr().x() == curr.x() && player.curr().y() == curr.y())
          {
            cout << "\033[32m" << curr.symbol() << "\033[0m";
          }
          else if(curr.store())
          {
          	cout << "\033[33m" << curr.symbol() << "\033[0m";
          }
          else
          {
          	cout << curr.symbol();
          }
        }
	    else
	    {
	      cout << " ";
	    }
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}

int main()
{
  	int creature = 0;
    cout << "Welcome to *name of game*!" << "\n\n"
    	 << "To begin playing, please enter the number next to" << "\n"
    	 << "the creature you wish to play as: " << "\n\n"

    	 << "1. Andre," << "\n"
    	 << "Strong and smart with plenty of speed, but with an abismal amount of luck" << "\n\n"
    	 
    	 << "2. Vincent," << "\n"
    	 << "Notorius for falling asleep at inoppertune moments, this lethargic creature" << "\n"
    	 << "is one with magic and annoyingly lucky" << "\n\n"

    	 << "3. Luca," << "\n"
    	 << "This speedy creature has a fair connection to magic and a master of moving unnoticed" << "\n\n"

    	 << "4. Griffin," << "\n"
    	 << "This mystical creature has an unparraleled intelect as well as a good balance of speed and magic" << "\n\n"

       <<"or type 0 ,to roll a dice!" << "\n";

    cin >> creature;
    while(creature > 4 || creature < 0){
      cout << "Sorry, that character is still under development" << "\n\n"
      << "Please try again" << "\n";
      cin >> creature;
  }

  Pet pet;
  
  if(creature == 1){
    pet._strength = 8;
    pet._speed = 7;
    pet._smarts = 6;
    pet._luck = 3;
    pet._magic = 1;
    pet._hunger = 0;
    pet._health = 100;
  }
  if(creature == 2){
    pet._strength = 1;
    pet._speed = 1;
    pet._smarts = 10;
    pet._luck = 10;
    pet._magic = 1;
    pet._hunger = 0;
    pet._health = 100;
  }
  if(creature == 3){
    pet._strength = 1;
    pet._speed = 10;
    pet._smarts = 2;
    pet._luck = 2;
    pet._magic = 6;
    pet._hunger = 0;
    pet._health = 100;
  }
  if(creature == 4){
    pet._strength = 2;
    pet._speed = 2;
    pet._smarts =10;
    pet._luck = 3;
    pet._magic = 3;
    pet._hunger = 0;
    pet._health = 100;
  }
  
  if(creature == 0){
        srand(time(NULL));  
      int dice = rand() % 4 + 1;


	   	

	   	 if(dice == 1){
	       cout << "---------" << endl
	        <<"|       |" << endl
	        <<"|   o   |" << endl
	        <<"|       |" << endl
	        <<"---------" << endl;
	    }//1
	    if(dice == 2){
	        cout << "---------" << endl
	        <<"| o     |" << endl
	        <<"|       |" << endl
	        <<"|     o |" << endl
	        <<"---------" << endl;
	    }//2
	    if(dice == 3){
	         cout << "---------" << endl
	        <<"| o     |" << endl
	        <<"|   o   |" << endl
	        <<"|     o |" << endl
	        <<"---------" << endl;
	    }//3
	    if(dice == 4){
	        cout << "---------" << endl
	        <<"| o   o |" << endl
	        <<"|       |" << endl
	        <<"| o   o |" << endl
	        <<"---------" << endl;
	    }//4

    	       cout << "You rolled a " << dice << "\n";
	    creature = dice;
          }



 vector<Room> dungeon;
  // x, y, up, down, left, right
  // startroom
  dungeon.push_back(Room(0, 0, false, false, true, true, '=', false));
  // left branch
  dungeon.push_back(Room(-1, 0, true, true, false, true, '+', false));
  dungeon.push_back(Room(-1, 1, true, true, false, false, 'I', false));
  dungeon.push_back(Room(-1, -1, true, false, false, false, '0', false));
  dungeon.push_back(Room(-1, 2, true, true, true, true, '+', true));
  dungeon.push_back(Room(-1, 3, true, true, false, true, '+', false));
  dungeon.push_back(Room(-1, 4, false, true, false, false, '0', false));
  dungeon.push_back(Room(-2, 2, false, false, false, true, '0', false));
  dungeon.push_back(Room(0, 3, false, false, true, true, '=', false));
  dungeon.push_back(Room(1, 3, true, true, true, false, '+', true));
  // right branch
  dungeon.push_back(Room(1, 0, true, true, true, false, '+', false));
  dungeon.push_back(Room(2, 0, false, false, true, false, '0', true));
  dungeon.push_back(Room(1, -1, true, true, false, false, 'I', false));
  dungeon.push_back(Room(1, -2, true, true, true, true, '+', false));
  dungeon.push_back(Room(1, -3, true, false, false, false, '0', false));
  dungeon.push_back(Room(0, -2, false, false, true, true, '=', false));
  dungeon.push_back(Room(-1, -2, false, false, false, true, '0', true));
  dungeon.push_back(Room(2, -2, false, false, true, true, '=', false));
  dungeon.push_back(Room(3, -2, false, false, true, true, '=', false));
  // final stretch
  dungeon.push_back(Room(4, -2, true, false, true, false, '+', false));
  dungeon.push_back(Room(4, -1, true, true, false, false, 'I', true));
  dungeon.push_back(Room(4, 0, true, true, false, false, 'I', false));
  dungeon.push_back(Room(4, 1, true, true, false, true, '+', false));
  dungeon.push_back(Room(4, 2, true, true, true, false, '+', false));
  dungeon.push_back(Room(4, 3, true, true, false, false, 'I', false));
  dungeon.push_back(Room(4, 4, false, true, true, false, '+', true));
  dungeon.push_back(Room(5, 1, false, false, true, true, '=', false));
  dungeon.push_back(Room(6, 1, false, false, true, true, '=', false));
  dungeon.push_back(Room(7, 1, false, false, true, false, '0', true));
  dungeon.push_back(Room(1, 4, false, true, false, true, '+', false));
  dungeon.push_back(Room(1, 2, true, false, false, true, '+', false));
  dungeon.push_back(Room(2, 4, false, false, true, true, '=', false));
  dungeon.push_back(Room(2, 2, false, false, true, true, '=', false));
  dungeon.push_back(Room(3, 4, false, false, true, true, '=', false));
  dungeon.push_back(Room(3, 2, false, false, true, true, '=', false));

  Player player(dungeon[0]);

	while(1)
	{
		drawMap(dungeon, player);
		int input;

		cout << "What do you want to do?" << endl;
		cout << "  1. Move to another cavern" << endl;
		cout << "  2. Check on your supplies" << endl;
		if(player.curr().store())
			cout << "  3. Buy items from the store" << endl;
		 
		cin >> input;

		if(input == 1)
		{
			cout << "Where do you want to go? ";
		  	cin >> input;
		  	if(input >= 0 && input < 4)
		  	{
		  	  player.move(input, dungeon);
		  	  cout << "{" << player.x() << "," << player.y() << "}" << endl;
		  	}
		}
		else if(input == 2)
		{
      
      cout << endl << "You have " << pet.strength() << "Strength," << pet.speed() << "speed, " << pet.smarts() << "smarts, " << pet.luck() << "luck, " << pet.magic() << "magic.";
      cout << endl << "You have " << pet.hunger() << "out of 100 for hunger, " << pet.health() << "out of 100 for health.";
			cout << endl << "\033[33mYou have $" << player.money() << " and enough food to travel through " << player.food() << " more caverns.\033[0m" << endl;
		}
		else if(input == 3)
		{
		  cout << "you have opened the store" << endl;
      store opened;
      opened.options1();
      cout << endl;
      cout << "press 1 for a smart point " << endl;
      cout << "press 2 for a speed point " << endl;
      cout << "press 3 for a magic point " << endl;
      cout << "press 4 for a strength point " << endl;
      cout << "press 5 for feed " << endl;
      int numb;
      cin >> numb;
      switch(numb) {
        case 1:
        opened.sale(player.money(), opened.rsmartPrice());
        // pet.smarts() = pet.smarts()+1;
        pet._smarts=pet._smarts+1;
        break;
        case 2: 
        opened.sale(player.money(), opened.rspeedPrice());
        // pet.speed() = pet.speed()+1;
        pet._speed=pet._speed+1;
        break;
        case 3: 
        opened.sale(player.money(),opened.rmagicPrice());
        // pet.magic() = pet.magic()+1;
        pet._magic = pet._magic+1;
        break;
        case 4: 
        opened.sale(player.money(),opened.rstrengthPrice());
        // pet.strength() = pet.strength()+1;
        pet._strength = pet._strength+1;
        break;
        case 5:
        opened.sale(player.money(),opened.rfeedPrice());
        pet._hunger=0;
        
      }
      
      
    
		}
	}
  return 0;
}
