#include <bits/stdc++.h>
using namespace std;
int knapsack(int n, int weight[], int value[], int w)
{
 if (n == 0 || w == 0)
 {
  return 0;
 }
 if (weight[n - 1] > w)
 {
  return knapsack(n - 1, weight, value, w);
 }
 else
 {
  return max(value[n - 1] + knapsack(n - 1, weight, value, w - weight[n - 1]), knapsack(n - 1, weight, value, w));
 }
}
int main()
{
 int n, w;
 cout << "Enter the number of objects:\n";
 cin >> n;
 int weight[n], value[n];
 cout << "Enter the weight of objects:\n";
 for (int i = 0; i < n; i++)
 {
  cin >> weight[i];
 }
 cout << "Enter the value of objects:\n";
 for (int i = 0; i < n; i++)
 {
  cin >> value[i];
 }
 cout << "Enter the weight of knapsack:\n";
 cin >> w;
 cout<<"Maximum Profit:"<<knapsack(n,weight,value,w);
 return 0;
}