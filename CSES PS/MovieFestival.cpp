#include <bits/stdc++.h>
using namespace std;
int main()
{
 vector<pair<int, int>> v;

 int n, count = 0, curr = 0;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  int x, y;
  cin >> x >> y;
  v.push_back(make_pair(y, x));
 }
 sort(v.begin(), v.end());
 for (auto i : v)
 {
  if (i.second >= curr)
  {
   curr = i.first;
   count++;
  }
 }
 cout << count << endl;
 return 0;
}