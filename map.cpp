#include <bits/stdc++.h>
using namespace std;
int main()
{
 unordered_map<int, int> m;
 cout<<"Enter number of elements:";
 int n;
 cin >> n;
 int arr[n];
 cout<<"\nENter the elements:";
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 for (int i = 0; i < n; i++)
 {
  m[arr[i]]++;
 }
 cout<<"\nRepeated elements are:\n";
 for (auto i = m.begin(); i != m.end(); i++)
 {
  if (i->second > 1)
  {
   cout << i->first << " ";
  }
 }
 return 0;
}
