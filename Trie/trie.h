#include<bits/stdc++.h>
using namespace std;

class Tier;
class Node{
    char data;
    unordered_map<char,Node*> m;
    bool isTermainal;

    public:
        Node(char d){
            data=d;
            isTermainal=false;
        }
        friend class Tier;
};

class Tier{
    Node* root;

public:
    Tier(){
        root=new Node('\0');
    }

    void insert(string s){
        Node* temp=root;
        for(char ch:s){
            if(temp->m.count(ch)==0){
                Node* n=new Node(ch);
                temp->m[ch]=n;
            }
            temp=temp->m[ch];
        }
        temp->isTermainal=true;
    }

    bool search(string word){
        Node* temp=root;
        for(char ch:word){
            if(temp->m.count(ch)==0){
                return false;
            }
            temp=temp->m[ch];
        }
        return temp->isTermainal;
    }
};