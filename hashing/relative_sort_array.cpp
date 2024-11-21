#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        map<int, int> mp;
        
        // Count the occurrences of each element in arr1
        for (auto x : arr1)
            mp[x]++;
        
        // Add elements to ans based on the order in arr2
        for (auto temp : arr2) {
            if (mp.find(temp) != mp.end()) {
                int count = mp[temp];
                for (int i = 0; i < count; i++)
                    ans.push_back(temp);
                mp.erase(temp);
            }
        }
        
        // Add remaining elements in sorted order
        for (auto x : mp) {
            int ele = x.first;
            int count = x.second;
            for (int i = 0; i < count; i++)
                ans.push_back(ele);
        }
        
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};

    vector<int> result = sol.relativeSortArray(arr1, arr2);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
