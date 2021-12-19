#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string ch;
	int arr[26],temp;
	vector<int> size;
	vector<int> alpha;
	size.reserve(10);
	for(int i=97;i<=122;i++)
	{
		cin>>arr[i];
	}
	cin>>ch;
	for(int i=0;i<ch.size();i++)
	{
		size.push_back(int(arr[i]));
	}
	for(int i=0;i<ch.size();i++)
	{
		temp=size[i];
		for(int j=97;j<=122;j++)
		{
			if(temp==j)
			{
				alpha.push_back(arr[j]);
			}
		}
	}
	sort(alpha.begin(),alpha.end(),greater<int>());
	int sum=alpha[0]*ch.size();
	cout<<sum;
	return 0;
}
