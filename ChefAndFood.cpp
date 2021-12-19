#include<bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin>>tc;
 while(tc--)
 {
  int y=0,x=0;
  int num,n,p,v;
  cin>>num;
  for(int i=0;i<num;i++)
  {
   cin>>n>>p>>v;
   x=(p/(n+1))*v;
   if(x>y)
   {
    y=x;
   }
  }
  cout<<y<<"\n";
 }
 return 0;
}