#include <bits/stdc++.h>
using namespace std;
 
class Node{
  public:
    int data;
    Node *left;
    Node *right;
   
  public:
    Node(int x){
      data = x;
      left = NULL;
      right = NULL;
    }
 
};
 
Node *insert_BST(Node *tree, int val)
{
  if(tree == NULL){
    cout<<val <<" is inserted into BST successfully"<<endl;
    return (new Node(val));
  }
  if(tree->data >= val)
    tree->left = insert_BST(tree->left, val);
  else
    tree->right = insert_BST(tree->right, val);
 
  return tree;
}
 
int search_BST(Node *tree, int val)
{
  if(tree == NULL){
    cout<<val<<" is not present in the tree\n";  
    return 0;
  }
 
  string ret_val;
  if(tree->data == val)
    cout<<val<<" is present in the tree\n";  
  else if(tree->data > val)
    search_BST(tree->left, val);
  else
     search_BST(tree->right, val);
 
  return 0;
 
}
 
 
Node* delete_BST(Node *tree, int val)
{
  if(tree == NULL){
    cout<<"value is not present in BST"<<endl;
    return tree;
  }
 
  if(tree->data > val)
    tree->left = delete_BST(tree->left, val);
  else if(tree->data < val)
    tree->right = delete_BST(tree->right, val);
 
  else{
    //if left child of the node is empty
    if(tree->left == NULL){
      Node *temp = tree->right;
      free(tree);
      tree= temp;
    }
    //if right child of the node is empty
    else if(tree->right == NULL){
      Node *temp = tree->left;
      tree = temp;
      free(temp);
    }
    //if both left and right child exists for the node
    else{
      Node *temp = tree->left;
      while(temp->right->right!=NULL){   // traverse until you don't reach, the second last right node of the left child of node to be deleted 
        temp = temp->right;
      }
      tree->data = temp->right->data;       // update the value to be deleted with the value of the rightmost node 
      Node *temp2 = temp->right->left;      // pointer to the left child of the last right node
      free(temp->right);                    // delete the last node
      temp->right = temp2;                  // assign the left child of last right node to second last right node
    }
 
  }
  return tree;
}
 
void inorder(Node *tree) 
{ 
    if (tree != NULL) 
    { 
        inorder(tree->left); 
        cout<<tree->data<<" "; 
        inorder(tree->right); 
    }
}
 
int main(){
 
  Node *tree;
   
  tree = new Node(10);
 
  tree->left = new Node(5);
  tree->left->left = new Node(2);
  tree->left->right = new Node(8);
  tree->left->left->left = new Node(1);
  tree->left->left->right = new Node(4);
  tree->left->right->left = new Node(7);
 
  tree->right = new Node(17);
  tree->right->left = new Node(16);
  tree->right->right = new Node(18);
 
 
  insert_BST(tree, 9);
  cout<<"inorder traversal of the current tree is: ";
  inorder(tree);
  cout<<endl;
 
  search_BST(tree,9);
 
  tree = delete_BST(tree,5);
  cout<<"deleted 5 successfully \n";
  search_BST(tree,5);
  cout<<"inorder traversal of the current tree is: ";
  inorder(tree);
  cout<<endl;
 
  return 0;
}