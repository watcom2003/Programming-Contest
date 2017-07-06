#include <iostream>

using namespace std;

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box

      public:
      Box(void) {
        length = 15.0;
      }
      ~Box(void) {}
      Box(double hei,double len, double bre) {
        length = len;
        breadth = bre;
        height = hei;
      }
      double area(void){
         return length * breadth * height;
      }

};

int main( ) {
   Box box1(5.0,6.0,7.0);        // Declare Box1 of type Box
   Box box2(10.0,12.0,13.0);        // Declare Box2 of type Box

cout.precision(2);
   cout << "Volume of Box1 : " << fixed <<box1.area() <<endl;

   cout << "Volume of Box2 : " << fixed <<box2.area() <<endl;

   return 0;
}
