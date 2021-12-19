//FIND MAXIMUM CANDLES ON CAKE THAT CAN BE BLOWN//
#include<iostream>
using namespace std;
int main()
{
	int num,max=0,count=0,temp=0;
	
	cin>>num;
	int height[num];
	
	for(int i=0;i<num;i++)
	{
		cin>>height[i];
	}
	for(int i=0;i<num;i++)
	{
		if(height[0]<height[i+1])
		{
			temp=height[0];
			height[0]=height[i+1];
			height[i+1]=temp;
		}
	}
	for(int i=0;i<num;i++)
	{
		if(height[0]==height[i])
		{
			count++;
		}
	}
	cout<<count;
	
	return 0;
}

