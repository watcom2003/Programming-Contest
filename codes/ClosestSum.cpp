#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int data[] = {-10, 9, 1, 7, 3, 20, 2}, k = 10;
   int i,j,point,dist;
   int state[3]={0};
   bool init = true;


   for (i=0;i<5;i++) {
     point = abs(k - data[i]);

     for (j=i+1;j<6;j++) {
        dist = abs(data[j]-point);
        if ((init) || ((state[2] >= dist) && (abs(data[i]-data[j]) < abs(state[0]-state[1]))) ) {
            if (data[i]<data[j]) {
                state[0] = data[i]; state[1] = data[j];
            } else {
                state[0] = data[j]; state[1] = data[i];
            }

            state[2] = dist;
            init = false;

        }
    }
   }
   cout << state[0] << ", " << state[1] << endl;
return 0;

}
