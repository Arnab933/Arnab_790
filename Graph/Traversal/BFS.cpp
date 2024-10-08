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
        queue<int> myqueue; // create a queue for push and pop 
        unordered_map<int, int> visited; // create a visited map which track all the visited nodes 

        int node = adj.begin()->first; // first node in the graph
        myqueue.push(node);  // push it in the queue

        while (!myqueue.empty())  // visit untill the queue will be empty
        {
            int popNode = myqueue.front();  // 
            myqueue.pop();  // pop the queue
            if (!visited[popNode]){ // check that node is already visited or not
                visited[popNode] = 1;  // if not visited then make it visited
                traversal.push_back(popNode);  // then push it in traversal list
            }
                for (auto pair : adj[popNode])   // find all adjacent nodes of the pop node
                {
                    if(!visited[pair])  // if they are not visited then push in into queue 
                        myqueue.push(pair);
                }
        }
    }

    void printBFS(){
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
    G.BFS();
    G.printBFS();
    return 0;
}