#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll n, sum = 0, x;
 cin >> n;
 for (int i = 0; i < n - 1; i++)
 {

  cin >> x;
  sum;
  sum += x;
 }
 ll res = (n * (n + 1)) / 2 - sum;
 cout << res << "\n";
 return 0;
}