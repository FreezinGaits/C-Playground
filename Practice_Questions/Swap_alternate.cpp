#include<iostream>
using namespace std;
void swapAlternate(int arr[], int size)
{
    int start = 0;
    int next = start+1;
    while(next<size)
    {
        int temp = arr[start];
        arr[start] = arr[next];
        arr[next] = temp;
        start+=2;
        next+=2;
    }
}
void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={0,1,2,3,4};
    swapAlternate(arr,5);
    printArray(arr,5);

    return 0;
}