#include <bits/stdc++.h>
using namespace std;
int main()
{
 multiset<int,greater<int>> s;
 int n, m;
 cin >> n >> m;
 for (int i = 0; i < n; i++)
 {
  int x;
  cin >> x;
  s.insert(x);
 }
 for (int i = 0; i < m; i++)
 {
  int x;
  cin >> x;
  auto it = s.lower_bound(x);
  if (it == s.end())
  {
   cout << -1 << "\n";
  }
  else
  {
   cout << *it << "\n";
   s.erase(it);
  }
 }
 return 0;
}