#include <iostream>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int l, r;
  cin >> l >> r;
  int c = 0;
  for (int i = l; i < r; i++)
  {
   if (i == 2 || i == 8 || i == 14 || i == 20)
    c++;
   else
    c += 2;
  }
  if (r == 3 || r == 9 || r == 15 || r == 21)
   c++;
  cout << c << endl;
 }
 return 0;
}
