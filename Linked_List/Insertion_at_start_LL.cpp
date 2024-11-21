#include<iostream>
//#include <cstddef> // Include this header for nullptr

using namespace std;
class Node{
	public:
	int data;
	Node *next;
	
	Node(int value): data(value), next(NULL) {}
};

int main(){
	Node *Head = NULL;
	
	int arr[] = {2, 3, 5, 6, 4};
	for(int i=0;i<5;i++){
		if(Head==NULL){
			Head=new Node(arr[i]);
		}
		else{
			Node *temp;
			temp=new Node(arr[i]);
			temp->next=Head;
			Head=temp;
		}
	}
	Node *temp = Head;
	while(temp){ //while(temp!=NULL)
		cout<<temp->data<<"\t";
		temp = temp->next;
	}
}
