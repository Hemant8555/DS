#include <iostream>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  int n, count = 0;
  cin >> n;
  int arr[n][n];
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < n; j++)
   {
    cin >> arr[i][j];
   }
  }
  for (int i = 0; i < n; i++)
  {
   for (int l = 0; l < n; l++)
   {
    for (int j = 0; j < n; j++)
    {
     for (int k = 0; k < n; k++)
     {
      if (i <= j && l <= k)
      {
       if (arr[i][l] > arr[j][k])
       {
        count++;
       }
      }
     }
    }
   }
  }
  cout << count << endl;
 }
 return 0;
}