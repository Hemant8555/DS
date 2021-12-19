#include<iostream>
using namespace std;
int sum(int arr[],int num)
{
 if(num<=0)
 {
  return 0;
 }
 
  return sum(arr,num-1)+arr[num-1];
 
 
}
int main()
{
 int num;
 cout<<"ENter the size of array:\n";
 cin>>num;
 int arr[num];
 for(int i=0;i<num;i++)
 {
  cin>>arr[i];
 }
 cout<<sum(arr,num)<<"\n";
 return 0;
}