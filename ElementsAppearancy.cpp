#include<bits/stdc++.h>
using namespace std;
int main()
{
 unordered_map<int,int> m;
 unordered_map<int,int> :: iterator i ;
 int n,x,y;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cin>>x;
  m.insert(pair<int,int>(x,m[x]++));
 }
 cout<<"Enter frequency:";
 cin>>y;
 for(i=m.begin();i!=m.end();i++)
 {
  if(i->second==y)
  {
   cout<<i->first<<" occured "<<y<<" times...";
   break;
  }
  else
  {
   cout<<"No elements found with given frequency...";
   break;
  }
  
 }
}