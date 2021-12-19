#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node *head=NULL;
void insert()
{
    cout<<"Enter the element: "<<endl;
    int new_data;
    cin>>new_data;
    node *new_node=new node();
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}
void display()
{
    while(head!=NULL)
    {
        cout<<head->data<<"-->";
        head=head->next;
    }
}
void delete_item()
{
    int x;
    cout<<"Which element do you want to delete: "<<endl;
    cin>>x;
    while(head!=NULL && head->data=x)
    {
        
    }
}
int main()
{
    int x;
    cout<<"Enter the number of elements: "<<endl;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        insert();
    }
        display();
    
return 0;
}