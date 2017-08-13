// pair::pair example
#include <utility>      // pair, make_pair
#include <string>       // string
#include <iostream>     // cout
using namespace std;

int main () {
  pair <string, pair <double, double>> product1;                     // default constructor
  pair <string,pair <double, double>> product2 ("tomatoes",2.30,0.10);   // value init
  pair <string,pair <double, double>> product3 (product2);          // copy constructor

  product1 = make_pair(string("lightbulbs"),0.99,0.10);   // using make_pair (move)

  product2.first = "shoes";                  // the type of first is string
  product2.second.first = 39.90;
  product2.second.second = 0.10;                 // the type of second is double

  cout << "The price of " << product1.first << " is $" << product1.second.first << '\n';
  cout << "The price of " << product2.first << " is $" << product2.second.first << '\n';
  cout << "The price of " << product3.first << " is $" << product3.second.first << '\n';
  return 0;
}
