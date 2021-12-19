#include <iostream>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  int flag = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.size()/2; i++)
  {
   if (s[i] != s[s.size() - i - 1])
   {
    flag = 1;
    break;
   }
  }
  if (flag == 0)
  {
   if (s.size() % 2 == 0)
   {
    cout << "YES"
         << " EVEN" << endl;
   }
   else
   {
    cout << "YES"
         << " ODD" << endl;
   }
  }
  else
  {
   cout << "NO" << endl;
  }
 }
 return 0;
}