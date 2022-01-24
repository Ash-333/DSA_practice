#include<bits/stdc++.h>
using namespace std;

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

Node* preOrder(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    Node* n=new Node(d);
    n->left=preOrder();
    n->right=preOrder();
    return n;
}

int printPreOrder(Node* root){
    int n=0;
    if(root==NULL){
        return 1;
    }
    n+=root->data;
    //cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
    return n;
}

int levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    int sum=0;
    while (!q.empty()){
        Node* temp=q.front();
        //cout<<temp->data;
        if(temp->data!=-1)
            sum+=temp->data;
        q.pop();
        if(temp->left){
            q.push(temp->left);

        }
        if (temp->right){
            q.push(temp->right);
        }
        
    }
    return sum;
    
}

int main(){
    Node* root=preOrder();
    cout<<endl;
    cout<<levelOrder(root);

    //1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1


    //cout<<printPreOrder(root);
}