#include<iostream>
using namespace std;
int arr[10]={8,4,6,23,57,0,9,10,12,45};
	void bubble_sort()
	{
		int temp=0,j=0;
		for(int i=0;i<10;i++)
		{
			for(int j=1;j<9;j++)
			{
				if(arr[j]>arr[i])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
			
		}
	}
	void output()
	{	 
		for(int i=0;i<10;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
int main()
{	

	bubble_sort();
	output();
	return 0;
}
