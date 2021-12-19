#include <bits/stdc++.h>
using namespace std;
int main()
{
 // vector<int> v;
 int n;
 string s;
 cin >> n >> s;
 char c = s[0];
 int count = 0, min_count = 0, j;
 for (int i = 1; i < n; i++)
 {
  if (c == s[i])
  {
   j = i;
   while (c == s[i])
   {
    count++;
    i++;
   }
   min_count += count;
   // v.push_back(count);
   count = 0;
   j = i - 1;
   i = j;
  }
  else
  {
   c = s[i];
  }
 }
 // cout << *min_element(v.begin(), v.end());
 cout << min_count << "\n";
 return 0;
}