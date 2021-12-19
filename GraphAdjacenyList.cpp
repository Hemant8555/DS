#include <bits/stdc++.h>
using namespace std;

void print_graph(vector<int> vec[], int n);
void add_edge(vector<int> vec[]);
void delete_edge(vector<int> vec[]);
void bfs(int x, int n, vector<int> vec[]);
void dfs(int x, int n, vector<int> vec[]);
void detect_cycle(vector<int> vec[], int n);

int main()
{
 int n, v, ad, z, x;
 char yn;
 cout << "Enter the number of vertices:";
 cin >> n;
 vector<int> vec[n];
 for (int i = 0; i < n; i++)
 {
		cout << "Enter the vertex:\n";
		cin >> v;
		cout << "Enter the number of adjacent vertices:\n";
		cin >> ad;
		cout << "Enter the adjacent vertices:\n";
		for (int i = 0; i < ad; i++)
		{
			cin >> z;
			vec[v].push_back(z);
		}
 }
 cout << "Enter the vertex where you want to do DFS:";
 cin >> x;
 cout << "DFS traversal of graph is:";
 dfs(x, n, vec);
 detect_cycle(vec, n);
 // cout << "Enter the vertex where you want to do BFS:";
 // cin >> x;
 // print_graph(vec, n);
 // cout << "BFS traversal of graph is:";
 // bfs(x, n, vec);
 // cout << "Press Y/N to insert an edge:";
 // cin >> yn;
 // if (yn == 'Y')
 // {
 // 	add_edge(vec);
 // 	print_graph(vec, n);
 // }

 // cout << "Press Y/N to delete an edge:";
 // cin >> yn;
 // if (yn == 'Y')
 // {
 // 	delete_edge(vec);
 // 	print_graph(vec, n);
 // }
 return 0;
}

// void print_graph(vector<int> vec[], int n)
// {
//  for (int i = 0; i < n; i++)
//  {
// 		cout << "Adjacent vertices of " << i << " are \n";
// 		for (auto x : vec[i])
// 		{
// 			cout << "->" << x;
// 		}
// 		cout << "\n";
//  }
// }

// void add_edge(vector<int> vec[])
// {
//  int f, g;
//  cout << "Enter the vertex:";
//  cin >> f;
//  cout << "Enter the adjacent vertex:";
//  cin >> g;
//  vec[f].push_back(g);
//  vec[g].push_back(f);
//  cout << "Edge inserted...\n";
// }

// // void delete_edge(vector<int> vec[])
// {
//  int f, g;
//  cout << "Enter the edge:";
//  cin >> f;
//  cout << "ENter the adjacent vertex:";
//  cin >> g;
//  for (int i = 0; i < vec[f].size(); i++)
//  {
// 		if (vec[f][i] == g)
// 		{
// 			vec[f].erase(vec[f].begin() + i);
// 			cout << "Edge deleted...\n";
// 			break;
// 		}
//  }
//  for (int i = 0; i < vec[g].size(); i++)
//  {
// 		if (vec[g][i] == f)
// 		{
// 			vec[g].erase(vec[g].begin() + i);
// 			cout << "Edge deleted...\n";
// 			break;
// 		}
//  }
// }

// void bfs(int x, int n, vector<int> vec[])
// {
//  queue<int> q;
//  bool arr[n];

//  for (int i = 0; i < n; i++)
// 		arr[i] = false;

//  arr[x] = true;
//  q.push(x);
//  while (!q.empty())
//  {
// 		x = q.front();
// 		cout << x << " ";
// 		q.pop();
// 		for (auto i : vec[x])
// 		{
// 			if (!arr[i])
// 			{
// 				arr[i] = true;
// 				q.push(i);
// 			}
// 		}
//  }
// }

void dfs(int x, int n, vector<int> vec[])
{
 stack<int> s;
 bool arr[n];

 for (int i = 0; i < n; i++)
		arr[i] = false;
 s.push(x);
 while (!s.empty())
 {
		x = s.top();
		s.pop();
		if (!arr[x])
		{
			cout << x << " ";
			arr[x] = true;
		}
		for (auto i : vec[x])
		{
			if (!arr[i])
			{
				s.push(i);
			}
		}
 }
}
void detect_cycle(vector<int> vec[], int n)
{
 bool flag = false;
 stack<int> s;
 bool arr[n];
 for (int i = 0; i < n; i++)
		arr[i] = false;
 for (int i = 0; i < n; i++)
 {
		arr[i] = true;
		for (auto x : vec[i])
		{
			if (arr[i])
			{
				flag = true;
				break;
			}
		}
		if (flag)
			break;
 }
 if (flag)
		cout << "\nCycle detected...\n";
 else
 {
		cout << "\nNo cycle detected...\n";
 }
}
