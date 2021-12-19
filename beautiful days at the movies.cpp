#include<iostream>

#include<math.h>
using namespace std;
int main()
{
	int x,y,z,r,num,count;
	cin>>x>>y>>z;
	while(x<=y)
	{
		num=x;
		r=0;
		while(num!=0)
		{
			r=r*10;
			r+=num%10;
			num=num/10;
		}
		if(abs(x-r)%z==0)
		{
			count++;
		}
	x++;
	}
	cout<<count;
	return 0;
}
