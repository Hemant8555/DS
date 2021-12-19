#include<bits/stdc++.h>
#include<math.h>
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
   	for(auto i=vec.begin();i!=vec.end();i++)
    {	
    	int z=0;
    	sum=*i*pow(z,2);
    	z++;
    }
    cout<<sum<<endl;
	}
	return 0;
}
