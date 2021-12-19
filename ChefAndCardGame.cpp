#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  int n, chef_count = 0, morty_count = 0;
  cin >> n;
  int a, b;
  for (int i = 0; i < n; i++)
  {
   int rem = 0, chef_sum = 0, morty_sum = 0;
   cin >> a >> b;
   while (a != 0)
   {
    rem = a % 10;
    chef_sum += rem;
    a = a / 10;
   }
   while (b != 0)
   {
    rem = b % 10;
    morty_sum += rem;
    b = b / 10;
   }
   if (chef_sum > morty_sum)
   {
    chef_count++;
   }
   else if (morty_sum > chef_sum)
    morty_count++;
   else
   {
    chef_count++;
    morty_count++;
   }
  }

  if (morty_count > chef_count)
   cout << 1 << " " << morty_count << "\n";
  else if (chef_count > morty_count)
   cout << 0 << " " << chef_count << "\n";
  else
   cout << 2 << " " << chef_count << "\n";
 }
 return 0;
}
