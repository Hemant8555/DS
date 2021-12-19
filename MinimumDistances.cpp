#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, count = 0, dis = 0, x = 0;
 vector<int> v;
 cin >> n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 for (int i = 0; i < n - 1; i++)
 {
  for (int j = i + 1; j < n; j++)
  {
   if (arr[i] == arr[j])
   {
    dis = abs(i - j);
    v.push_back(dis);
   }
  }
 }
 if (!v.empty())
  cout << *min_element(v.begin(), v.end()) << "\n";
 else
 {
  cout << -1 << "\n";
 }

 return 0;
}