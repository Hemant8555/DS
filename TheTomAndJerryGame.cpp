#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  bool flag = true;
  long long count = 0, n;
  cin >> n;
  if (n % 2 != 0)
  {
   cout << n / 2 << "\n";
  }
  else
  {
   while (n > 1)
   {
    n /= 2;
    count++;
    if (n % 2 != 0)
    {
     cout << count << "\n";
     break;
    }
   }
  }
 }
 return 0;
}