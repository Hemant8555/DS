#include <iostream>
using namespace std;
int main()
{
 int arr[10000] = {0};

 cout << "Enter the number of elements of array:\n";
 int num;
 cin >> num;
 cout<<"Enter the elements:\n";
 for (int i = 0; i < num; i++)
 {
  int x;
  cin >> x;
  int temp=0;
  if(x>temp)
  {
   temp=x;
  }
  
 }
 cout<<"Sorted array:\n";
 for (int i = 0; i < num; i++)
 {
  int count = arr[i];
  while (count--)
  {
   cout << i << "\n";
  }
 }
 return 0;
}