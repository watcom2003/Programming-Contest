#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
   vector<int> pos;
   string mess = "helloSiPa12345SipAxyz", orgMess, subMess;
   int count = 0, ind;

   orgMess = mess;

   transform(mess.begin(),mess.end(),mess.begin(),::toupper);
   cout << mess << endl;

   for (int i=0;i<mess.length();i++) {
    if (mess[i]=='S') {
        subMess = mess.substr(i,4);
        cout << subMess <<endl;
        if (subMess=="SIPA") {
            count++;
            pos.push_back(i);
        }
    }
   }
   ind = 0;
   if (!pos.empty())
    for (int i=0;i<orgMess.length();i++) {
        if (i==pos[ind])  {
            cout << "\"" << orgMess.substr(i,4)<<"\"";
            i+=3;
            ind++;
        } else cout << orgMess[i];


    }
    cout << endl <<  count << endl;



return 0;
}
