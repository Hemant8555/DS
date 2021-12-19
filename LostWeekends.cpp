#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  int sum = 0;
  int arr[5], y=0;
  for (int i = 0; i < 5; i++)
  {
   cin >> arr[i];
  }
  cin >> y;
  for (int i = 0; i < 5; i++)
  {
   sum = sum + (arr[i] * y);
  }
  if (sum <= 120)
  {
   cout << "No\n";
  }
  else
  {
   cout << "Yes\n";
  }
 }
 return 0;
}