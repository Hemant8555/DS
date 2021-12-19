#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    bool flag = true;
    int five_coin = 0, ten_coin = 0, fif_coin = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == 5)
      {
        five_coin++;
      }
      else if (arr[i] == 10)
      {
        if (five_coin > 0)
        {
          five_coin--;
        }
        else
        {
          flag = false;
          break;
        }

        ten_coin++;
      }
      else
      {
        if (ten_coin > 0)
        {
          ten_coin--;
        }
        else if(five_coin>1)
        {
          five_coin-=2;
        }
        else
        {
          flag=false;
          break;
        }
        
        fif_coin++;
      }
    }
    if (flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}