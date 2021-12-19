#include <iostream>
using namespace std;

int smallestDivisor(int n)
{
  // if divisible by 2
  if (n % 2 == 0)
    return 2;

  // iterate from 3 to sqrt(n)
  for (int i = 3; i * i <= n; i += 2)
  {
    if (n % i == 0)
      return i;
  }

  return n;
}

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int step = 0;
    int n, x = 0, k, j = 0, z;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    cin >> k;

    while (j < n - 1)
    {
      x = smallestDivisor(arr[j]);
      j += x;
      step++;
 
    }
    if (step == k)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
}
  return 0;
}