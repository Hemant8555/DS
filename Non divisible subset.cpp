#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main()
{
	int num,k;
	cin>>num>>k;
	long arr[num];

	vector<int> vec;
	vec.reserve(num);
	
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if((arr[i]+arr[j])%k!=0)
			{
				vec.push_back(arr[i]);
				vec.push_back(arr[j]);
			}
		}
	}
	std::unordered_set<int> s(vec.begin(), vec.end());
	vec.assign(s.begin(), s.end());
	for(auto it=vec.begin(),it!=vec.end(),it++)
	{
		for(auto i=it+1;i<vec.size();i++)
		{
			if((vec[it]+vec[i])%k==0)
			{
				
			}
		}
	}
	for (auto it = vec.cbegin(); it != vec.cend(); ++it)
		std::cout << *it << ' ';

	cout<<vec.size()<<endl;
	return 0;
}
