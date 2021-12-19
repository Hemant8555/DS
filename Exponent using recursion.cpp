#include<iostream>
using namespace std;
int expo(int x,int y)
{
 if(y==0)
 {
  return 1;
 }
 else
 {
  return expo(x,y-1)*x;
 }
 
}
int main()
{
 int x,y;
  cout<<"ENter the value of x & y:\n";
  cin>>x>>y;
  cout<<expo(x,y)<<"\n";
  return 0;
}