#include<iostream>
using namespace std;

class List;
class Node{
    int data;   

    public:
        Node* next;
        Node(int d):data(d),next(NULL){}

        int getData(){
            return data;
        }

        ~Node(){
            if(next!=NULL){
                delete next;
            }
        }
        friend class List;
};

class List{
    Node* head;
    Node* tail;

    //recursive function for searching key in linkedlist
    int searchHelper(Node* head, int key){

        if(head==NULL){
            return -1;
        }

        if(head->data==key){
            return 0;
        }

        int indx=searchHelper(head->next,key);

        if(indx==-1){
            return -1;
        }
        return indx+1;

    }

    public:
        List():head(NULL),tail(NULL){};

       Node* begin(){
        return head;
    }

    //insert a node at beginning of node
    void push_front(int d){
        Node* n=new Node(d);
        if(head==NULL){
            head=tail=n;
            return;
        }
        else{
            n->next=head;
            head=n;
        }
    }

    //insert a node at end of linkedlist
    void push_back(int data){
        Node* n=new Node(data);
        if(head==NULL){
            head=tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }

    //print all data of linkedlist
    void print(Node* head){
        Node* temp=head;

        while (temp!=NULL){
            cout<<temp->getData()<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }

    //insert at specific pos
    void insertAt(int data,int pos){
        Node* temp=head;
        Node* n=new Node(data);

        if(pos==0){
            push_front(data);
        }

        for(int i=1;i<pos;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
    }

    //search for data in linkedlist and return index if present 

    int search(Node* head,int key){

        Node* temp=head;
        int indx=0;
        if(head->data==key){
            return 0;
        }

        while(temp!=NULL){
            if(temp->data==key){
                 return indx;
            }
            temp=temp->next;
            indx++;
        }

        return -1;
    }

    //search for data is present ot not in linkedlist uisng recursion
    bool searchRecursive(Node* head,int key){
        if(head->next==NULL){
            return false;
        }

        if(head->data==key){
            return true;
        }
        else{
            return searchRecursive(head->next,key);
        }
    }

    void presentOrNot(Node* head,int d){
        if(searchRecursive(head,d)){
            cout<<"Present";
        }
        else{
            cout<<"Not Present";
        }
    }

    //Search recursively and return index
    int searchIndex(Node* head,int key){
        int ans=searchHelper(head,key);
        return ans;
    }

    //delete node from front of linkedlist
    Node* pop_front(){

        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

        return head;
    }

    //delete last node of Linkedlist
    Node* pop_back(){
        
        Node* temp=head;
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            delete head;
            return NULL;
        }

        while(temp->next->next!=NULL)
            temp=temp->next;

        delete(temp->next);
        temp->next=NULL;
        tail=temp;

        return head;
    }

    //delete node from specific position
    Node*  del_at(int pos){
        if(pos==0){
            pop_front();
        }
        Node* temp=head;
      for(int i=0;temp!=NULL && i<pos-1;i++){
          temp=temp->next;
      }
           if (temp == NULL || temp->next == NULL)
            return NULL;
 
        // Node temp->next is the node to be deleted
        // Store pointer to the next of node to be deleted
        Node* next = temp->next->next;
 
        // Unlink the node from linked list
        free(temp->next); // Free memory
 
        // Unlink the deleted node from list
        temp->next = next;
        return head;
    }

    Node* reverseList(Node* head){
        Node* c=head;
        Node* prev=NULL;
        while(c!=NULL){
            Node* temp=c->next;
            c->next=prev;
            prev=c;
            c=temp;
        }
        head=prev;
        return head;
    }

    void reverseForGroup(Node* start, Node* end){
        Node* prev=NULL;
        Node* current=start;
        Node* nxt=start->next;
        while(prev!=end){
            current->next=prev;
            prev=current;
            current=nxt;
            if(nxt!=NULL){
                nxt=nxt->next;
            }
        }
    }

    //last k element of linkedlist
    int kthLastElement(Node* head,int k){
        Node* fast=head;
        Node* slow=head;
        
        int count=0;
        while (count<k)
        {
            fast=fast->next;
            count++;
        }

        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
    }

    //Find middle element of linkedlist
    int mid(Node* head){
        Node* fast=head;
        Node* slow=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }

    //reverse k-group of likedlist
    Node* reverseKGroup(Node* head,int k){
        if(head==NULL || head->next==NULL || k==1){
            return head;
        }
        Node* s=head;
        Node* e=head;
        int inc=k-1;
        while(inc--){
            e=e->next;
            if(e->next==NULL){
                return head;
            }
        }
        Node* n=reverseKGroup(e->next,k);
        reverseForGroup(s,e);
        s->next=n;
        return e;
    }
};