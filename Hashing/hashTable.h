#include<iostream>
#include<string>
using namespace std;

template <typename T>
class Node{
public:    
    string key;
    T value;
    Node* next;

    Node(string key,T value){
        this->key=key;
        this->value=value;
        next=NULL;
    }
    
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }

};

template <typename T>
class HashTable{
    Node<T> ** table;
    int cs;
    int ts;

    void rehash(){
        Node<T>** oldTable=table;
        int oldTs=ts;
        cs=0;
        ts=2*ts+1;
        table=new Node<T>*[ts];
        for(int i=0;i<ts;i++){
            table[i]=NULL;
        }
        for(int i=0;i<oldTs;i++){
            Node<T>* temp=oldTable[i];
            while(temp!=NULL){
                string key=temp->key;
                T value=temp->value;
                insert(key,value);
                temp=temp->next;
            }
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
        }
        delete [] oldTable;
    }

    public:
    int hashFun(string key){
        int indx=0;
        int power=1;
        for(auto ch:key){
            indx=(indx+ch*power)%ts;
            power=(power*29)%ts;
        }
        return indx;
    }

    public:
        HashTable(int default_size=7){
            cs=0;
            ts=default_size;
            table=new Node<T>*[ts];
            for(int i=0;i<ts;i++){
                table[i]=NULL;
            }
        } 

        void insert(string key,T value){
            int index=hashFun(key);
            Node<T>* n=new Node<T>(key,value);
            n->next=table[index];
            table[index]=n;
            cs++;
            //cout<<"insert finished";
            float load_factor=cs/float(ts);
            if(load_factor>0.7){
                rehash();
            }
        }

        void print(){
            for(int i=0;i<ts;i++){
                cout<<"Bucket "<<i<<"->";
                Node<T>* temp=table[i];
                while(temp!=NULL){
                    cout<<temp->key<<"->";
                    temp=temp->next;
                }
                cout<<endl;
            }
        }

        T* search(string key){
            int indx=hashFun(key);
            Node<T>* temp=table[indx];
            while(temp!=NULL){
                if(temp->key==key){
                    return &temp->value;
                }
                temp=temp->next;
            }

            return NULL;
        }

        T& operator[](string key){
                T* valueFound=search(key);
                if(valueFound==NULL){
                    T object;
                    insert(key,object);
                    valueFound=search(key);
                }
                return *valueFound;
        }
};