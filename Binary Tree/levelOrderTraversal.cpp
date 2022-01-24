#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node* preorderBuild(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n=new Node(d);
    n->left=preorderBuild();
    n->right=preorderBuild();
    return n;

}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    vector<int> v;
    q.push(root);
    while (!q.empty()){
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

vector<int> kthLevel(Node* root, int k){
    queue<Node*> q;
    vector<int> v;
    int level=1;
    int flag=0;
    int sum=0;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        while (size--){
            Node* temp=q.front();
            q.pop();
            if(level==k){
                flag=1;
                v.push_back(temp->data);
                sum=sum+temp->data;
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
    cout<<sum<<endl;
    return v;
}
int sum(Node* root,int k){
    queue<Node*> q;
    int sum=0;
    int level=1,flag=0;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        while(n--){
            Node* temp=q.front();
            if(level==k){
                sum+=temp->data;
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
        if(flag=1){
            break;
        }
    }
    return sum;
}

int main(){
    //root=NULL;
    Node* root=preorderBuild();

    levelOrderTraversal(root);
    cout<<endl;
    vector<int> v = kthLevel(root,2);
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;
    //cout<<sum(root,1);
}