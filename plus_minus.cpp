#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	float pcount=0,ncount=0,zcount=0;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int num;
		cin>>num;
		if(num==0)
		{
			zcount++;
		}
		else if(num>0)
		{
			pcount++;
		}
		else{
			ncount++;
		}
	}

	
	cout<<fixed<<setprecision(6)<<(pcount/x)<<endl;
	cout<<fixed<<setprecision(6)<<(ncount/x)<<endl;
	cout<<fixed<<setprecision(6)<<(zcount/x)<<endl;
	return 0;
}
