#include<iostream>
using namespace std;
int main()
{
	long arr[5],temp,lsum=0,gsum=0;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			else if(arr[i]==arr[j])
			{
				i++;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		lsum+=arr[i];
	}
	for(int i=1;i<5;i++)
	{
		gsum+=arr[i];
	}
	cout<<lsum<<" "<<gsum;
	return 0;
}
