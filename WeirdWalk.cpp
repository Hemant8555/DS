#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  long long d1=0, d2=0, wd=0;
  long long n;
  cin >> n;
  long long arr[n], arr2[n];
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
   cin >> arr2[i];
  }
  for (int i = 0; i < n; i++)
  {
   d1 += arr[i];
   d2 += arr2[i];
   if (d1 == d2 && arr[i]==arr2[i])
   {
    wd += arr[i];
   }
  }
  cout << wd << "\n";
 }
 return 0;
}