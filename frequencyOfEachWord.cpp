#include <bits/stdc++.h>
using namespace std;

int main()
{
 map<int, int> a;
 int tc;
 cin >> tc;
 while (tc--)
 {
  string s;
  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
   cin >> s;
   if (s[0] == 'a')
   {
    a.insert(pair<int, int>(s[1], s[2]));
   }
   else if (s[0] == 'b')
   {
    for (auto i = a.begin(); i != a.end(); i++)
    {
     if (i->first == s[1])
     {
      cout << i->first << "\n";
     }
     else
     {
      cout << "-1"
           << "\n";
     }
    }
   }
   else
   {
    for (auto i = a.begin(); i != a.end(); i++)
    {
     cout << i->first << " " << i->second << " ";
    }
   }
  }
 }
 return 0;
}
