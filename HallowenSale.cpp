#include <bits/stdc++.h>
using namespace std;
int main()
{
 int p, d, m, s, count = 0;
 cin >> p >> d >> m >> s;
 while (p >= m && s >= p)
 {
  s -= p;
  p = p - d;
  count++;
 }
 if (count != 0)
 {
  while (s >= m)
  {
   s -= m;
   count++;
  }
 }

 cout << count;
 return 0;
}