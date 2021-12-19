#include<bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin>>tc;
 while(tc--)
 {
  int n,m,odd;
  cin>>n>>m;
  if(n%2!=0)
  {
   cout<<n%m<<"\n";
  }
  else
  {
   while(n!=1)
   {
    n/=2;
    if(n%2==0)
    {
     odd=n;
     break;
    }
    else
    {
     odd=1;
    }
   }
  }
  
 }
}