#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	
	int arr[x];
	
	for(int i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<x;i++)
	{
		if(arr[0]<arr[i+1])
		{
			arr[0]=arr[i+1];
		}
	}
cout<<arr[0];
return 0;
}
