#include <iostream>
using namespace std;
int main()
{
 int tc,temp=0;
 cin >> tc;
 while (tc--)
 {
  int n, r;
  cin >> n >> r;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
  for (int i = 0; i < r; i++)
  {
   int j, last;
   last = arr[n - 1];

   for (j = n - 1; j > 0; j--)
   {
    arr[j] = arr[j - 1];
   }
   arr[0] = last;
  }

  for (int i = 0; i < n; i++)
  {
   cout << arr[i] << endl;
  }
 }
  return 0;
}
