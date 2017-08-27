#include <bits/stdc++.h>
using namespace std;
int main() {
int a[5] = {7, 9 , 1, 2 ,6};
int p[5] = {0,1,2,3,4};
int n = 5;

//sort(p, p+n, [=](int i, int j) { return a[i] < a[j]; });
// for (int i=0; i<n; i++) cout << a[p[i]] <<endl;


sort(a, a+n, greater<int>());
for (int i=0; i<n; i++) cout << a[i] <<endl;
return 0;}
