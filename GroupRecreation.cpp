#include <bits/stdc++.h>
using namespace std;
#define int long long
#define alpha_size 26

int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr), cout.tie(nullptr);

 int tc;
 cin >> tc;
 while (tc--)
 {
  int n, x;
  cin >> n >> x;
  char dir, lang;
  cin >> dir >> lang;
  int pos;
  char l;
  if (dir == 'L')
   pos = x;
  else
   pos = n - x + 1;
  if (pos & 1)
  {
   if (lang == 'H')
    l = 'H';
   else
    l = 'E';
  }
  else
  {
   if (lang == 'H')
    lang = 'E';
   else
    lang = 'H';
  }
  cout << pos << " " << lang << endl;
 }
}
