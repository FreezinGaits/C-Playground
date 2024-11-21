#include<iostream>
using namespace std;
void twoSum(int arr[], int target){
	int loc_i=-1;
	int loc_j=-1;
	int i=0;
	while(loc_i==-1 && i<5)
	{
		int j=0;
		while(loc_j==-1 && j<5)
		{
			int c = arr[i]+arr[j];
			if(c==target)
			{
				loc_i = i;
				loc_j = j;
			}
			j++;
		}
		i++;
	}
	if(loc_i==-1 || loc_j==-1)
	{
		cout<<"The sum isn't found."<<endl;
	}
	else
	{
		cout<<"["<<loc_i<<","<<loc_j<<"]"<<endl;
	}
}
int main(){
	int n;
	cout<<"Enter the size of the array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int target;
	cout<<"Enter the value of the target: "<<endl;
	cin>>target;
	twoSum(arr, target);
	return 0;
}
