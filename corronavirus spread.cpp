#include <iostream>
using namespace std;
int main()
{
 int tc, n, inf, mincount = 1;
 cin >> tc;
 while (tc--)
 {
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
   inf = arr[i];
   for (int j = i + 1; j < n; j++)
   {
    if (arr[j] - arr[i] <= 2)
    {
     mincount++;
     i++;
    }

    else
    {
     break;
    }
   }
   int tempmin = mincount;
   
  }
 }
}