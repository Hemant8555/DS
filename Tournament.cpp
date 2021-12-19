#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 long long n,sum=0;
 cin>>n;
 long long arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(int i=0;i<n;i++)
 {
  for(int j=i+1;j<n;j++)
  {
   sum+=abs(arr[i]-arr[j]);
  }
 }
 cout<<sum<<"\n";
 return 0;
}