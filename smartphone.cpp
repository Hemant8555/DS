#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 long long rev2, n;
 cin >> n;
 long long int arr[n];
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr + n);
 long long rev = arr[0];
 

 for (int i = 0; i < n; i++)
 {
  rev2 = arr[i] * (n - i);
  if (rev2 > rev)
  {
   rev = rev2;
  }
 }
 cout << rev;
 return 0;
}