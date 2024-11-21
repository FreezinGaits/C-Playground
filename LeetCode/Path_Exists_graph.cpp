#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int, vector<int>> umap;
        for (auto x : edges) {
            vector<int> temp = x;

            int u = temp[0];
            int v = temp[1];

            umap[u].push_back(v);
            umap[v].push_back(u);
        }

        vector<bool> visited(n + 1, false);

        queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int v = q.front();
            q.pop();

            vector<int> temp = umap[v];
            for (int i = 0; i < temp.size(); i++) {
                int vertex = temp[i];
                if (visited[vertex] == false) {
                    q.push(vertex);
                    visited[vertex] = true;
                }
            }
            if (visited[end])
                return visited[end];
        }
        return visited[end];
    }
};

int main() {
    Solution sol;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {1, 3}};
    int n = 4;
    int start = 0;
    int end = 3;

    cout << (sol.validPath(n, edges, start, end) ? "Path exists" : "Path does not exist") << endl;

    return 0;
}
