#include <bits/stdc++.h>
using namespace std;
#define hell 1000000007
#define N 100005

void count(
    vector<int> &vec, int &check_1,
    int &check_2, int &check_3,
    stack<int> &o,
    stack<int> &t,
    stack<int> &z)
{
 for (unsigned int i = 0; i < vec.size(); i++)
 {

  if (vec[i] % 3 == 0)
  {
   check_1++;
   z.push(vec[i]);
  }
  else if (vec[i] % 3 == 1)
  {
   check_2++;
   o.push(vec[i]);
  }
  else
  {
   check_3++;
   t.push(vec[i]);
  }
 }
 return;
}
void vec_check(
    vector<int> &vec,
    int &check_1, int &check_2, int &check_3,
    stack<int> &o,
    stack<int> &t,
    stack<int> &z)
{
 if ((check_1 == 0 && check_2 != 0 && check_3 != 0) or check_1 > check_2 + check_3 + 1)
 {
  cout << "No"
       << "\n";
  return;
 }

 if (check_1 == 0)
 {
  for (unsigned int i = 0; i < vec.size(); i++)
  {
   cout << "Yes"
        << "\n ";
  }
  return;
 }
 int i, j, ans[N];
 memset(ans, -1, sizeof(ans));

 for (i = 1, j = 0; j < check_2; i += 2, j++)
 {
  ans[i] = o.top();
  o.pop();
 }

 ans[i - 1] = z.top();
 z.pop();
 check_1--;

 for (j = 0; j < check_3; j++, i += 2)
 {
  ans[i] = t.top();
  t.pop();
 }

 for (int k = 0; check_1 > 0; k += 2)
 {
  if (ans[k] == -1)
  {
   ans[k] = z.top();
   check_1--;
  }
 }
 bool flag;
 for (int i = 0; i < N; i++)
 {
  if (ans[i] != -1)
   flag = true;
 }
 if (flag)
  cout << "Yes"
       << "\n";
}

void solve(int n,
           vector<int> &vec)
{

 stack<int> o, z, t;

 int check_1 = 0, check_2 = 0, check_3 = 0;
 count(vec, check_1, check_2, check_3,
       o, t, z);

 vec_check(
     vec, check_1, check_2, check_3,
     o, t, z);
}

// Driver Code
signed main()
{
 int tc, n;
 cin >> tc;
 while (tc--)
 {
  vector<int> vec;
  int x;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
   cin >> x;
   vec.push_back(x);
  }
  solve(n, vec);
 }
 return 0;
}
