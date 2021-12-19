#include <iostream>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  int count, g, i, q;
  long long n;
  cin >> g;
  while (g--)
  {
   cin >> i >> n >> q;
   if(n%2==0)
   {
    if (i == 1 && q == 1 || i==2 &&q==2)
    {
     count = n / 2;
    }
    else 
    {
     count = (n / 2) + 1;
    }
   }
   if(n%2!=0)
   {
    if (i == 2 && q == 2 || i==1 && q==1)
    {
     count = n / 2;
    }
    else
    {
     count = (n / 2)+1;
    }
   }
   cout<<count<<endl;
  }
 }
 return 0;
}