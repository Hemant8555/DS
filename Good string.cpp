#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
 int count = 0,res=0;
 string s;
 cin >> s;
 for (int i = 0; i < s.size(); i++)
 {
  if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
  {
   count++;
  }
  else
  {
  res=max(res,count);
  count=0;
   
  }
  
 }
  cout << res << endl;
 return 0;
}