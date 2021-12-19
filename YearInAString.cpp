#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  string s2 = "";

  for (int i = 0; i < s.length(); i++)
  {
    if (isdigit(s[i]))
    {
      s2.push_back(s[i]);
    }
    if (s[i] == '-')
    {
      s2.clear();
    }
    if (s2.length() == 4)
    {
      cout << s2;
      s2.clear();
    }
  }
  return 0;
}