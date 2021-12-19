#include<iostream>
using namespace std;
int main()
{
	int tc,x,h=1;
	cin>>tc;
	while(tc--)
	{	
		h=1;
		cin>>x;
		for(int i=1;i<=x;i++)
		{
			if(i%2!=0)
			{
				h=h*2;
			}
			else{
				h++;
			}
		}
	cout<<h<<endl;
	}
	return 0;
}
