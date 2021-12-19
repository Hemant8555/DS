#include<iostream>
using namespace std;
void lps(string pattern)
{
 int length=0;
 int arr[pattern.length()];
 arr[0]=0;
 for(int i=1;i<pattern.length();i++)
 {
  if(pattern[i]==pattern[length])
  {
   length++;
   arr[i]=length;
  }
  else
  {
   if(length!=0)
   {
    length=arr[length-1];
    i--;
   }
   else
   {
    arr[i]=0;
   }
  }
 }
}

void KMPsearch(string s,string pattern)
{
 int i=0,j=0;
 while(i<s.length())
 {
  if(s[i]==pattern[j])
  {
   i++;
   j++;
  }
  if(j==pattern.size())
  {
   cout<<"Pattern found at: "<<i-j;
   j=arr[j-1];
  }
 }
}

int main()
{

}