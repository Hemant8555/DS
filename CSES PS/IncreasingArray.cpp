#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll n, count = 0;
 cin >> n;
 ll arr[n];
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 for (int i = 0; i < n; i++)
 {
  if (arr[i + 1] < arr[i])
  {
   count += arr[i] - arr[i + 1];
   arr[i + 1] = arr[i];
  }
 }
 cout << count << "\n";
 return 0;
}