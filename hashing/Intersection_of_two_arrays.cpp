#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int Intersection(int arr[], int brr[], int n, int m) {
        unordered_set<int> uset;
        // Insert elements from the first array into the set
        for (int i = 0; i < n; i++) {
            uset.insert(arr[i]);
        }

        int count = 0;
        // Check elements of the second array against the set
        for (int i = 0; i < m; i++) {
            int key = brr[i];
            if (uset.find(key) != uset.end()) {
                count++;
                uset.erase(key); // Remove the element to avoid duplicates
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    int arr[] = {2, 3, 4, 5, 7}; // Correctly initialize the array
    int brr[] = {98, 5, 8}; // Correctly initialize the array
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(brr) / sizeof(brr[0]);
    int result = sol.Intersection(arr, brr, n, m);
    cout << "The number of intersecting elements is: " << result << endl;
    return 0;
}
