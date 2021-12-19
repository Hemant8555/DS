#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int num;
	unsigned long int sum=0,count;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+num,greater<int>());
	for(int i=0;i<num;i++)
	{
		count=pow(2,i)*arr[i];
		sum+=count;
	}
cout<<sum;
return 0;
}
