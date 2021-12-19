//sample Test case 1 on HACKERRANK NOT WORKING// 

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int x,flag=1,test_case=0;
	cin>>test_case;
	int a=0;
	
while(a<test_case)
{	cin>>x;
	char arr[x][x];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<x;i++)
	{
	sort(arr[i],arr[i]+x);
	}
//
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++){
		if(arr[j][i]>arr[j+1][i])
		{
			flag=-1;
			break;
		}
	}
}
//	
	if(flag==-1)
	{
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
	a++;
}
	return 0;
}
