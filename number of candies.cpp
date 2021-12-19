#include <iostream>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  long long n, temp;

  int t;
  cin >> n >> t;
  for(int i=0;i<t;i++)
  {
   if (n % 2 == 0)
   {
    n -= n / 2;
    n -= n / 4;
   }
   else
   {
    n -= (n + 1) / 2;
    n -= n / 4;
   }
  }
  cout << n << endl;
 }
 return 0;
}