#include <bits/stdc++.h>
using namespace std;
long long algo(long long n, long long arr[])
{

 long long max_so_far = arr[0];
 long long curr_max = arr[0];

 for (long long i = 1; i < n; i++)
 {
  curr_max = max(arr[i], curr_max + arr[i]);
  max_so_far = max(max_so_far, curr_max);
 }
 return max_so_far;
}
int main()
{
 long long n;
 // cout << "Enter the number of elements:";
 cin >> n;
 long long arr[n];
 // cout << "ENter the elements:";
 for (long long i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 cout << algo(n, arr);
 return 0;
}