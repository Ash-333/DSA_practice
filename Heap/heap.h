#include<vector>
using namespace std;

class Heap{
    vector<int> v;
    void heapify(int i){
        int left=2*i;
        int right=2*i;
        int minIndex=i;
        if(left<v.size() && v[left]<v[i]){
            minIndex=left;
        }
        if(right<v.size() && v[right]<v[minIndex]){
            minIndex=right;
        }

        if(minIndex!=i){
            swap(v[i],v[minIndex]);
            heapify(minIndex);
        }
    }

    bool compare(int a,int b){
        return a>b;
    }

    public:
        Heap(int def=10){
            v.reserve(def);
            v.push_back(-1);
        }

        void push(int data){
            v.push_back(data);
            int index=v.size()-1;
            int parent=index/2;

            while(index>1 && v[index]<v[parent]){
                swap(v[index],v[parent]);
                index=parent;
                parent=parent/2;
            }
        }

        void pop(){
            int last=v.size()-1;
            swap(v[1],v[last]);
            v.pop_back();
            heapify(1);
        }

        void print(){
            for(int x=1;x<v.size();x++){
                cout<<v[x]<<" ";
            }
        }
};