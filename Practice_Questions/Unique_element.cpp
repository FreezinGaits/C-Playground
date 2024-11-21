#include<iostream>
using namespace std;
bool uniqueElement(int arr[], int size)
{
    int start = 0;
    int next = 1;
    while(start < size)
    {
        while(next<size)
    {
        if(arr[start]==arr[next])
        {
            return true;
        }
        next++;
    }
    start++;
    }
    return false;
}
void printArray(int arr[], int size)
{
    cout<<"Array: ";  // Printing the array before removing duplicates
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[7]={3, 7, 2, 2, 7, 3, 3};
    int found = uniqueElement(arr, 7);
    printArray(arr, 7);
    if(found==true)
    cout<<"There is unique element: ";
    else
    {
        cout<<"No unique element found";
    }
    return 0;
}