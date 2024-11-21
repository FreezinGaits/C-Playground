#include <iostream>
#include <vector>
using namespace std;
class Graph
{
    int V;                       // NO. of vertices
    vector<vector<int>> adjList; // Adjacency list

public:
    Graph(int V)
    {
        this->V = V;
        adjList.resize(V);
    }

    void addEdge(int v, int w)
    {
        adjList[v].push_back(w); // Add w to v's list
        adjList[w].push_back(v); // Add v to w's list (undirected graph)
    }

    void printGraph()
    {
        for (int v = 0; v < V; ++v)
        {
            cout << "Adjacency list of vertex " << v << ": ";
            for (auto x : adjList[v])
                cout << x << " ";
            cout << endl;
        }
    }
    //     void printGraph() {
    //     for (int v = 0; v < V; ++v) {
    //         cout << "Adjacency list of vertex " << v << ": ";
    //         for (size_t i = 0; i < adjList[v].size(); ++i)
    //             cout << adjList[v][i] << " ";
    //         cout << endl;
    //     }
    // }
};
int main()
{
    int V = 5;
    Graph g(V);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printGraph();
    return 0;
}