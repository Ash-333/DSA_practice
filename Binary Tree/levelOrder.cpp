#include<bits/stdc++.h>
using namesapce std;

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

Node* preOrderBuild(Node* root){

    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n=new Node(d);
    preOrderBuild(root->left);
    preOrderBuild(root->right);
    return n;
}

void inorderTrav(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        if(temp!=NULL){q.pop();
        cout<<temp->data;}

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

int main(){
    Node* root=NULL;
    
}