#include <iostream>
using namespace std;
#define size 20
int arr[size];
int rear = -1, front = -1;

void enqueue(int data)
{
 if (rear == size - 1)
 {
  cout << "Queue is full..." << endl;
 }
 else if (front == -1 && rear == -1)
 {
  front = rear = 0;
  arr[rear] = data;
 }

 else
 {
  rear++;
  arr[rear] = data;
 }
}
void dequeue()
{
 if (front == -1 && rear == -1)
 {
  cout << "Queue is empty..." << endl;
 }
 else if (front == rear)
 {
  front = rear = -1;
 }
 else
 {
  cout << "Value removed" << endl;
  front++;
 }
}
void display()
{

 if (front == -1 && rear == -1)
 {
  cout << "Queue is empty..." << endl;
 }
 else
 {

  for (int i = front; i <= rear; i++)
  {
   cout << arr[i] << endl;
  }
 }
}
int main()
{
 enqueue(10);
 enqueue(20);
 enqueue(30);
 enqueue(40);
 enqueue(50);
 display();
 dequeue();
 display();
 return 0;
}