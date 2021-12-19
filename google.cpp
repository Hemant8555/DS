#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t,z=1;
	int ans[4];
	cin>>t;
	while(z<=t)
	{	start:
		int num,sum=0,rcount=0,ccount=0,flag=0;
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
				for(int y=j+1;y<num;y++)
				{
					if(arr[i][j]==arr[i][y])
					{
					rcount++;
					flag=1;
					break;
					}
				}
				if(flag==1)
				{
					break;
				}
			}
		}
		for(int i=0;i<num;i++)
		{
			for(int j=0; j<num ;j++)
			{
				for(int y=j+1;y<num;y++)
				{
					if(arr[j][i]==arr[y][i])
					{
					ccount++;
					flag=1;
					break;
					}
				}
				if(flag==1)
				{
					break;
				}
			}
		}
	z++;

	rcount=0;
	ccount=0;
	sum=0;
}
	return 0;
}


