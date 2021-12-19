#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);

         
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 set<int> s;
 int n;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  int x;
  cin >> x;
  s.insert(x);
 }
 cout << s.size() << "\n";
 return 0;
}