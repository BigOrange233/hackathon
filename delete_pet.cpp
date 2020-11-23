// {
// public:
// 	int _strength;
// 	int _smarts;
// 	int _speed;
// 	int _luck;
// 	int _magic;

// 	int _health;
// 	int _hunger;

// 	// int health()
//   // {
//   //   return _health;
//   // }
//   // int hunger()
//   // {
//   //   return _hunger;
//   // }
//   // int strength()
//   // {
//   //   return _strength;
//   // }
// };

// class Andre : public Pet {
// public:
// 	int _strength;
// 	int _smarts;
// 	int _speed;
// 	int _luck;
// 	int _magic;
//   string _name;

// 	int _health;
// 	int _hunger;
  
//   Andre() 
//     : _strength(8), _speed(7), _smarts(6), _luck(3), _magic(1), 
//     _hunger(0), _health(100), _name("Andre")
//   {}
//   int run(int d) { // d is distance not dick
//     return d/_speed;
//   }
//   int strength(){
//     return _strength;
//   }
//   int smarts(){
//     return _smarts;
//   }
//   int speed(){
//     return _speed;
//   }
//   int luck(){
//     return _luck;
//   }
//   int magic(){
//     return _magic;
//   }
//   string name(){
//     return _name;
//   }
//   bool jump(int height) { // height the player will have to jump
// 		if (_strength <= 4) {
// 			if ((rand() % 4) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		} else if (_strength <= 7) {
// 			if ((rand() % 5 + 2) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		} else {
// 			if ((rand() % 5 + 5) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}

// 		}
//   }


//    double smartTest() {
//     if(_smarts==1) {
//       return(rand() % 15);
//     }
//     if(_smarts==2) {
//       return(rand() % 20 + 10);
//     }
//     if(_smarts>=3 && _smarts<=5) {
//       return(rand() % 35 + 20);
//     }
//     if(_smarts==6) {

//       return(rand() % 10 + 50);
//     }
//     if(_smarts==7){
//       return(rand() % 25 + 50);
//     }
//     if(_smarts==8) {
//       return(rand() % 30 + 60);
//     }
//     if(_smarts==9){
//       return(rand() % 20 + 80);
//     }
//     if(_smarts==10) {
//       return(rand() % 10 + 90);
//     }
//   }


//   bool magicc() {

//     if(_magic<=7) {

//       return false;
//     }
//     if(_magic>7) {

//       return true;
//     }

//   }
// };

// class Vincent : public Pet {
// public:
// 	int _strength;
// 	int _smarts;
// 	int _speed;
// 	int _luck;
// 	int _magic;
//   string _name;

// 	int _health;
// 	int _hunger;
  
//   Vincent() 
//     : _strength(1), _speed(1), _smarts(8), _luck(10), _magic(10), 
//     _hunger(0), _health(100), _name("Vincent")
//   {}
//     int run(int d) { // d is distance not dick
//     return d/_speed;
//   }
// int strength(){
//     return _strength;
//   }
//   int smarts(){
//     return _smarts;
//   }
//   int speed(){
//     return _speed;
//   }
//   int luck(){
//     return _luck;
//   }
//   int magic(){
//     return _magic;
//   }
//   string name(){
//     return _name;
//   }
//  bool jump(int height) { // height the player will have to jump
// 		if (_strength <= 4) {
// 			if ((rand() % 4) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		} else if (_strength <= 7) {
// 			if ((rand() % 5 + 2) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		} else {
// 			if ((rand() % 5 + 5) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}

// 		}
//  }

//  double smartTest() {
//     if(_smarts==1) {
//       return(rand() % 15);
//     }
//     if(_smarts==2) {
//       return(rand() % 20 + 10);
//     }
//     if(_smarts>=3 && _smarts<=5) {
//       return(rand() % 35 + 20);
//     }
//     if(_smarts==6) {

//       return(rand() % 10 + 50);
//     }
//     if(_smarts==7){
//       return(rand() % 25 + 50);
//     }
//     if(_smarts==8) {
//       return(rand() % 30 + 60);
//     }
//     if(_smarts==9){
//       return(rand() % 20 + 80);
//     }
//     if(_smarts==10) {
//       return(rand() % 10 + 90);
//     }
//   }


