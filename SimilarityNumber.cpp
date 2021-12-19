#include <iostream>
#include <string>
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
  int j = 0;
  while (j != s.length())
  {
   if(s[j]==s[0])
   {
   string x;
   x = s.substr(j, s.length());
   for (int i = 0; i < x.length(); i++)
   {
    if (x[i] == s[i])
    {
     count++;
    }
    else
    {
     break;
    }
   }
   }
   j++;
  }
  cout << count << "\n";
 }
 return 0;
}