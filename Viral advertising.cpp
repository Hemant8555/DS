#include<iostream>
using namespace std;
int main()
{
	int p=5,like=0,lsum=0,days;
	cin>>days;
	for(int i=0;i<days;i++)
	{
		like=p/2;
		lsum+=like;
		p=like*3;
	}
	cout<<lsum;
	return 0;
}
