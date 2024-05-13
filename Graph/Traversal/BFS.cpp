#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

class Graph
{ // creating a graph
private:
    unordered_map<int, list<int>> adj;

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

    void BFS()
    {
        queue<int> myqueue;
        unordered_map<int, int> visited;

        int node = adj.begin()->first;
        myqueue.push(node);

        while (!myqueue.empty())
        {
            int popNode = myqueue.front();
            myqueue.pop();
            if (!visited[popNode]){
                visited[popNode] = 1;
                cout<<popNode<<" ";
            }
                for (auto pair : adj[popNode])
                {
                    if(!visited[pair])
                        myqueue.push(pair);
                }
        }
    }

    void DFS(){
        
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
    G.BFS();
    return 0;
}