#include <iostream>
using namespace std;
int main()
{

 string j, s;
 cin >> j >> s;
 int arr[j.size()];
 for (int i = 0; i < j.size(); i++)
 {
  int count = 0;
  for (int k = 0; k < s.size(); k++)
  {
   if (j[i] == s[k])
   {
    count++;
   }
  }
  arr[i] = count;
 }
 int sum = 0;
 for (int i = 0; i < j.size(); i++)
 {

  sum += arr[i];
 }
 cout << sum << endl;
 return 0;
}