#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib> 
#include <chrono>
#include <iomanip>
#include <cmath>

using namespace std;

class store {
  private:
  int smartPrice;
  int speedPrice;
  int magicPrice;
  int strengthPrice;
  int feedPrice;

  public:
  store() 
    :smartPrice(1500), speedPrice(1200), magicPrice(2000), strengthPrice(1800), feedPrice(500)

  {}
  void options1() {
    cout << "the cost of 1 smart point " << smartPrice << endl;
    cout << "the cost of 1 speed point " << speedPrice << endl;
    cout << "the cost of 1 magic point " << magicPrice << endl;
    cout << "the cost of 1 strength point  " <<  strengthPrice <<endl;
    cout << "the cost of feed " << feedPrice  << endl;
    
  }
  int rsmartPrice() {

      return smartPrice;
  }
  int rspeedPrice(){
    return speedPrice;

  }
  int rmagicPrice() {
    return(magicPrice);

  }
  int rstrengthPrice() {
    return(strengthPrice);
  }
  int rfeedPrice() {
    return(feedPrice);
  }
  int price(int price) {
    return price;

  }

   int sale(int money, int price) {
    money = money-price;
    return(price);    

  }

};
// int main() {



// }