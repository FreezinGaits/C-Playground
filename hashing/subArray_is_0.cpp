#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool subArrayExists(int arr[], int n) {
        unordered_set<int> s;
        int pre_sum = 0;

        for (int i = 0; i < n; i++) {
            pre_sum += arr[i];

            // Check if the current prefix sum is 0
            if (pre_sum == 0) {
                return true;
            }

            // Check if the current prefix sum has been seen before
            if (s.find(pre_sum) != s.end()) {
                return true;
            }

            // Insert the current prefix sum into the set
            s.insert(pre_sum);
        }

        // Return false if no subarray with sum 0 is found
        return false;
    }
};

int main() {
    Solution sol;
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (sol.subArrayExists(arr, n)) {
        cout << "Subarray with sum 0 exists" << endl;
    } else {
        cout << "No subarray with sum 0 exists" << endl;
    }

    return 0;
}
