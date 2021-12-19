#include<iostream>
using namespace std;
int main()
{
	int x,y,k,sum=0,temp=0,z;
	cin>>x>>y;
	for(int i=0;i<x;i++)
	{
		cin>>k;
		sum+=k;
		if(i==y)
		{
			sum=sum-k;

		}
	}
	cin>>z;

	if(sum/2==z)
	{
		cout<<"Bon Appetit"<<endl;
	}
	else{
		cout<<z-(sum/2);
	}
	return 0;
	}
