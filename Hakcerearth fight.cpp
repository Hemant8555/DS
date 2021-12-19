#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int num, flag = 0;
 cin >> num;
 int arr[num];

 for (int i = 0; i < num; i++)
 {
  cin >> arr[i];
 }

 sort(arr, arr + num);

 int x = arr[0];

 if (x == 0)
 {
  for (int i = 0; i < num; i++)
  {
   if (arr[i] == 0)
   {
    flag = 1;
   }
   else
   {
    flag = 0;
    break;
   }
  }
 }
 else
 {

   x = arr[0];
  for (int i = 0; i < num; i++)
  {
   arr[i] = arr[i] - x;
 
  }

  for (int i = 0; i < num; i++)
  {
   if (arr[i] == 0)
   {
    flag = 1;
   }
   else
   {
    flag = 0;
    break;
   }
  }
 }
  if (flag == 1)
  {
   cout << "YES" << endl;
  }
  else
  {
   cout << "NO" << endl;
  }
 
 return 0;
}