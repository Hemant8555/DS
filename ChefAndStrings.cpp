#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  long long n, res = 0;
  cin >> n;
  long long arr[n];
  for (long long i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
  for (long long i = 0; i < n-1; i++)
  {
   if (arr[i] < arr[i + 1])
   {
    long long x= (arr[i + 1] - arr[i] - 1);
    res+=x;
   }
   else if(arr[i]>arr[i+1])
   {
    long long x= (arr[i] - arr[i + 1] - 1);
    res+=x;
   }
   else
   {
    continue;
   }
  }
  cout << res << "\n";
 }
 return 0;
}