#include <iostream>
#include <math.h>
using namespace std;
int toint(string s, int n)
{
 if (n == 1)
 {
  return (s[0] - '0');
 }
 else
 {
  return (10 * toint(s, n - 1) + s[n - 1] - '0');
 }
}
int main()
{
 string s;
 cin >> s;
 int n = s.length();
 cout<<toint(s,n);
 return 0;
}