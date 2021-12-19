#include <iostream>
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
 int x;

 struct node *new_node = (struct node *)malloc(sizeof(struct node));

 cout << "Enter -1 if you don't want to create node..." << endl;
 cin >> x;
 new_node->data = x;
 if (x == -1)
 {
  return 0;
 }
 else
 {
  cout << "Enter the left child of " << x << endl;
  new_node->left = create();
  cout << "Enter the right child of " << x << endl;
  new_node->right = create();
  return new_node;
 }
}
void pre_order(struct node *root)
{
 if (root != NULL)
 {
  cout << root->data << " ";
  pre_order(root->left);
  pre_order(root->right);
 }
}
void post_order(struct node *root)
{
 if (root != NULL)
 {
  post_order(root->left);
  post_order(root->right);
  cout << root->data << " ";
 }
}
void in_order(struct node *root)
{
 if (root != NULL)
 {
  in_order(root->left);
  cout << root->data << " ";
  in_order(root->right);
 }
}
void level_order(struct node *root)
{
 if (root != NULL)
 {
  cout << root->data << " ";
  level_order(root->left);
  level_order(root->right);
 }
}
void printGivenLevel(node *root, int level)
{
 if (root == NULL)
  return;
 if (level == 1)
  cout << root->data << " ";
 else if (level > 1)
 {
  printGivenLevel(root->left, level - 1);
  printGivenLevel(root->right, level - 1);
 }
}
int max_depth(node *root)
{

 if (root == NULL)
 {
  return 0;
 }
 else
 {
  int ldepth = max_depth(root->left);
  int rdepth = max_depth(root->right);
  return 1 + max(max_depth(root->left), max_depth(root->right));
 }
}
void printLevelOrder(node *root)
{
 int h = max_depth(root);
 int i;
 for (i = 1; i <= h; i++)
  printGivenLevel(root, i);
}

/* Print nodes at a given level */



int main()
{
 struct node *root;
 cout << "Enter the data:" << endl;
 root = create();

 cout << "Pre_order:";
 pre_order(root);
 cout << "In_order:";
 in_order(root);
 cout << "Post_order:";
 post_order(root);
 cout << "Level Order:";
 level_order(root);
 cout << "Depth of a tree:" << max_depth(root)<<endl;
 printLevelOrder(root);
 return 0;
}
