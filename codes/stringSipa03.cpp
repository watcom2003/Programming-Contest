#include <iostream>
#include <string>

using namespace std;

bool iequals(const string& a, const string& b)
{
    unsigned int sz = a.size();
    if (b.size() != sz)
        return false;
    for (unsigned int i = 0; i < sz; ++i)
        if (toupper(a[i]) != toupper(b[i]))
            return false;
    return true;
}

int main() {
   string mess, submess;
   int check;
   const string key="SIPA";
   int count = 0;

   cin >> mess;
   check = -1;
   for (int i=0;i<mess.length();i++) {
   if (toupper(mess[i])==key[0]) {
        check = i;
   }
   if (check!=-1) {
        submess = mess.substr(check,4);
        if (iequals(submess,key)) {
            cout << "\"" << submess <<"\"";
            i+=(key.length()-1);
            check = -1;
            count++;
        } else cout << mess[i] ;
    } else cout << mess[i];

   }
   cout << endl << count << endl;
return 0;
}
