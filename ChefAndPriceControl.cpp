#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  int n, k, sum = 0, sum2 = 0;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
   sum += arr[i];
  }
  for (int i = 0; i < n; i++)
  {
   if (arr[i] > k)
    arr[i] = k;
   sum2 += arr[i];
  }
  cout << sum - sum2 << "\n";
 }
 return 0;
}