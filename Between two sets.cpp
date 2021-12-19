#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int x,y,sum=0,sum2=0,count=0;
    cin>>x>>y;
    for(int i=x;i<y;i++)
    {
        while(x/10!=0)
        {
            int temp=x%10;
            int sum=sum+temp;
            x=x/10;
        }
        int sq=pow(i,2);
        while(sq/10!=0)
        {
            int temp2=x%10;
            int sum2=sum2+temp2;
            sq=sq/10;
        }
        if( sum == sum2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}