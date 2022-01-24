#include <iostream>
using namespace std;
   
int main(){
    int input[10], i, num;
    
    cout << "Enter 10 numbers \n";
      
    for(i = 0; i < 10; i++){
        cin >> input[i];
    }
      
    cout << "Enter a number to serach in Array\n";
    cin >> num;
      
    for(i = 0; i < 10; i++){
        if(input[i] == num){
            cout << "Element found at index " << i;
            break;
        }
    }
      
    if(i == 10){
        cout  << "Element Not Present in Input Array\n";
    }
 
    return 0;
}