//   bool magicc() {

//     if(_magic<=7) {

//       return false;
//     }
//     if(_magic>7) {

//       return true;
//     }

//   }  
// };

// class Luca : public Pet {
// public:
// 	int _strength;
// 	int _smarts;
// 	int _speed;
// 	int _luck;
// 	int _magic;
//   string _name;

// 	int _health;
// 	int _hunger;
  
//   Luca() 
//     : _strength(1), _speed(10), _smarts(2), _luck(2), _magic(6), 
//     _hunger(0), _health(100), _name("Luca")
//   {}
//     int run(int d) { // d is distance not dick
//     return d/_speed;
//   }
// int strength(){
//     return _strength;
//   }
//   int smarts(){
//     return _smarts;
//   }
//   int speed(){
//     return _speed;
//   }
//   int luck(){
//     return _luck;
//   }
//   int magic(){
//     return _magic;
//   }
//   string name(){
//     return _name;
//   }
//  bool jump(int height) { // height the player will have to jump
// 		if (_strength <= 4) {
// 			if ((rand() % 4) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		} else if (_strength <= 7) {
// 			if ((rand() % 5 + 2) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		} else {
// 			if ((rand() % 5 + 5) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		}
//  }
  
//   double smartTest() {
//     if(_smarts==1) {
//       return(rand() % 15);
//     }
//     if(_smarts==2) {
//       return(rand() % 20 + 10);
//     }
//     if(_smarts>=3 && _smarts<=5) {
//       return(rand() % 35 + 20);
//     }
//     if(_smarts==6) {

//       return(rand() % 10 + 50);
//     }
//     if(_smarts==7){
//       return(rand() % 25 + 50);
//     }
//     if(_smarts==8) {
//       return(rand() % 30 + 60);
//     }
//     if(_smarts==9){
//       return(rand() % 20 + 80);
//     }
//     if(_smarts==10) {
//       return(rand() % 10 + 90);
//     }
//   }
//   bool magicc() {

//     if(_magic<=7) {

//       return false;
//     }
//     if(_magic>7) {

//       return true;
//     }

//   }
  
// };

// class Griffin : public Pet {
// public:
// 	int _strength;
// 	int _smarts;
// 	int _speed;
// 	int _luck;
// 	int _magic;
//   string _name;

// 	int _health;
// 	int _hunger;
  
//   Griffin() 
//     : _strength(2), _speed(2), _smarts(10), _luck(3), _magic(3), 
//     _hunger(0), _health(100), _name("Griffin")
//   {}
//      int run(int d) { // d is distance not dick
//     return d/_speed;
//   }
// int strength(){
//     return _strength;
//   }
//   int smarts(){
//     return _smarts;
//   }
//   int speed(){
//     return _speed;
//   }
//   int luck(){
//     return _luck;
//   }
//   int magic(){
//     return _magic;
//   }
//   string name(){
//     return _name;
//   }
//    bool jump(int height) { // height the player will have to jump
// 		if (_strength <= 4) {
// 			if ((rand() % 4) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		} else if (_strength <= 7) {
// 			if ((rand() % 5 + 2) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		} else {
// 			if ((rand() % 5 + 5) > height) {
// 				return true;
// 			} else {
// 				return false;
// 			}
// 		}
//  }
 
//   double smartTest() {
//     if(_smarts==1) {
//       return(rand() % 15);
//     }
//     if(_smarts==2) {
//       return(rand() % 20 + 10);
//     }
//     if(_smarts>=3 && _smarts<=5) {
//       return(rand() % 35 + 20);
//     }
//     if(_smarts==6) {

//       return(rand() % 10 + 50);
//     }
//     if(_smarts==7){
//       return(rand() % 25 + 50);
//     }
//     if(_smarts==8) {
//       return(rand() % 30 + 60);
//     }
//     if(_smarts==9){
//       return(rand() % 20 + 80);
//     }
//     if(_smarts==10) {
//       return(rand() % 10 + 90);
//     }
//   }

//   bool magicc() {

//     if(_magic<=7) {

//       return false;
//     }
//     if(_magic>7) {

//       return true;
//     }

//   }
// };