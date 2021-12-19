#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int tc,num,count;
	cin>>tc;
	while(tc--)
	{
		cin>>num;
		char s[num];
		for(int i=0;i<num;i++)
		{
			cin>>s[i];
		}
		for(int i=0;i<num-1;i+2)
		{
			if(s[i]!=s[i+1])
			{
				count++;
			}
		}
	cout<<count<<endl;
	}
	return 0;
}
