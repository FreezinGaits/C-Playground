#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> PosNegPair(int a[], int n)
    {
        vector<int> negatives, result;
        map<int, int> positiveCount;

        // Separate negative numbers and count positive numbers
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                negatives.push_back(a[i]);
            }
            else
            {
                positiveCount[a[i]]++;
            }
        }

        // Sort negative numbers in ascending order
        sort(negatives.begin(), negatives.end());

        // Find pairs of negative and positive numbers
        for (int i = (int)negatives.size() - 1; i >= 0; i--)
        {
            int data = abs(negatives[i]);
            if (positiveCount[data] > 0)
            {
                result.push_back(negatives[i]);
                result.push_back(data);
                positiveCount[data]--;
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;
    int arr[] = {3, -3, -2, 2, 1, -1, -4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> result = sol.PosNegPair(arr, n);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
