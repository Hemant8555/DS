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
    int new_data;
    cout<<"Enter the element: "<<endl;
    cin>>new_data;
    node *new_node= new node();
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}
void delete_item()
{
    int pos;
    struct node *start;
    if(start==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        cout<<"Enter the position of element: "<<endl;
        cin>>pos;

    }
    
}


int main()
{
    int x;
    cout<<"-----MENU DRIVEN PROGRAM FOR LINKED LIST-----"<<endl;
    cout<<"Press for following operations "<<endl;
    cout<<"1.INSERT/N2.DELETE/n3.DISPLAY/n4.SEARCH/n";
    cin>>x;
    
    switch (x)
    {
    case 1:
        insert();
        break;
    case 2:
        delete_item();
        break;
    default:
        break;
    }

}