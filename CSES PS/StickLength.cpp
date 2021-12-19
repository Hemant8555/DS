#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 long long n, count = 0;
 cin >> n;
 long long arr[n];
 for (long long i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr + n);
 long long avg = arr[n / 2];
 for (long long i = 0; i < n; i++)
 {
  count += abs(avg - arr[i]);
 }
 cout << count << "\n";
 return 0;
}