#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t;
 cin >> t;
 while (t--)
 {
  int s, n;
  cin >> s >> n;
  int ans = 0;
  ans = (s / n);
  s = s % n;
  if (s == 1)
  {
   cout << ans + 1 << endl;
   continue;
  }
  else if (s == 0)
  {
   cout << ans << endl;
   continue;
  }
  else if (s % 2 == 0)
  {
   cout << ans + 1 << endl;
   continue;
  }
  cout << ans + 2 << endl;
 }
 return 0;
}