#include<iostream>

int num,arr[50],min,temp,i=0,j;
void input()
{
	std::cout<<"enter the elements:";
	for(int i=0;i<num;i++)
	{
		std::cin>>arr[i];
	}
}

void selection_sort()
{	
	for(int i=0;i<num;i++)
	{
		min=i;
		for(int j=i+1;j<num;j++)
		{
		if(arr[min]>arr[j])
		{
			min=j;
		}}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;	
	}
}
void print()
{
	std::cout<<"Sorted elements:"<<std::endl;
	for(int i=0;i<num;i++)
	{
		std::cout<<arr[i]<<" ";
	}
}
int main()
{
	std::cout<<"Enter the number of elements:";
	std::cin>>num;
	input();
	selection_sort();
	print();
}
