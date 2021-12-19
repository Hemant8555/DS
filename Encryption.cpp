#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 getline(cin, s);

 double size = s.length();
 for (int i = 0; i < size; i++)
 {
  if (s[i] == ' ')
  {
   s.erase(s.begin() + i);
  }
 }
 size = s.length();
 size = sqrt(size);

 int rows = floor(size);
 int columns = ceil(size);
 if (rows * columns < pow(size, 2))
 {
  int y = max(rows, columns);
  rows = columns = y;
 }
 char grid[rows][columns];
 int z = 0;
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < columns; j++)
  {
   grid[i][j] = s[z];
   z++;
  }
 }
 for (int i = 0; i < columns; i++)
 {
  for (int j = 0; j < rows; j++)
  {
   if (grid[j][i] == NULL)
   {
    break;
   }
   else
   {
    cout << grid[j][i];
   }
  }
  cout << " ";
 }
 return 0;
}