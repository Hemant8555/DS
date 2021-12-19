#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, sum = 0, y = 0;
 cin >> n;
 vector<int> v;
 if (n == 0)
 {
  cout << "0";
 }
 else if (n == 1 || n == 2)
 {
  cout << "1";
 }
 else
 {
  while (n != 0)
  {
   v.push_back(n % 2);
   n = n / 2;
  }
  for (auto i = v.end()-1; i >= v.begin(); i--)
  {
   sum = sum + (*i * pow(2, y));
   y++;
  }
  cout << sum;
 }
 return 0;
}