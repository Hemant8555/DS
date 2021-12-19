#include<iostream>
using namespace std;
int main()
{
 int num;
 int arr[num],arr2[num];
 int sum[num];
 cin>>num;
 for(int i=0;i<num;i++)
 {
  cin>>arr[i];
 }
 for(int i=0;i<num;i++)
 {
  cin>>arr2[i];
 }
 for(int i=0;i<num;i++)
 {
  sum[i]=arr[i]+arr2[i];
  cout<<sum[i]<<" ";
 }
 return 0;

}