#include<iostream>
using namespace std;
int main()
{
	int count=0,i=0;
    int num;
    cin>>num;
    int arr[num],quan[num],small[num],x,diff[num],smallest;
//INPUT DATA//
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<num;i++)
    {
        cin>>quan[i];
    }
//FIND SMALLEST NUMBER//
    for(int i=0;i<num;i++)
    {
    	small[i]=quan[i]/arr[i];
	}
	for(int i=0;i<num;i++){
		if(small[i]>small[i+1])
		{
			smallest=small[i+1];
		}
	}
//FIND NUMBER OF OCCURENCES//
    while(x<=smallest)
    {
        for(int j=0;j<num;j++)
        {
            diff[j]=quan[j]-arr[j];
            if(j=num-1)
            {
            	count++;
            	break;
			}
        }
    x++;
	}
	cout<<count<<endl;
return 0;
}

