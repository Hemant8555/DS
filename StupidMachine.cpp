#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  long long min, x, sum = 0;
  long long i = 0;
  long long n;
  cin >> n;
  cin >> min;
  sum=min;
  for (int i = 1; i < n; i++)
  {
   cin >> x;
   if (x < min)
   {
    min = x;
   }
  sum += min;
  }
  cout << sum << "\n";
 }
 return 0;
}