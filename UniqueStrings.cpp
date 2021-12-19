#include <bits/stdc++.h>
using namespace std;
int main()
{
 int countf = 0, countg = 0;
 string s;
 cin >> s;
 bool flagf = false, flagg = false, flagc = false;
 for (int i = 0; i < s.length(); i++)
 {
  if (s[i] == 'c' || s[i] == 'k')
  {
   flagc = true;
   break;
  }
  if (s[i] == 'g' && s[i + 1] == 'g')
  {
   flagg = true;
   countg++;
   i += 2;
  }
  else if (s[i] == 'f' && s[i + 1] == 'f')
  {
   flagf = true;
   countf++;
   i += 2;
  }
 }
 if (flagc)
  cout << 0 << "\n";
 else
 {
  if (countf + countg == 0)
   cout << 1 << "\n";
  else if (flagf == true && flagg == true)
   cout << pow(countf + countg, 2) << "\n";
  else if (flagf)
   cout << (countf * 2) + 1 << "\n";
  else if (flagg)
   cout << (countg * 2) + 1 << "\n";
 }
 return 0;
}