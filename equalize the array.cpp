#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int num,count=1;
	cin>>num;
	int arr[num];
	vector<int> vec;
	vec.reserve(num);
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+num);
	for(int i=0;i<num;i++)
	{
		count=1;
		for(int j=i+1;j<num;j++)
		{
		if(arr[i]==arr[j])
		{
			count++;
		}}
			vec.push_back(count);
		
	}
	cout<<num-*max_element(vec.begin(),vec.end());
	return 0;
}
