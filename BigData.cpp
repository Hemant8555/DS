#include <bits/stdc++.h>
using namespace std;
int main()
{
 map<char, int> m;
 int tc;
 cin >> tc;
 while (tc--)
 {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
   int count = 1;
   while (s[i] == s[i + 1])
   {
    count++;
    i++;
   }
   m.insert(pair<char, int>(s[i], count));
  }
  int sumorg = 0;
  for (int i = 0; i < s.length(); i++)
  {
   if (isdigit(s[i]))
   {
    sumorg += 32;
   }
   else
   {
    sumorg += 8;
   }
  }
  int size = (m.size()) * 40;
  cout<<size<<endl;
  cout << sumorg - size << endl;
  for(auto i=m.begin();i!=m.end();i++)
  {
   cout<<i->first<<i->second;
  }
 }
 return 0;
}