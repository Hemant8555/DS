#include <bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> v;
 string s;
 cin >> s;
 int count = 1;
 bool flag = false;
 for (int i = 0; i < s.length(); i++)
 {
  if (s[i] == s[i + 1])
  {
   while (s[i] == s[i + 1])
   {
    count++;
    i++;
   }
   if (count > 1)
    v.push_back(count);
   i = i - 1;
   count = 1;
   flag = true;
  }
 }
 if (flag)
  cout << *max_element(v.begin(), v.end());
 else
  cout << 1 << "\n";
 return 0;
}