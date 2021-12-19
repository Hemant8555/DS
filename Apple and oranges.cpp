#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int s,t,a,b,m,n,k,acount=0,ocount=0,i=1;
	cin>>s>>t>>a>>b>>m>>n;
	while(i)
	{
		while(m--)
		{
		cin>>k;
		if(a+k>=s && a+k<=t)
		{
			acount++;
		}
		}
	while(n--)
	{	cin>>k;
		if(b+k<=t && b+k>=s)
		{
			ocount++;
		}
	}
	break;
}
cout<<acount<<endl;
cout<<ocount;
return 0;
	
}
