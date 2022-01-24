#include<iostream>
using namespace std;

template<typename T>
class Stack;

template<typename T>
class Node{
    T data;
    

    public:
        Node<T>* next; 
        Node(T d){
            data=d;
            next=NULL;
        }
        T getData(){
            return data;
        }
    //friend class Stack;
};

template<typename T>
class Stack{
    Node<T> *head;

    public:
    Stack(){
        head=NULL;
    }

    Node<T>* begin(){
        return head;
    }

    void push(T data){
        Node<T> *n=new Node<T>(data);
        // if(head==NULL){
        //     head=n;
        // }
        n->next=head;
        head=n;
    }

    T top(){
        return head->getData();
    }

    bool isEmpty(){
        return head==NULL;
    }

    void pop(){
        if(head!=NULL){
            Node<T>* temp=head;
            head=head->next;
            //temp->next=NULL;
            delete temp;
        }
    }

    void print(Node<T>* head){
        
        Node<T>* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->getData();
            temp=temp->next;
        }
        
    }
};