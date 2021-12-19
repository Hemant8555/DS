#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int tc,temp,num,count=0,r=0;
	cin>>tc;
	while(tc--)
	{	count=0;
		cin>>num;
		temp=num;
		while(temp!=0)
		{
			r=temp%10;
			
			if(r!=0 && num%r==0)
			{
				count++;
			}
			temp=temp/10;
			
		}
		 cout<<count<<endl;
	}

	return 0;
}
