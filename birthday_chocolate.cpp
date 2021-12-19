
#include<iostream>
using namespace std;
int main()
{
    int segments,sum=0,day,month,count=0;
    cin>>segments;
    int arr[segments];
    for(int i=0;i<segments;i++)
    {
        cin>>arr[i];
    }
    cin>>day>>month;
    for(int i=0;i<segments;i++)
    {	sum=arr[i];
        for(int j=i+1;j<month;j++)
        {
            sum+=arr[j];
        }
        if(sum==day)
        {
            count++;
        }
    month++;
    }
    cout<<count;
    return 0;
}
