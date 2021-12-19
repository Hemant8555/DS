#include<iostream>
using namespace std;
struct node 
{
 int data;
 node *left;
 node *right;
};
struct node *create(int item)
{
 node *new_node=new node();
 new_node->data=item;
 new_node->left=new_node->right=NULL;
 return new_node; 
}
struct node *insert(node *root,int item)
{
 if(root==NULL)
 {
  root=create(item);
 }
 else if(item>root->data)
 {
  root->right=insert(root->right,item);
 }
 else if(item<root->data)
 {
  root->left=insert(root->left,item);
 }
 else
 {
  cout<<"Duplicate elements not allowed...\n";
 }
 return root;
 
}
void inorder(node *root)
{
 if(root!=NULL)
 {
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
 }
}
int main()
{
 struct node *root=NULL;
 int n,x;
 cout<<"ENter the total number you want to insert:\n";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"Enter data:";
  cin>>x;
  root=insert(root,x);
 }
 inorder(root);

}