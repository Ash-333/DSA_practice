#include<iostream>
#include<vector>
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

Node* build(Node* root,int a){
    
    if(root==NULL){
       return new Node(a);
    }

    if(a<root->data){
        root->left=build(root->left,a);
    }
    else{
        root->right=build(root->right,a);
    }
    return root;
}

void preOrder(Node* root){
    if(root==NULL)
        return;
    
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
}

bool isThere(Node* root,int key){
    if(root->data==key){
        return true;
    }

    if(key<root->data){
        return isThere(root->left,key);
    }
    else{
        return isThere(root->right,key);
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

Node* remove(Node* root,int key){
    if(root==NULL){
        return root;
    }
    else if(key<root->data){
        remove(root->left,key);
    }
    else if(key > root->data){
        remove(root->right,key);
    }
    else{
        if(root->left==NULL && root->right){
            return NULL;
        }

        else if(root->left==NULL){
            Node* temp=root;
            root=root->right;
            delete temp;
            //return temp;
        }
        else if(root->right==NULL){
            Node* temp=root;
            root=root->left;
            delete temp;
            //return temp;
        }
        else{
            Node* temp=findMin(root->right);
            root->data=temp->data;
            root->right=remove(root->right,temp->data);
        }
    }
    return root;
}

void printRange(Node* root,int k1,int k2){
    if(root==NULL){
        return;
    }
    if(root->data>=k1 && root->data<=k2){
        printRange(root->left,k1,k2);
        cout<<root->data<<" ";
        printRange(root->right,k1,k2);
    }
    else if(root->data > k2){
        printRange(root->left,k1,k2);
    }
    else{
        printRange(root->right,k1,k2);
    }
}

void printLeafPath(Node* root,vector<int> &v){
    if(root==NULL){
        return;
    }

    if(root->left==NULL && root->right==NULL){
        for(int x:v){
            cout<<x<<"->";
        }
        cout<<root->data;
        cout<<endl;
        return;
    }
    v.push_back(root->data);
    printLeafPath(root->left,v);
    printLeafPath(root->right,v);
    v.pop_back();
    return;
}

int main(){
    int a[]={8,3,10,1,6,14,4,7,13};
    Node* root=NULL;
    vector<int> v;
    for(int x:a){
        root=build(root,x);
    }
    // preOrder(root);
    // cout<<endl;
    // cout<<isThere(root,4);
    // cout<<endl;
    //root=remove(root,6);
    //preOrder(root);
    //printRange(root,10,15);
    printLeafPath(root,v);

}