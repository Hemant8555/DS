#include<bits/stdc++.h>
using namespace std;
int main()
{
 int size,op,c=2,temp1,temp2,temp3;
 cin>>size;
 int arr[size];
 for (int i=0;i<size;i++)
 {
  cin>>arr[i];
 }
 cin>>op>>c;
 for(int i=0;i<op;i++)
 {
  cin>>temp1>>c;
  if(temp1>c || temp1<c)
  {
   temp3 = arr[temp1];
   arr[temp1] = arr[c];
   arr[c] = temp3;
  }
  
 }
 for(int i=0;i<size;i++)
 {
  cout<<arr[i]<<endl;
 }
return 0;
}