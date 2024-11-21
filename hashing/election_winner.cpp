#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> winner(string arr[], int n) {
        unordered_map<string, int> umap;

        // Count the votes for each name
        for (int i = 0; i < n; i++) {
            umap[arr[i]]++;
        }

        string name = "";
        int max_vote = 0;

        // Find the candidate with the maximum votes
        for (auto itr = umap.begin(); itr != umap.end(); itr++) {
            string key = itr->first;
            int val = itr->second;

            if (val > max_vote) {
                max_vote = val;
                name = key;
            } else if (val == max_vote) {
                if (key < name) {
                    name = key;
                }
            }
        }

        vector<string> ans;
        ans.push_back(name);
        ans.push_back(to_string(max_vote));

        return ans;
    }
};

int main() {
    Solution sol;
    string arr[] = {"john", "johnny", "jackie", "johnny", "john", "jackie", "jamie", "jamie", "john"};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<string> result = sol.winner(arr, n);
    cout << "The winner is: " << result[0] << " with " << result[1] << " votes." << endl;

    return 0;
}
