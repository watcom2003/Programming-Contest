#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    set<pair<int,int>> p1;
    pair <int,int> x;

    x = make_pair(1,5);
    p1.insert(x);
    x = make_pair(1,5);
    p1.insert(x);
    cout << p1.size() << endl;


    for(auto &x:p1)
{
  cout<<x.first<<":"<<x.second<<std::endl;
}
return 0;
}
