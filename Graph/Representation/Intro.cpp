#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph
{
private:
    unordered_map<int, list<int>> adj;

public:
    void addEdge(int u, int v, bool direction)
    {
        // add the edge
        adj[u].push_back(v);
        // if not directed then direction = 0;
        if (!direction)
            adj[v].push_back(u);
    }

    void printAdjList()
    {
        for (auto pair : adj)
        {
            cout << pair.first << "->";
            for (int i : pair.second)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n = 0, m = 0;

    cout << "Enter the number of nodes:";
    cin >> n;
    cout << "Enter the number of edges:";
    cin >> m;

    Graph G;

    for (int i = 0; i < m; i++)
    {
        int u = 0, v = 0;
        cin >> u >> v;
        // undirected graph so direction = 0
        G.addEdge(u, v, 0);
    }
    cout << "Edges are:" << endl;
    G.printAdjList();

    return 0;
}