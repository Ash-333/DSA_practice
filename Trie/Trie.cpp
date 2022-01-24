#include<bits/stdc++.h>
#include"trie.h"
using namespace std;

int main(){
    string words[]={"apple","hello","hell","ape","news"};
    Tier t;
    for(auto word:words){
        t.insert(word);
    }

    cout<<t.search("apple");
}