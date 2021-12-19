#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  bool flag;
  int sub = 0, n, m, count = 0;
  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; i++)
  {
   count++;
   if (arr[i] != arr[i + 1])
   {
    sub = arr[i] + 1;
    if (sub == m)
    {
     flag = true;
     break;
    }
   }
  }
  if (flag)
   cout << count+1 << "\n";
  else
   cout << -1 << "\n";
 }
 return 0;
}