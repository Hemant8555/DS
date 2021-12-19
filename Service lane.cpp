#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int num,tc,x,y;
	cin>>num>>tc;
	vector<int> vec;
	vec.reserve(num);
	
	for(int i=0;i<num;i++)
	{
		cin>>vec[i];
	}
	while(tc--)
	{
		cin>>x>>y;
		int min=4;
		for(int i=x;i<=y;i++)
			if(min>vec[i])
			{
				min=vec[i];
			}
		cout<<min<<endl;
	}
	return 0;
}

