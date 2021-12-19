#include <bits/stdc++.h> 
#include<vector>
using namespace std;
int main()
{
	int tc,num,k,count=0,z;
	cin>>tc;
	vector<string> arr;
	while(tc--)
	{
		count=0;
		cin>>num>>k;
		while(num--)
		{
		cin>>z;
		if(z<=0)
		{
			count++;
		}
		}
		if(count>=k)
		{
			arr.push_back("NO");
		}
		else{
			arr.push_back("YES");
		}
	}	
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
