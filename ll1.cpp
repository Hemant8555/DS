//INSETION IN LINKED LIST//
#include <iostream>
using namespace std;
struct node
{
 int data;
 node *next;
};
struct node *head = NULL, *temp;

void check()
{
 if (head == NULL)
 {
  cout << "List is empty" << endl;
 }
}

void insertatb()
{
 int new_data;
 cout << "Enter the data:" << endl;
 cin >> new_data;
 node *new_node = (struct node *)malloc(sizeof(struct node));
 new_node->data = new_data;
 new_node->next = head;
 head = new_node;
}
void insertatl()
{
 int new_data;
 cout << "Enter the data:" << endl;
 cin >> new_data;
 node *new_node = (struct node *)malloc(sizeof(struct node));
 temp = head;
 while (temp->next != NULL)
 {
  temp = temp->next;
 }
 new_node->data = new_data;
 temp->next = new_node;
 new_node->next = NULL;
 cout << "Element inserted at last" << endl;
}
void insertatpos()
{
 int new_data;
 int pos, i = 1;
 cout << "Enter the position:" << endl;
 cin >> pos;
 cout << "Enter the data:" << endl;
 cin >> new_data;
 node *new_node = (struct node *)malloc(sizeof(struct node));
 temp = head;
 if (i > pos)
 {
  cout << "Invalid position..." << endl;
 }
 else
 {
  while (i < pos)
  {
   temp = temp->next;
   i++;
  }
  new_node->data = new_data;
  new_node->next = temp->next;
  temp->next = new_node;
  cout << "Element inserted" << endl;
 }
}

void display()
{
 if (head == NULL)
 {
  cout << "List is empty..." << endl;
 }
 else
 {

  temp = head;
  while (temp != NULL)
  {
   cout << temp->data << endl;
   temp = temp->next;
  }
 }
}
void deleteatbeg()
{

 if (head == NULL)
 {
  cout << "List is empty!!" << endl;
 }
 else
 {
  temp = head;
  head = head->next;
  free(temp);
 }
}

void deleteatpos()
{
 node *prevnode;
 int pos, i = 1;
 cout << "Enter the position:" << endl;
 cin >> pos;
 temp = head;
 if (i > pos)
 {
  cout << "Invalid position..." << endl;
 }
 else
 {
  while (i < pos)
  {
   prevnode = temp;
   temp = temp->next;
   i++;
  }
  prevnode->next = temp->next;
  free(temp);
 }
}
void deleteatlast()
{
 node *prevnode;
 check();
 temp = head;
 while (temp->next != NULL)
 {
  prevnode = temp;
  temp = temp->next;
 }
 prevnode->next = NULL;
 free(temp);
}
int main()
{
 while (1)
 {
  cout << "1.Insert at beginning\n2. Inser at last\n3.Insert at any position\n4.Dispaly\n5.Delete at beginning\n6.Delete at last\n7.Delete at position\n8.Exit" << endl;
  int x;
  cin >> x;
  switch (x)
  {
  case 1:
   insertatb();
   break;
  case 2:
   insertatl();
   break;
  case 3:
   insertatpos();
   break;
  case 4:
   display();
   break;
  case 5:
   deleteatbeg();
   break;
  case 6:
   deleteatlast();
   break;
  case 7:
   deleteatpos();
   break;
  case 8:
   exit(0);
  default:
   cout << "Wrong input. Enter correct input" << endl;
  }
 }
 return 0;
}