#include <iostream>
using namespace std;
int factorial(int n)
{
 int fac;
 if (n == 1)
 {
  return 1;
 }
 else
 {
  return fac = n * factorial(n - 1);
 }
}
int main()
{
 int n;
 cout << "Enter the number:" << endl;
 cin >> n;
 cout << factorial(n);
 return 0;
}