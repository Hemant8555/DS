#include<iostream>
using namespace std;
int main()
{
	int t,z=1;
	cin>>t;
	while(z<=t)
	{
		int num,sum=0,rcount=0,ccount=0;
		cin>>num;
		int arr[num][num];
		for(int i=0;i<num;i++)
		{
			for(int j=0;j<num;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<num;i++)
		{
			for(int j=0;j<num;j++)
			{
				if(i==j)
				sum+=arr[i][j];
			
			}
		}
	for(int i=0;i<num;i++)
		{	
			for(int j=0; j<num ;j++)
			{
				for(int y=i+1;y<num;y++)
				{
					if(arr[i][j]==arr[i][y])
					{
					rcount++;
					break;
					}
			}
			}
		}
		for(int i=0;i<num;i++)
		{	for(int j=0;j<num;j++)
			{
			if(arr[i][i]==arr[j+1][i])
			{
					ccount++;
					break;
			}
			}
		}
		
		
	cout<<"Case #"<<z<<" "<<sum<<" "<<rcount<<" "<<ccount<<endl;
	z++;
	rcount=0;
	ccount=0;
	sum=0;
}
	return 0;
}
