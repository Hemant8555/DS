#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,i;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n,greater<int>());

	if(arr[0]>=k)
	{
		cout<<arr[0]-k;
	}
	else{
		cout<<"0";
	}
	return 0;
}
