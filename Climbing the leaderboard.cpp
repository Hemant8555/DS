#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,al,k;
	cin>>n;
	vector<int> vec;
	vec.reserve(100);
	auto it=vec.begin();
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
vector<int>::iterator ip; 
    ip = std::unique(vec.begin(), vec.begin() +n); 
    vec.resize(std::distance(vec.begin(), ip)); 
    
	cin>>al;
		for(int i=0;i<al;i++)
	{
		cin>>k;
		vec.push_back(k);
		sort(vec.begin(),vec.end(),greater<int>());
		for(int i=0;i<n;i++)
		{
			if(vec[i]==k)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
