#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class Graph{
    public:
        unordered_map<int,list<int>>adj;
        
        void addEdge(int u, int v, bool direction){
        //direction:0 -> undirected
        //direction:1 -> directed

        //create an edge from u to v
        adj[u].push_back(v); //here u is the key means from node and v is the dest node   

        if(direction == 0){ //means undirected graph means bidirection graph means there must be an edge from v to u
            adj[v].push_back(u); 
        }
    }
        void printAdjList(){
            for(auto key:adj){
                cout<<key.first <<"->"; // here key.first == value of key means src node
                for( auto j : key.second){
                    cout<<j<<",";
                }
                cout<<endl;  
            }
        }
};


int main(){
    int n;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges:"<<endl;
    cin>>m;

    Graph g;
    for (int i = 0; i < m; i++)
    {
        cout<<"Enter the src vertex and dest vertex:"<<endl;
        int u,v;
        cin>>u>>v; //u be the src vertex and v be the dest vertex;
        g.addEdge(u,v,0);
    }
    
    //printing graph
    g.printAdjList();

return 0;
}