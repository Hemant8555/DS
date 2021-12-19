#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while (tc--)
 {
  float r, g;
  float res;
  cin >> r >> g;
 if(r==0 && g==0)
 {
  cout<<"0.000000"<<"\n";
 }
  res = r / (r + g);
  cout << res << fixed << setprecision(6) << "\n";
 }
 return 0;
}