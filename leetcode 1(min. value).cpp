#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int num,sum,x;
		char c;
		cin>>num>>x>>c;
		vector<int> vec;
		
		while(num>0)
		{
			int temp=num%2;
		
			vec.push_back(temp);
			num=num/2;
		}		
	
		reverse(vec.begin(),vec.end());
		if(c=='L')
		{
			std:: rotate(vec.begin(),vec.begin()+x,vec.end());
		}
		if(c=='R'){
			std::rotate(vec.begin(), vec.begin()+vec.size()-x, vec.end());
		}
   	for(int i=0;i<16;i++)
    {
    	sum=vec[i]*pow(i,2);
    }
    cout<<sum<<endl;
	}
	return 0;
}
