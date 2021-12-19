#include<iostream>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(int i=0;i<n;i++)
 {
  int consis=1;
  if(arr[i]==1)
  {
   cout<<arr[i]<<" "<<consis;
  }
 }
}