#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib> 
#include <chrono>
#include <iomanip>
#include <cmath>

using namespace std;

class Pet {
public:

	int _strength;
	int _smarts;
	int _speed;
	int _luck;
	int _magic;

	int _health;
	int _hunger;
 
  
  int strength(){
    return _strength;
  }
  int smarts(){
    return _smarts;
  }
  int speed(){   
      return _speed;
  }
  int luck(){
    return _luck;
  }
  int magic(){
    return _magic;
  }
  int hunger(){
    return _hunger;
  }
  int health(){
    return _health;
  }
  string name(){
    string a;
    return a;
  }

  bool jump(int height) { // height the player will have to jump
		if (_strength <= 4) {
			if ((rand() % 4) > height) {
				return true;
			} else {
				return false;
			}
		} else if (_strength <= 7) {
			if ((rand() % 5 + 2) > height) {
				return true;
			} else {
				return false;
			}
		} else {
			if ((rand() % 5 + 5) > height) {
				return true;
			} else {
				return false;
			}

		}
  }


   double smartTest() {
    if(_smarts==1) {
      return(rand() % 15);
    }
    if(_smarts==2) {
      return(rand() % 20 + 10);
    }
    if(_smarts>=3 && _smarts<=5) {
      return(rand() % 35 + 20);
    }
    if(_smarts==6) {

      return(rand() % 10 + 50);
    }
    if(_smarts==7){
      return(rand() % 25 + 50);
    }
    if(_smarts==8) {
      return(rand() % 30 + 60);
    }
    if(_smarts==9){
      return(rand() % 20 + 80);
    }
    if(_smarts==10) {
      return(rand() % 10 + 90);
    }
  }


  bool magicc() {

    if(_magic<=7) {

      return false;
    }
    if(_magic>7) {

      return true;
    }

  }

  int lucky(){
    int dice = 0;
    if(_luck <=2){
      srand(time(NULL));  
      dice= rand() % 1 + 1;
    }
    if(_luck > 2 && _luck <=6){
      srand(time(NULL));  
      dice = rand() % 1 + 3;
    }
    if(_luck > 6){
      srand(time(NULL));  
      dice = rand() % 1 + 5;
    }
    if(dice == 1){
        cout << "---------" << endl
        <<"|       |" << endl
        <<"|   o   |" << endl
        <<"|       |" << endl
        <<"---------" << endl;

//        cout << endl << 
    }
    if(dice == 2){
        cout << "---------" << endl
        <<"| o     |" << endl
        <<"|       |" << endl
        <<"|     o |" << endl
        <<"---------" << endl;
    }
    if(dice == 3){
         cout << "---------" << endl
        <<"| o     |" << endl
        <<"|   o   |" << endl
        <<"|     o |" << endl
        <<"---------" << endl;
    }
    if(dice == 4){
        cout << "---------" << endl
        <<"| o   o |" << endl
        <<"|       |" << endl
        <<"| o   o |" << endl
        <<"---------" << endl;
    }
    if(dice == 5){
        cout << "---------" << endl
        <<"| o   o |" << endl
        <<"|   o   |" << endl
        <<"| o   o |" << endl
        <<"---------" << endl;
    }
    if(dice == 6){
       cout << "---------" << endl
        <<"| o   o |" << endl
        <<"| o   o |" << endl
        <<"| o   o |" << endl
        <<"---------" << endl;
    }

  
  }

};




