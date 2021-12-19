#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int n,r;
 cin>>n>>r;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 cout<<*min_element(arr,arr+n)-r<<endl;
 return 0;
}