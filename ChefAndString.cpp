#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  int count = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
   if (s[i] == 'x' && s[i + 1] == 'y' || s[i] == 'y' && s[i + 1] == 'x')
   {
    count++;
    i++;
   }
  }
  cout << count << "\n";
 }
 return 0;
}