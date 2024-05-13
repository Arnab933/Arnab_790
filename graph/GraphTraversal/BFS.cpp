#include<iostream>
#include<stdlib.h>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;



class Graph{
    public:
        unordered_map<int,list<int>>adj;

        void addEdges(int u,int v,bool direction){
            // if direction == 0  => bi-directional graph
            // if direction == 1 => directional graph
            adj[u].push_back(v);

            if(direction == 0)
                adj[v].push_back(u);
        }
        void printEdges(){
            for(auto key : adj){
                cout<<key.first<<"->";
                for(auto j : key.second){
                    cout<<j<<",";
                }
            cout<<endl;
            }
        }
        void BFStraversal(){
            unordered_map<int,bool>visited;
            queue<int>q;
            
            q.push();
        }
};



int main(){
    int n = 0;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;

    int m = 0;
    cout<<"Enter the number of edges:"<<endl;
    cin>>m;

    Graph G;
    cout<<"Enter the src and dest node:"<<endl;
    for(int i = 0;i < m;i++){
        int u = 0,v = 0;
        cin>>u>>v;
        G.addEdges(u,v,0);
    }
    G.printEdges();
    return 0;
}