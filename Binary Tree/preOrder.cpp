#include<bits/stdc++.h>
using namespace std;

//3 -1 -1 + 

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node* preOrderBuild(){
    int d;
    cin>>d;
    Node* n=new Node(d);
    if(d==-1){
        return NULL;
    }
    n->left=preOrderBuild();
    n->right=preOrderBuild();
    return n;
}

void preOrderTraverse(Node* root){
    stack<Node*> s;
    s.push(root);

    while(!s.empty()){
        Node* temp=s.top();
        
       // if(temp!=NULL){
            s.pop();
            cout<<temp->data<<" ";
       // }
        //else{
            if(temp->right!=NULL){
                s.push(temp->right);
            }
            if(temp->left!=NULL){
                s.push(temp->left);
            }
        //}
    }
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    Node* root=preOrderBuild();
    preOrderTraverse(root);
    cout<<endl;
    preOrder(root);
}