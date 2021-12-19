#include <bits/stdc++.h>
using namespace std;
int main()
{
 bool item = false,item2=false;
 long long n, h, pos = 0;
 cin >> n >> h;
 long long arr[n];
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 while (1)
 {
  long long x;
  cin >> x;
  if (x == 0)
   break;
  else if (x == 1)
  {
   if (pos == 0)
   {
    continue;
   }
   else
   {
    pos = pos - 1;
   }
  }
  else if (x == 2)
  {
   if (pos == n - 1)
   {
    continue;
   }
   else
   {
    pos = pos + 1;
   }
  }
  else if (x == 3)
  {
   if (arr[pos] == 0 || item == true)
   {
    continue;
   }
   else
   {
    item = true;
    arr[pos]--;
   }
  }
  else if (x == 4)
  {
   if (arr[pos] == h || item == false)
   {
    continue;
   }
   else
   {
    item=true;
    arr[pos]++;
   }
  }
 }

 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
 return 0;
}