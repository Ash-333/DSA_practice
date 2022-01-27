#include<iostream>
#include "list.h"
using namespace std;

int main(){
    
    List l;
 
    l.push_front(0);
    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_back(5);
    l.insertAt(3,3);
    Node* head=l.begin();
    //l.print(head);
    //cout<<endl;
    // head=l.pop_front();
    // l.print(head);
    //cout<<endl;
    // head=l.pop_back();
    //Node* head=l.del_at(3);
   // Node* s=l.reverseList(head);
    
   //cout<<l.search(head,3);
   //cout<<endl;
   //l.presentOrNot(head,3);
   //cout<<endl;
   //cout<<l.searchIndex(head,3);
   //cout<<endl;
   //l.print(s);

   //cout<<l.mid(head);
   head=l.reverseKgroup(head,2);
   l.print(head);


   
    return 0;
}