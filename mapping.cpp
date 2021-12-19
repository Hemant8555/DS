#include <bits/stdc++.h>
using namespace std;
int main()
{
 map<int, string> student;
 map<int, string>::iterator i;
 student[58] = "Hemant";
 student.insert(pair<int,string>(90,"ABC"));
 student[90] = "AMan";
 student[146] = "Adhitya";
 student[142] = "Amit";
 student[140] = "Garvit";
 i = student.begin();
 while (i != student.end())
 {
  cout << i->second << "\n";
  i++;
 }
 return 0;
}