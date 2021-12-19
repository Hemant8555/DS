#include<iostream>
#include<vector>
#include<math.h>
#include<list>
#include<algorithm>

using namespace std;
int main()
{
	int b,bike,k,a,c;
	cin>>b>>bike>>k;
	
	vector<int> x,y,x2,y2;
	vector<int> dis;
	dis.reserve(bike);

	vector<int> vec;
	vec.reserve(bike);
//input bikers coordinates	
	for(int i=0;i<b;i++)
	{
		cin>>a>>c;
		x.push_back(a);
		y.push_back(c);
		
	}
//input bike coordinates
	for(int i=0;i<bike;i++)
	{
		cin>>a>>b;
		x2.push_back(a);
		y2.push_back(c);
	}
//comapre each bike with each biker
	for(auto i=0;i<b;i++)
	{ 	
		for(auto j=0;j<bike;j++)
		{
			//find dis 
			
			dis[j]=sqrt(pow((x2[j]-x[i]),2)+pow((y2[j]-y[i]),2));
			temp=dis[0];
			if(dis[j]<temp)
			{
				
			}
		}
		//sort the distacnes and push minimum into vector
		sort(dis.begin(),dis.end());
		vec.push_back(dis[0]);
		x2.erase(x2.begin());
		y2.erase(y2.begin());
		x.erase(x.begin());
		y.erase(y.begin());

	
	}
	sort(vec.begin(),vec.end());
	cout<<pow(vec[k-1],2)<<endl;	
	return 0;
}

