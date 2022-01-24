#include<bits/stdc++.h>
using namespace std;

string vowel(string a){
    int n=a.length();
    
    string r;
    
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='a'){
            r.push_back(a[i]);
        }
        else if(a[i]=='e'){
            r.push_back(a[i]);
        }

        else if(a[i]=='i'){
            r.push_back(a[i]);
        }
        else if(a[i]=='o'){
            r.push_back(a[i]);
        }
        else if(a[i]=='u'){
            r.push_back(a[i]);
        }
        else{
            
        }
    }
    
    return r;
}

int main(){
    string s="aeoibsddaeioudb";
    cout<<vowel(s);
}