#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
int main()
{
	int n,count=0;
	int counter=0;
	cin>>n;
	char arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
				
		if(arr[i]=='U')
		{
			counter++;
		}
		else
		{
			counter--;
		}
		if(counter==0 && arr[i]=='U')
		{
			count++;
		}
	
		
	}
		cout<<count;
	return 0;		

}
