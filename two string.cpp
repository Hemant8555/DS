#include<iostream>
using namespace std;
int main()
{
	int num;
	string s1;
	cin>>num;
	while(num--)
	{	int count=0;
		cin>>s1;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]==s1[i+1])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
