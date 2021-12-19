#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n)
{
  if(n==1)
  {
    return 1;
  }
  else
  {
    return n*factorial(n-1);
  }
  
}
int main()
{

  long long x, n;
  cin >> x >> n;
  if (n == 1 || n == 2 || n == 3 || n == 4)
  {
    long long res;
    res = pow(x%10, factorial(n)%10);
    cout << res % 10 << endl;
  }
  else
  {
    cout << "1" << endl;
  }

  return 0;
}