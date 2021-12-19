#include <iostream>
using namespace std;

int main()
{
 long long t;
 cin >> t;
 while (t--)
 {
  long long m, c, h;
  cin >> m >> c >> h;
  if ((h - c) % 3 == 0)
  {
   if ((h - c) / 3 <= m)
    cout << "No" << endl;
   else
    cout << "Yes" << endl;
  }
  else
  {
   cout << "Yes" << endl;
  }
 }
 return 0;
}