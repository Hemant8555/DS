#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 while(n--)
 {
  string str;
  cin>>str;
  stack<char> s;
  for(int i=0;i<str.length();i++)
  {
   if(str[i]=='<')
    s.push(str[i]);
   else
    if(s.empty())
    {
     cout<<i+1<<"\n";
     break;
    }
    else if(!s.empty())
    {
    s.pop();
    }
  }
  if(s.empty())
  {
   cout<<i+1<<"\n";
  }
  } 
 }
}