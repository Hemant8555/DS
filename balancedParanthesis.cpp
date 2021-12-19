#include <iostream>
#include <stack>
using namespace std;
int main()
{
 stack<char> s;
 string str;
 cin >> str;
 for (int i = 0; i < str.length(); i++)
 {
  if (str[i] == '{' || str[i] == '(' || str[i] == '[')
  {
   s.push(str[i]);
 
  }
  else
  {
   if(s.empty())
   {
    cout<<"No it is not balanced...";
   }
   if (str[i] == '}')
   {
    if (s.top() == '{')
    {
     s.pop();
    }
    else
    {
     // cout << "NO";
     break;
    }
   }
   else if (str[i] == ')')
   {
    if (s.top() == '(')
    {
     s.pop();
    }
    else
    {
     // cout << "NO";
     break;
    }
   }
   else if (str[i] == ']')
   {
    if (s.top() == '[')
    {
     s.pop();
    }
    else
    {
     // cout << "NO";
     break;
    }
   }
  }
 }
 if (s.empty())
 {
  cout << "Yes it is balanced...";
 }
 else
 {
  cout<<"No it is not balanced...";
 }
 return 0;
}