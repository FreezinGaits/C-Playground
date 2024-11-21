#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int firstNonRepeating(int arr[], int n)
    {
        unordered_set<int> seen_once;
        unordered_set<int> seen_multiple;

        // Traverse the array to populate the sets
        for (int i = 0; i < n; i++)
        {
            if (seen_multiple.find(arr[i]) != seen_multiple.end())
            {
                continue; // Skip if already seen multiple times
            }
            if (seen_once.find(arr[i]) != seen_once.end())
            {
                seen_once.erase(arr[i]);
                seen_multiple.insert(arr[i]);
            }
            else
            {
                seen_once.insert(arr[i]);
            }
        }

        // Find the first non-repeating element
        for (int i = 0; i < n; i++)
        {
            if (seen_once.find(arr[i]) != seen_once.end())
            {
                return arr[i];
            }
        }

        // If no non-repeating element is found, return -1
        return -1;
    }
};

int main()
{
    Solution sol;
    int arr[] = {2, 3, 4, 4, 6, 6, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = sol.firstNonRepeating(arr, n);
    if (result != -1)
    {
        cout << "The first non-repeating element is: " << result << endl;
    }
    else
    {
        cout << "No non-repeating element found." << endl;
    }
    return 0;
}