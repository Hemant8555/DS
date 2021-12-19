#include <bits/stdc++.h>
using namespace std;
int main()
{
 bool flag;
 int n, count = 0;
 cin >> n;
 vector<int> v;
 vector<int>::iterator it1;
 vector<int>::iterator it2;
 vector<int>::iterator it3;

 for (int i = 0; i < n; i++)
 {
  int x;
  cin >> x;
  v.push_back(x);
 }
 for (it1 = v.begin(); it1 != v.end(); it1++)
 {
  flag = false;
  it2 = it1 + 1;
  it3 = v.end();
  while (it2 <= v.size()/2 || it3 >= v.size()/2)
  {
   if (*it2 < *it1)
   {
    v.erase(it2);
   }
   if (*it3 < *it1)
   {
    v.erase(it3);
   }
   it2++;
   it3--;
  }
  count++;
 }
 cout << count << "\n";

 return 0;
}