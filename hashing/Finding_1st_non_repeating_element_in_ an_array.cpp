#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstNonRepeating(int arr[], int n) {
        unordered_map<int, int> umap;
        
        // Count the frequency of each element
        for (int i = 0; i < n; i++) {
            umap[arr[i]]++;
        }
        
        // Find the first non-repeating element
        for (int i = 0; i < n; i++) {
            int key = arr[i];
            if (umap[key] == 1) { // Look for elements that occur exactly once
                return key;
            }
        }
        
        // If no non-repeating element is found, return -1
        return -1;
    }
};

int main() {
    Solution sol;
    int arr[] = {2, 3, 4, 4, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = sol.firstNonRepeating(arr, n);
    if (d != -1) {
        cout << "The first non-repeating element is: " << d << endl;
    } else {
        cout << "No non-repeating element found." << endl;
    }
    return 0;
}
