#include <bits/stdc++.h>
using namespace std;
int algo(int n, int arr[])
{
 int max_so_far = 0, max_ending_here = 0;
 for (int i = 0; i < n; i++)
 {
  max_ending_here += arr[i];
  if (max_ending_here < 0)
  {
   max_ending_here = 0;
  }
  else if (max_ending_here > max_so_far)
  {
   max_so_far = max_ending_here;
  }
 }
 return max_so_far;
}
int main()
{
 int n;
 cout << "Enter the number of elements:";
 cin >> n;
 int arr[n];
 cout << "ENter the elements:";
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 cout << algo(n, arr);
 return 0;
}