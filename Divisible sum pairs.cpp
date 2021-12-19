#include<iostream>
using namespace std;
int main()
{
	int x,num,count=0;
	cin>>num>>x;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}	
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if((arr[i]+arr[j])%x==0)
			{
			count++;
			}
		}	
	}
	cout<<count;
	return 0;
}
