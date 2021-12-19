#include<iostream>
using namespace std;

int num,start=0,end,mid,arr[50],temp;
void input()
{
	cout<<"Enter the elements:";
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
}

void merge_sort()
{
	end=num-1;;
	if(end>=start)
	{
	while(mid!=1)
	{
		mid=(start+end)/2;
		end=mid;
	}
	for(int start=0;start<end;start++)
	{
		if(arr[start]>arr[mid])
		{
			temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
		}
	}
}
	for(int i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	cout<<"Enter the number of elements:";
	cin>>num;
	input();
	merge_sort();
	return 0;
}
