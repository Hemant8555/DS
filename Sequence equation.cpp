#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int num,temp;
	cin>>num;
	int arr[num+1];
	
	vector<int> vec;
	vec.reserve(num);
	
	for(int i=1;i<=num;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num;j++)
		{
			if(i==arr[j])
			{
				for(int z=1;z<=num;z++)
				{
					if(j==arr[z])
					{
						vec.push_back(z);
					}
				}
			}
		}
	}
	for(auto i=vec.begin();i!=vec.end();i++)
	{
		cout<<*i<<endl;
	}
	return 0;
}
