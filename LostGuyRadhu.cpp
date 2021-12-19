#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  int n, q;
  cin >> n >> q;
  int arr[n], arr2[q];
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }

  for (int i = 0; i < q; i++)
  {
   cin >> arr2[i];
  }
  for (int i = 0; i < q; i++)
  {
   cout << *max_element(arr, arr + arr2[i])<<"\n";
  }
 }
 return 0;
}