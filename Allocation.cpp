#include <iostream>

using namespace std;

int main()
{
	int num,x=0,sum=0;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>x;
		if(i%2==0)
		{
			sum+=x;
		}

	}
	cout<<sum;
	return 0;
}