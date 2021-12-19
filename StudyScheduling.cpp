#include <bits/stdc++.h>
using namespace std;
int main()
{
 int h, m, h2, m2, k, sum1, sum2;
 cin >> h >> m >> h2 >> m2 >> k;
 if (h <= h2)
 {
  sum1 = (h * 60) + m;
  sum2 = (h2 * 60) + m2;
  cout << sum2 - sum1 - k;
 }
 else
 {
  sum1 = (h * 60) + m;
  sum2 = (h2 * 60) + m2;
  cout<<1440-(sum1+sum2-k);
 }
  
 return 0;
}