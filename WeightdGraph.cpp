#include <bits/stdc++.h>
using namespace std;
void print_graph(vector<pair<int, int>> vec[], int n)
{
 for (int i = 0; i < n; i++)
 {
  cout << "Node " << i << " makes and edge with\n";
  for (auto x = vec[i].begin(); x != vec[i].end(); x++)
  {
   cout << "Node " << x->first << " with weight=" << x->second << "\n";
  }
  cout << "\n";
 }
}
int main()
{
 int n, v, ad, z, w;
 char yn;
 cout << "Enter the number of vertices:";
 cin >> n;
 vector<pair<int, int>> vec[n];
 for (int i = 0; i < n; i++)
 {
  cout << "Enter the vertex:\n";
  cin >> v;
  cout << "Enter the number of adjacent vertices:\n";
  cin >> ad;
  cout << "Enter the adjacent vertices and weight of edge:\n";
  for (int i = 0; i < ad; i++)
  {
   cout << "Enter the adjacent vertex:";
   cin >> z;
   cout << "Enter the adjacent vertex weight:";
   cin >> w;
   vec[v].push_back(make_pair(z, w));
  }
 }
 print_graph(vec, n);
 return 0;
}