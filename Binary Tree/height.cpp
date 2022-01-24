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

void levelOrderTravelsal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        if(temp!=NULL){
            q.pop();
            cout<<temp->data;
        }
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int h1=height(root->left);
    int h2=height(root->right);
    return 1+max(h1,h2);
}

vector<int> kthLevel(Node* root, int k){
    vector<int> v;
    queue<Node*> q;
    q.push(root);
    int flag=0;
    int level=0;
    while (!q.empty()){
        int n=q.size();
        while(n--){
            Node* temp=q.front();
            q.pop();

            if(level==k){
                v.push_back(temp->data);
                flag=1;
            }
            else{
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        level++;
        if(flag==1){
            break;
        }
    }
    return v;
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root=NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int sum(Node* root,int k){
    queue<Node*> q;
    q.push(root);
    int flag=0;
    int level=0;
    int sum=0;
    while(!q.empty()){
        int n=q.size();
        while(n--){
            Node* temp=q.front();
            q.pop();
            if(level==k){
                sum+=temp->data;
            }
            else{
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->left){
                    q.push(temp->right);
                }
            }
        }
        level++;
        if(flag==1){
            break;
        }
    }
    return sum;
}

int main(){
    Node* root=preOrderBuild();
    levelOrderTravelsal(root);
    cout<<endl;
    // cout<<height(root);
    // cout<<endl;
    // vector<int> v=kthLevel(root,1);
    // for(int x:v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<sum(root,1);
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
}