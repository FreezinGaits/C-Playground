#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<int> adj[], int v, int s) {
    vector<bool> visited(v+1, false); // Mark all vertices as not visited
    queue<int> q; // Create a queue for BFS
    visited[s] = true; // Mark the current node as visited
    q.push(s); // Enqueue the current node

    while (!q.empty()) {
        int u = q.front(); // Dequeue a vertex from queue
        q.pop();
        cout << u << " "; // Process the dequeued vertex
        
        // Get all adjacent vertices of the dequeued vertex u
        // If an adjacent vertex has not been visited, then mark it visited and enqueue it
        for (int v : adj[u]) {
            if (visited[v] == false) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main() {
    int V = 5; // Number of vertices
    vector<int> adj[V]; // Adjacency list for the graph

    // Adding edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(3);

    // Starting BFS from vertex 0
    BFS(adj, V, 0);

    return 0;
}
