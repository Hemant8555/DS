#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  int *left,*right;
  int n,count = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  { 
   cin>>arr[i];
  }
  for(auto i=0;i<n;i++)
  {
   *left = arr[i];
   *right = arr[i];

   while(arr[i]==1)
   {
    *left++;
    *right--;
   }
  }
 }
 return 0;
}