#include<iostream>
using namespace std;
int main()
{
	long tc,b,w,bc,wc,z;
	long sum;
	cin>>tc;
	while(tc--)
	{
		cin>>b>>w>>bc>>wc>>z;
		if(bc>=wc+z)
		{
			sum=((w+b)*wc)+(b*z);
		}
		
		else if(wc>=bc+z)
		{
			sum=((w+b)*bc)+(w*z);
		}
		else{
			sum=(w*wc)+(b*bc);
		}
		cout<<sum<<endl;
	}
	return 0;
}
