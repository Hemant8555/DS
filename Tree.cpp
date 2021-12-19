#include <bits/stdc++.h>
using namespace std;
struct node
{
 int data;
 node *left;
 node *right;
};
struct node *root = NULL;
struct node *create()
{
 int n;
 struct node *new_node = new node();
 cin >> n;
 new_node->data = n;
 if (n == -1)
 {
  return 0;
 }
 cout << "Enter the left child of " << n << "\n";
 new_node->left = create();
 cout << "Enter the right child of " << n << "\n";
 new_node->right = create();
 return new_node;
}
int sum(node *root)
{
 if (root == NULL)
 {
  return 0;
 }
 return (root->data + sum(root->left) + sum(root->right));
}
void preorder(struct node *root)
{
 if (root != NULL)
 {
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
 }
}
int sumofnode(node *root, int &sum, int x)
{
 if (root == NULL)
 {
  return 0;
 }
 if ((root->left && root->left->data == x) || (root->right && root->right->data == x))
 {
  sum += root->data;
 }
 sumofnode(root->left, sum, x);
 sumofnode(root->right, sum, x);
}
int height(node *root)
{
 if (root == NULL)
 {
  return 0;
 }
 int left_height = height(root->left);
 int right_height = height(root->right);

 return max(left_height, right_height) + 1;
}
void printgivenlevel(node *root, int level)
{
 if (root == NULL)
 {
  return;
 }
 if (level == 1)
 {
  cout << root->data << " ";
 }
 else if (level > 1)
 {
  printgivenlevel(root->left, level - 1);
  printgivenlevel(root->right, level - 1);
 }
}
void printlevelorder(node *root)
{
 int h = height(root);
 for (int i = h; i >= 1; i--)
 {
  printgivenlevel(root, i);
 }
}

int sumofparentofx(node *root, int x)
{
 int sum = 0;
 sumofnode(root, sum, x);
 return sum;
}
void mirror(node *new_node)
{
 if (new_node == NULL)
 {
  return;
 }
 struct node *temp;
 mirror(new_node->left);
 mirror(new_node->right);

 temp = new_node->left;
 new_node->left = new_node->right;
 new_node->right = temp;
}
bool search(node *root, int x)
{
 if (root == NULL)
 {
  return false;
 }
 if (root->data == x)
 {
  return true;
 }
 bool lfind = search(root->left, x);
 if (lfind)
  return true;
 bool rfind = search(root->right, x);
 return rfind;
}
int smallestElement(struct node *temp)
{
 //Check whether tree is empty
 if (root == NULL)
 {
  printf("Tree is empty\n");
  return 0;
 }
 else
 {
  int leftMin, rightMin;
  int min = temp->data;
  if (temp->left != NULL)
  {
   leftMin = smallestElement(temp->left);
   min = (min > leftMin) ? leftMin : min;
  }
  if (temp->right != NULL)
  {
   rightMin = smallestElement(temp->right);
   min = (min > rightMin) ? rightMin : min;
  }
  return min;
 }
}
bool checkbalance(node *root)
{
 if (root == NULL)
 {
  return true;
 }

 int lheight = (height(root->left));
 int rheight = (height(root->right));
 if (abs(lheight - rheight) <= 1 && checkbalance(root->left) && checkbalance(root->right))
 {
  return true;
 }

 return false;
}

int main()
{
 int x;
 cout << "ENter the data:\n";
 root = create();
 // PREORDER TRAVERSAL OF TREE
 // cout << "Pre Order traversal of tree is:\n";
 // preorder(root);
 // SUM OF TREE
 // cout << "\nSum: " << sum(root);
 // SUM OF PARENT NODE WITH GIVEN CHILD
 // cout << "\nEnter the value of child node:\n";
 // cin >> x;
 // cout << "\nSum of parent node with child " << x<<"=" << sumofparentofx(root, x);
 // HEIGHT OF A TREE
 // cout<<"\nHeight of tree:"<<height(root);
 // LEVEL ORDER TRAVERSAL
 // cout << "\nLevel Order traversal:";
 // printlevelorder(root);
 // PRINT MIRROR OF THE TREE
 // cout<<"\nMirror of tree:";
 // mirror(root);
 // preorder(root);
 // SEARCHING OF ANY ELEMENT IN THE TREE
 // cout << "\nENter the element to search:";
 // cin >> x;
 // if (search(root, x))
 //  cout << "YES\n";
 // else
 //  cout << "N0\n";
 // MINIMUM ELEMENT OF A TREE
 // cout<<"Minimum element of the tree:"<<smallestElement(root);
 // CHECK IF A BINARY TREE IS BALANCED OR NOT
 if (checkbalance(root))
  cout << "Tree is balanced\n";
 else
  cout << "Tree is not balanced\n";

 return 0;
}