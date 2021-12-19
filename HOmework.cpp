#include<iostream>
using namespace std;
int main()
{
	int num,x,sum=0;
	cin>>num>>x;
	int arr[x];
	for(int i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<x;i++)
	{
		sum+=arr[i];
	}
	if(sum>num)
	{
		cout<<"-1"<<endl;
	}
	else{
		cout<<num-sum<<endl;
	}
	return 0;
}
