#include<iostream>
using namespace std;

int num,temp,snum,mid,arr[50],high,low;
void input()
{
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
}
void sort()
{
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Sorted Elements:";
	for(int i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}

int binary_search()
{
	if(high>=low)
	{
	int mid = low + (high - low) / 2;
	
	if (arr[mid] == num)
			return mid;

		if (arr[mid] > num)
		{
			low=low;
			high=mid-1;
			return binary_search();
		}
		low=mid+1;
		high=high;
		return binary_search();
	}
	return -1;
	
}

int main()
{
	cout<<"Enter the number of elements:";
	cin>>num;
	
	input();
	sort();
	
	cout<<endl<<"Enter the number to search:";
	cin>>snum;
	int result = binary_search(); 
    if (result == -1)
		cout<<"Not found";
	else
		cout<<"Element is found at index";
return 0;	
}
