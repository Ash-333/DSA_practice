#include<iostream>
#include<stack>
using namespace std;

char* reverse(char* s,int n){
    stack<char> c;
    for(int i=0;i<n;i++){
        char ch=s[i];
        c.push(ch);
    }

    char ans[n];
    int p=0;
    while(!c.empty() && p<n){
        ans[p]=c.top();
        c.pop();
    }
    
    return (char*)ans;
   
}

int main(){
    char s[]="hello";
    int n=sizeof(s)/sizeof(char);

    char* c=reverse(s,n);
    for (int i = 0; i < n; i++){
        cout<<c[i];
    }

    
    // stack<char> c;
    // for(int i=0;i<n;i++){
    //     char ch=s[i];
    //     c.push(ch);
    // }
    // string res;
    // while(!c.empty()){
    //     char p=c.top();
    //     strcpy(ret, array)
    //     c.pop();
    // }
    // cout<<res;
}