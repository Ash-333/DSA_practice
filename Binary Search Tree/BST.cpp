#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data=d;
        left=right=NULL;
    }
};

Node* insert(Node* root,int x){
    if(root==NULL){
        return new Node(x);
    }

    if(x < root->data){
        root->left=insert(root->left,x);
    }
    else{
        root->right=insert(root->right,x);
    }
    return root;
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
}

bool search(Node* root, int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(key<root->data){
       return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
    return false;
}

Node* findMin(Node* root){
    Node* current=root;
    while(current->left!=NULL){
        current=current->left;
    }
    return current;
}

Node* remove(Node* root, int key){
    if(root==NULL){
        return NULL;
    }

    else if(key < root->data){
        root->left=remove(root->left,key);
    }
    else if(key > root->data){
        root->right=remove(root->right,key);
    }
    else{
        //Has no child
        if(root->left==NULL && root->right==NULL){
            return NULL;
        }
        //has no left child
        else if(root->left==NULL){
            Node* temp=root;
            root=root->right;
            delete temp;
            //return root;
        }
        //has no right child
        else if(root->right==NULL){
            Node* temp=root;
            root=root->left;
            delete temp;
            //return root;
        }
        //2 chlidren
        else{
            Node* temp=findMin(root->right);
            //cout<<temp->data;
            root->data=temp->data;
            root->right=remove(root->right,temp->data);
        }
    }
    return root;
}

void printRange(Node* root int k1,int k2){
    if(root==NULL){
        return;
    }

    else if(root->data >= k1 && root->data <= k2){
        printRange(root->left,k1,k2);
        cout<<root->data;
        printRange(root->right,k1,k2);
    }
    else if(rot->data > k2){
        printRange(root->left,k1,k2);
    }
    else{
        printRange(root->right,k1,k2);
    }
}

int main(){
    Node* root=NULL;
    int a[]={8,3,10,1,6,14,4,7,13};
    for(int x:a){
        root=insert(root,x);
    }
    preOrder(root);
   //cout<< search(root,1);
   cout<<endl;
   int d;
   //cin>>d;
   root=remove(root,6);
   preOrder(root);
}