#include<iostream>
using namespace std;
int main()
{
	int a[3],b[3],ans[2]={0,0};
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<3;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<3;i++)
	{
		if(a[i]>b[i])
		{
			ans[0]++;
		}
		else if(b[i]>a[i])
		{
			ans[1]++;
		}
		else{
		
		}
		
	}
	for(int i=0;i<2;i++)
	{
		cout<<ans[i]<<" ";
	}
}
