#include <iostream>
using namespace std;
int fibo(int n)
{

 if ((n == 1) || (n == 0))
 {
  return n;
 }
 else
 {
  return (fibo(n - 1) + fibo(n - 2));
 }
}
int main()
{
 int n, i = 0;
 cout << "ENter the number upto you want to print:" << endl;
 cin >> n;
 while (i < n)
 {
  cout << " " << fibo(i);
  i++;
 }
 return 0;
}
