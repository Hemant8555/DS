#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	int num,k,z=0;
	cin>>num>>k;
	vector<int> vec;
	vec.reserve(num);
	vector<int> vec2;
	vec2.reserve(num);
	vector<int>::iterator it,it2;

	for(int i=0;i<num;i++)
	{
		cin>>z;
		vec.push_back(z);
	}
	for(it=vec.begin();it!=vec.end();it++)
	{
		for(it2=it+1;it2!=vec.end();it2++)
		{
			if((*it+*it2)%k!=0)
			{
				vec2.push_back(*it);
				vec2.push_back(*it2);
			}
			
		}
	}
	sort(vec2.begin(),vec2.end()); 
	
	it = unique(vec2.begin(), vec2.end()); 
	vec2.resize(std::distance(vec2.begin(),it));

	cout<<vec2.size();
	return 0;
	
}
