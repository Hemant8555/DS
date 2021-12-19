#include <bits/stdc++.h>
using namespace std;
int main()
{
 map<int, int> m;
 m[1] = 22;
 m[2] = 20;
 m[3] = 23;
 m[4] = 25;
 cout << m[10] << "\n";
 cout << m[1] << "\n";
 for (auto x : m)
 {
  cout << x.first << "->" << x.second << "\n";
 }
 return 0;
}