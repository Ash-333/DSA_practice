#include<iostream>
#include<queue>
using namespace std;

//1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

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

Node* preorderbuildTree(){
    
    int c;
    cin>>c;

    if(c==-1){
        return NULL;
    }
    
    Node* n=new Node(c);
    n->left=preorderbuildTree();
    n->right=preorderbuildTree();
    return n;
}
Node* levelorderBuildTree(){
    int d;
    cin>>d;
    Node* root=new Node(d);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* current=q.front();
        q.pop();
        int a,b;
        cin>>a>>b;
        if(a!=-1){
            current->left=new Node(a);
            q.push(current->left);
        }
        if(b!=-1){
            current->right=new Node(b);
            q.push(current->right);
        }
    }
    return root;
}

void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

void levelorderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        if(temp==NULL){
           // 
           cout<<endl;
           q.pop();
           if(!q.empty()){
               q.push(NULL);
           }
        }
        else{
            q.pop();
            cout<<temp->data;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }return;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return 1+max(h1,h2);
}
class Height{
public:
    int height;
    int diameter;
};

// Height optDiameter(Node* root){
//     Height p;
//     if(root==NULL){
//         p.height=0;
//         p.diameter=0;
//     }
//     Height left=optDiameter(root->left);
//     Height right=optDiameter(root->right);

//     p.height=max(left.height,right.height)+1;
//     int d1=left.height+right.height;
//     int d2=left.diameter;
//     int d3=right.diameter;

//     p.diameter=max(d1,max(d2,d3));
//     return p;
// }

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int h=height(root->left) + height(root->right);
    int d1=diameter(root->left);
    int d2=diameter(root->right);
    return max(h,max(d1,d2));
}

int heightForDiameter(Node* root, int& diameter){
    if(root==NULL){
        return 0;
    }
    int h1=heightForDiameter(root->left,diameter);
    int h2=heightForDiameter(root->right,diameter);
    diameter=max(diameter,h1+h2);
    return 1+max(h1,h2);
}

int OnDiameter(Node* root){
    int diameter=0;
    heightForDiameter(root,diameter);
    return diameter;
}

Node* removeHalf(Node* root){
    if(root==NULL){
        return NULL;
    }

    root->left=removeHalf(root->left);
    root->right=removeHalf(root->right);

    if(root->left==NULL && root->right==NULL){
        return root;
    }

    if(root->left==NULL){
        Node* nLeft=root->right;
        free(root);
        return nLeft;
    }
    if(root->right==NULL){
        Node* nRight=root->left;
        free(root);
        return nRight;
    }

    return root;
}

vector<vector<int>> vv;

void help(Node* root,int tSum,vector<int> &v,int b){
    if(root==NULL){
        return;
    }

    if(root->left==NULL && root->right==NULL){
        if(tSum==b+root->data){
            v.push_back(root->data);
            vv.push_back(v);
            v.pop_back();
        }
    }
    else{
        if(root->left){
            v.push_back(root->data);
            help(root->left,tSum,v,b+root->data);
            v.pop_back();
        }
        if(root->right){
            v.push_back(root->data);
            help(root->right,tSum,v,b+root->data);
            v.pop_back();
        }
    }
}

vector<vector<int>> targetSum(Node* root, int tSum){
    vv.clear();
    vector<int> v;
    help(root,tSum,v,0);
    return vv;
}

int main(){
    Node* root=preorderbuildTree();
    //cout<<"Hello!";
    
    preorderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    levelorderTraversal(root);
    cout<<endl;
    cout<<height(root);
    cout<<endl;
    cout<<diameter(root);
    cout<<endl;
    cout<<OnDiameter(root);
    root=removeHalf(root);
    cout<<endl;
    inorderTraversal(root);
    //cout<<optDiameter(root).diameter<<endl;
}