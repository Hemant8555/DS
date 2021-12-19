#include<iostream>
#include<vector>
using namespace std;
int main ()
{
	int num,count=1;
	cin>>num;
	vector<int> vec;
	vec.reserve(num);
	for(int i=0;i<num;i++)
	{
		cin>>vec[i];
	}
	for(int i=0;i<num;i++)
	{
		if(vec[i]!=vec[i+1] )
		{
		if(vec[i+1]>vec[i])
			{
				count+=2;
			}
		else
			count++;
		}
		
		else{
			count++;
		}
		vec.erase(vec.begin());
		
		
	}
	cout<<count;
	return 0;
	
}
