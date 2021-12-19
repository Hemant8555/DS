#include <bits/stdc++.h>
#define FAST                       \
 ios_base::sync_with_stdio(false); \
 cin.tie(NULL);                    \
 cout.tie(NULL);
#define ll long long int
#define fab(i, a, b) for (i = a; i <= b; i++)
#define fabr(i, a, b) for (i = b; i >= a; i--)
#define f(i, n) for (i = 0; i < n; i++)
using namespace std;

int main()
{
 FAST;
 ll t, n, i, j, ans, c, h, d, sum;
 ans = 0;
 cin >> t;
 while (t--)
 {
  ans = 0;
  sum = 0;
  cin >> n;
  ll a[n];
  f(i, n)
  {
   cin >> a[i];
   a[i] = a[i] / 100000000;
  }
  ll m[10] = {0};
  f(i, n)
  {
   sum += a[i];
   m[sum % 10]++;
  }
  f(i, 10)
  {
   if (m[i] > 1)
    ans += (m[i] * (m[i] - 1)) / 2;
  }
  ans += m[0];
  cout << ans << endl;
 }
 return 0;
}