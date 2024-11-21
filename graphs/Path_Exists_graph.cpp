#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Solution {
public:
    // Function to determine if there is a valid path between start and end vertices
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        // Create an adjacency list using an unordered map
        unordered_map<int, vector<int>> umap;
        
        // Build the adjacency list from the edges
        for (auto x : edges) {
            vector<int> temp = x;
            int u = temp[0];
            int v = temp[1];

            // Add edges to the adjacency list
            umap[u].push_back(v);
            umap[v].push_back(u);
        }

        // Initialize a visited vector to keep track of visited vertices
        vector<bool> visited(n + 1, false);

        // Initialize a queue for BFS
        queue<int> q;
        q.push(start); // Enqueue the start vertex
        visited[start] = true; // Mark the start vertex as visited

        // Perform BFS
        while (!q.empty()) {
            int v = q.front(); // Get the front vertex from the queue
            q.pop(); // Dequeue the front vertex

            // Get all adjacent vertices of the dequeued vertex
            vector<int> temp = umap[v];
            for (int i = 0; i < temp.size(); i++) {
                int vertex = temp[i];
                
                // If the adjacent vertex has not been visited
                if (visited[vertex] == false) {
                    q.push(vertex); // Enqueue the adjacent vertex
                    visited[vertex] = true; // Mark the adjacent vertex as visited
                }
                
            }

            // If the end vertex has been visited, return true
            if (visited[end])
                return true;
        }
        // Return whether the end vertex has been visited
        return visited[end];
    }
};

int main() {
    Solution sol;
    // Define edges of the graph
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {1, 3}};
    
    int n = 4; // Number of vertices
    int start = 0; // Starting vertex
    int end = 3; // Ending vertex

    // Check if a valid path exists and print the result
    cout << (sol.validPath(n, edges, start, end) ? "Path exists" : "Path does not exist") << endl;

    return 0;
}
