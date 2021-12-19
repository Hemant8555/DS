#include <iostream>
using namespace std;
#define num 20
int top = -1, arr[num];

void push(int data)
{
  if (top >= num - 1)
  {
    cout << "Stack is full..." << endl;
  }
  else
  {
    top++;
    arr[top] = data;
    cout << "Element inserted" << endl;
  }
}
void pop()
{
  if (top < 0)
  {
    cout << "Stack is empty..." << endl;
  }
  top--;
  cout << "Value popped.." << endl;
}
void display()
{
  if (top >= 0)
  {
    for (int i = top; i >= 0; i--)
    {
      cout << arr[i] << endl;
    }
  }
  else
  {
    cout << "Stack is empty" << endl;
  }
}
int main()
{
  push(20);
  push(30);
  push(40);
  push(50);
  push(60);
  display();
  pop();
  display();
  return 0;
}