#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int firstRepeating(int arr[], int n)
    {
        unordered_map<int, int> umap;

        // Count the frequency of each element
        for (int i = 0; i < n; i++)
        {
            umap[arr[i]]++;
        }

        // Find the first repeating element
        for (int i = 0; i < n; i++)
        {
            int key = arr[i];
            if (umap[key] > 1)
            { // Look for elements that occur more than once
                return key;
            }
        }

        // If no repeating element is found, return -1
        return -1;
    }
};

int main()
{
    Solution sol;
    int arr[] = {2, 3, 4, 4, 6, 6, 6}, n = 7;
    int d = sol.firstRepeating(arr, n);
    if (d != -1)
    {
        cout << "The first repeating element is: " << d << endl;
    }
    else
    {
        cout << "No repeating element found." << endl;
    }
    return 0;
}
