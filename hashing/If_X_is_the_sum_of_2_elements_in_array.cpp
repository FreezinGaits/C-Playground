#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        unordered_map<int, int> umap;

        // Populate the map with element frequencies
        for (int i = 0; i < n; i++)
        {
            umap[arr[i]]++;
        }

        // Check for pairs
        for (int i = 0; i < n; i++)
        {
            int key = arr[i];
            int pair = x - key;

            // If the pair is the same element, check its count
            if (pair == key)
            {
                if (umap[key] > 1)
                {
                    return true;
                }
            }
            else
            {
                // If the pair is a different element, check its existence
                if (umap.find(pair) != umap.end())
                {
                    return true;
                }
            }
        }

        // Return false if no pair is found
        return false;
    }
};

int main()
{
    Solution sol;
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 16;

    if (sol.hasArrayTwoCandidates(arr, n, x))
    {
        cout << "Array has two elements with sum " << x << endl;
    }
    else
    {
        cout << "Array does not have two elements with sum " << x << endl;
    }

    return 0;
}
