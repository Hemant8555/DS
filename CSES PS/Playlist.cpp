#include <bits/stdc++.h>
using namespace std;
int main()
{
 set<int> s;
 int n,length=1,max_length=0;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 int i=0;
 while(i<n)
 {
  if(s.find(arr[i])==s.end())
  {
   s.insert(arr[i]);
   length++;
   if(max_length>length)
   {
    max_length=length;
   }
  }
  else
  {
   
  }
  
 }

 return 0;
}