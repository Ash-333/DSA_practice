#include<iostream>
#include<stack>

using namespace std;


bool valid(string str){
    stack<char> s;

    for(char c:str){
        if(c==')'){
            char top=s.top();
            s.pop();

            int count=0;
            while(top!='('){
                count++;
                top=s.top();
                s.pop();
            }
            if(count<1){
                return true;
            }

        }
        else{
            s.push('(');
        }
    }
    return false;
}
int main(){
    string str="((a+b)+((c+d))";
    cout<<valid(str);
}