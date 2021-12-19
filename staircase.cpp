//STAIRCASE//
#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		for(int j=i;j<=x-1;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"#";
		}
	cout<<"\n";
	}
}
