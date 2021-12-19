#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

void toLowerCase(char plain[], int ps)
{
 int i;
 for (i = 0; i < ps; i++)
 {
  if (plain[i] > 64 && plain[i] < 91)
   plain[i] += 32;
 }
}

int removeSpaces(char *plain, int ps)
{
 int i, count = 0;
 for (i = 0; i < ps; i++)
  if (plain[i] != ' ')
   plain[count++] = plain[i];
 plain[count] = '\0';
 return count;
}

void generateKeyTable(char key[], int ks, char keyT[5][5])
{
 int i, j, k, flag = 0, *dicty;

 dicty = (int *)calloc(26, sizeof(int));
 for (i = 0; i < ks; i++)
 {
  if (key[i] != 'j')
   dicty[key[i] - 97] = 2;
 }

 dicty['j' - 97] = 1;

 i = 0;
 j = 0;

 for (k = 0; k < ks; k++)
 {
  if (dicty[key[k] - 97] == 2)
  {
   dicty[key[k] - 97] -= 1;
   keyT[i][j] = key[k];
   j++;
   if (j == 5)
   {
    i++;
    j = 0;
   }
  }
 }

 for (k = 0; k < 26; k++)
 {
  if (dicty[k] == 0)
  {
   keyT[i][j] = (char)(k + 97);
   j++;
   if (j == 5)
   {
    i++;
    j = 0;
   }
  }
 }
}

void search(char keyT[5][5], char a, char b, int arr[])
{
 int i, j;

 if (a == 'j')
  a = 'i';
 else if (b == 'j')
  b = 'i';
