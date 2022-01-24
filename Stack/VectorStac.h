#include<vector>
using namespace std;

template<typename T>
class VectorStack{
    vector<T> arr;

    public:
        void push(T data){
            arr.push_back(data);
        }

        T top(){
            int s=arr.size()-1;
            return arr[s];
        }

        void pop(){
            arr.pop_back();
        }

        bool empty(){
            return arr.size()==0;
        }
};