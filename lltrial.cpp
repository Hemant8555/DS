//INSETION IN LINKED LIST//
#include <iostream>
using namespace std;
struct node
{
 int data;
 node *next;
};
struct node *head = NULL, *temp;

void insertatb(int new_data)
{
 node *new_node = (struct node *)malloc(sizeof(struct node));
 new_node->data = new_data;
 new_node->next = head;
 head = new_node;
}
void display()
{
 

  
  while (temp != NULL)
  {
   temp = temp->next;
  }
  while(temp!=head)
  {
    cout<<temp->data<<endl;
  }
 
}
int main()
{
 int x,num;
  cin>>x;
 for(int i=0;i<x;i++)
 {
   cin>>num;
   insertatb(num);
 }
 display();
 return 0;
}
