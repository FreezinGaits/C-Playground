#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
    cout << "Number of element: " << s.size() << endl;
    // s.clear();
    //     cout<< "Number of elements: " << s.size() << endl;
    // return 0;

    // find() function return the iterator to that element
    //  if not found, it will return end() function
    //  find() function is efficient for unordered_set as it uses hashing to find the element
    //  unordered_set is implemented as hash table, hence the time complexity of find() is constant (O(1))

    // erase() function remove element from unordered_set
    // erase() function takes two arguments, iterator to the element to be deleted and the element itself
    int key = 20;
    if (s.find(key) != s.end())
    {
        cout << "Key has found.";
    }
    else
    {
        cout << "Key not found.";
    }

    int deleted_key = 5;
    s.erase(deleted_key);

    int key2 = 10;
    if (s.find(key2) == s.end())
    {
        cout << "Key hasn't found." << endl;
    }
    else
    {
        auto temp = s.find(key2);
        s.erase(temp);
    }
    // count() function returns the '1' if it is present or 0 otherwise
    if (s.count(20))
    { // returns 1
        cout << "Key has found." << endl;
    }
    else
    {
        cout << "Key not found." << endl;
    }

    return 0;
}