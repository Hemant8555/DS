#include<bits/stdc++.h>
using namespace std;
int main()
{
 int tc,z=1;
 cin>>tc;
 while(z<=tc)
 {
  int count=0;
  long long l,r;
  cin>>l>>r;
  int y=max(l,r);
  for(int i=1;i<=y;i++)
  {
   if(i<=l || i<=r)
   {
    if (l == r)
    {
     l = l - i;
    }
    else if (l > r)
    {
     l -= i;
    }
    else
    {
     r -= i;
    }
    count++;
   }
   else
   {
    break;
   }
  }
  cout<<"Case #"<<z<<": "<<count<<" "<<l<<" "<<r<<endl;  
  z++;
 }
 return 0;
}