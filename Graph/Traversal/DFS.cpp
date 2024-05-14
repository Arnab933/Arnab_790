#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

class Graph
{ // creating a graph
private:
    unordered_map<int, list<int>> adj;
    vector<int>traversal;
    unordered_map<int,int>visited;

public:
    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (!direction)
            adj[v].push_back(u);
    }

    void printEdge()
    {
        for (auto pair : adj)
        {
            cout << pair.first << "->";
            for (auto i : pair.second)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    void dfs(int node){
        visited[node] = 1;  // make it visited
        traversal.push_back(node); // add this in the traversal list
        for(auto j : adj[node]){
            if(!visited[j])
                dfs(j);
        }
        return;
    }

    void DFStraversal(){
        int node = adj.begin()->first;  // the starting node 
        dfs(node);  // call the dfs function
    }
    void printDFS(){
        for(auto j : traversal){
            cout<<j<<" ";
        }
    }
};

int main()
{
    Graph G;
    int n = 0, m = 0;
    cout << "Enter the number of nodes:";
    cin >> n;
    cout << "Enter the number of edges:";
    cin >> m;
    cout<<"Enter edges:"<<endl;
    for (int i = 0; i < m; i++)
    {
        int u = 0, v = 0;
        cin >> u >> v;
        G.addEdge(u, v, 0);
    }
    G.printEdge();
    G.DFStraversal();
    G.printDFS();
    return 0;
}