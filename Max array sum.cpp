#include <iostream>
#include<algorithm>
using namespace std;
int main()
{

 int num, sum = 0;
 cin >> num;
 int arr[num],arr2[num];
 for (int i = 0; i < num; i++)
 {
  cin >> arr[i];
 }
 for (int i = 0; i < num; i = i + 2)
 {
  for (int j = 0; j < num; j = j + 2)
  {
   sum = arr[j] + arr[j + 2];
  }
arr2[i]=sum;
 }
 cout<<*max_element(arr2,arr2+num);
  return 0;
}