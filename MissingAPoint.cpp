#include <bits/stdc++.h>
using namespace std;
int main()
{
 long long tc;
 cin >> tc;
 while (tc--)
 {
  bool up, down;
  long long n, x, y, diff;
  vector<pair<long long, long long>> vec;
  cin >> n;
  long long total_coord = (4 * n) - 1;
  for (long long i = 0; i < total_coord; i++)
  {
   cin >> x >> y;
   vec.push_back(make_pair(x, y));
  }
  sort(vec.begin(), vec.end());
  for (auto i = vec.begin(), j = vec.begin() + 1; i != vec.end(); i++, j++)
  {
   if (i->first == j->first && i->second<j->second)
   {
    diff = abs(j->second - i->second);
    up=true;
    i++;
    j++;
    continue;
   }
   else
   {
    cout << i->first << " " << i->second + diff << "\n";
    break;
   }
  }
 }
 return 0;
}