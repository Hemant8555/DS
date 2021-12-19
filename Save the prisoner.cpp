#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{	long p,s,sd;
	int seat,pos;
	int tc;
	cin>>tc;	
	for(int i=0;i<tc;i++)
	{	cin>>p>>s>>seat;
		sd=(seat+s-1)%p;
		if(sd==0)
		{
			cout<<p<<endl;
		}
		else{
			cout<<sd<<endl;
		}
	}
	return 0;

}
