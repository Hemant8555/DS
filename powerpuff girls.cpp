#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> vec;
	long num,x;
	cin>>num;
	long arr[num],arr2[num];
	vec.reserve(num);
	
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<num;i++)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<num;i++)
	{
		vec.push_back(arr2[i]/arr[i]);
	}
	cout<<*min_element(vec.begin(),vec.end());
	return 0;
}
