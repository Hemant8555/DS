#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, l, r;
    cin >> a >> b >> l >> r;
    int ans1 = 0;
    ans1 = r / (a + b);
    ans1 = ans1 * 2;
    int x = r % (a + b);
    if (x >= a)
      ans1 += 1;
    int ans2 = 0;
    ans2 = l / (a + b);
    ans2 = ans2 * 2;
    int y = l % (a + b);
    if (y == 0 && l != 0)
      ans2 = ans2 - 1;
    if (y > a)
      ans2 += 1;

    cout << ans1 - ans2 << "\n";
  }
}