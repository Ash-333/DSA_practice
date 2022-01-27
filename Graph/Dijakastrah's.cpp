#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>> *l;

    public:
        Graph(int v){
            V=v;
            l=new list<pair<int,int>>[V];
        }
        void addEdge(int i,int j,int wgt,bool undir=true){
            l[i].push_back({wgt,j});
            if(undir){
                l[j].push_back({wgt,i});
            }
        }

        int dijkstra(int source,int dest){
            vector<int> dist(V,INT_MAX);
            set<pair<int,int>> s;
            dist[source]=0;
            s.insert({0,source});
            while(!s.empty()){
                auto it=s.begin();
                int node=it->second;
                int distTillNow=it->first;
                s.erase(it);

                for(auto nbrPair:l[node]){
                    int nbr=nbrPair.second;
                    int currentEdge=nbrPair.first;

                    if(distTillNow+currentEdge< dist[nbr]){
                        auto f=s.find({dist[nbr],nbr});
                        if(f!=s.end()){
                            s.erase(f);
                        }
                        dist[nbr]=distTillNow+currentEdge;
                        s.insert(make_pair(dist[nbr],nbr));
                    }
                }
            }
            for(int i=0;i<V;i++){
                cout<<"Node i"<<i<<" Dist"<<dist[i]<<endl;
            }
            return dist[dest];

        }
};

int main(){
    Graph g(5);

    g.addEdge(0,1,1);
    g.addEdge(1,2,2);
    g.addEdge(0,2,4);
    g.addEdge(0,3,4);
    g.addEdge(3,2,2);
    g.addEdge(3,4,3);
    cout<<g.dijkstra(0,4)<<endl;
}