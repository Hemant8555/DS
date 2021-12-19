#include<iostream>
using namespace std;
int main()
{
	int x,temp=0;
	cin>>x;
	int arr[x];
	
	for(int i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<x;i++)
	{
		if(arr[i]<38)
		{
			cout<<arr[i]<<endl;
		}
		else
		{
			temp=arr[i];
			while(temp%5!=0)
			{
				temp++;
				
			}
			if(temp-arr[i]<3){
				cout<<temp<<endl;
			}
			else{
				cout<<arr[i]<<endl;
			}
		
		}
	}
	return 0;

}
