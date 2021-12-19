#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, k, sum, count = 0;
 cin >> n;
 int arr[n],temp[n];
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 cin >> k;
 for (int i = 0; i < n; i++)
 {
  for(int j=0;j<n;j++)
  {
   if(arr[i]==temp[j])
   {
    break;
   }
  else
  {
   for (int j = i + 1; j < n; j++)
   {
    if (arr[i] + k == arr[j])
     count++;
    else
     continue;
   }
   temp[i]=arr[i];
  }
  }
 }
 cout << count;
 return 0;
}