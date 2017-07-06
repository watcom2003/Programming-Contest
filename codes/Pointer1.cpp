#include <iostream>

using namespace std;

class Pointer1 {
public:
    int *Int_ptr;
    int data[10];
public:
    Pointer1() {
        Int_ptr = NULL;
    };
    ~Pointer1(){};
    void init() {
        int i;
        Int_ptr = &data[0];
        for (i=0;i<10;i++) {
            *Int_ptr = (i+1);
            Int_ptr++;
        }
    }
    void display() {
        Int_ptr = &data[0];
        for (int i=0;i<10;i++) {
            cout << (*Int_ptr) << endl;
            Int_ptr++;
        }
    }

};

int main() {
     Pointer1 pt1;
     pt1.init();
     pt1.display();

     return 0;
}

