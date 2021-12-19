#include <bits/stdc++.h>
using namespace std;
int main()
{
 int sum = 0;
 int tc;
 cin >> tc;
 while (tc--)
 {
  string s;
  cin >> s;
  int arr[s.length()];
  for (int i = 0; i < s.length(); i++)
  {
   if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
   {
    arr[s.length() - 1 - i] = 0;
   }
   else
   {
    arr[s.length() - 1 - i] = 1;
   }
  }
  for (int i = 0; i < s.length(); i++)
  {
   sum = (arr[i] * pow(2, i) )% 1000000007;
  }
  cout << sum<< "\n";
 }
 return 0;
}