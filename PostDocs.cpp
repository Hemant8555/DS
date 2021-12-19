#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 string s1 = "P";
 string s2 = "D";
 getline(cin, s);
 for (int i = 0; i < s.length(); i++)
 {
  if(s[0]=='?')
  {
   if(s[i+1]=='P')
   {
    s.replace(0,1,s2);
   }
   else
   {
    s.replace(0,1,s1);
   }
   
  }
  if (s[i] == '?')
  {
   if (s[i - 1] == 'P')
   {
    s.replace(i, 1, s2);
   }
   else
   {
    s.replace(i, 1, s2);
   }
  }
 }
 cout << s;
 return 0;
}