#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *link;
};
Node *start = NULL; // Start points to the first node

//Function to insert at the beginning
void insertAtBeginning(int value){
	Node *newNode = new Node(); //Node* Node = new struct Node();
	newNode->data = value;
	newNode->link = start;
	start = newNode;
}

//Function to insert after a given location
void insertAfterLocation(int location, int value){
	Node *ptr = start;
	for(int i=1; i<location && ptr!=NULL; i++){
		ptr = ptr->link;
	}
	if(ptr != NULL){
		Node *newNode = new Node();
		newNode->data = value;
		newNode->link = ptr->link;
		ptr->link = newNode;
	}
	else{
		cout<<"Location out of Range."<<endl;
	}
}

//Function to insert at the end
void insertAtEnd(int value){
	Node *newNode = new Node();
	newNode->data = value;
	newNode->link = NULL;
	
	if(start==NULL){
		start = newNode;
	}
	else{
		Node *ptr = start;
		while(ptr->link!=NULL){
			ptr = ptr->link;
		}
		ptr->link = newNode;
	}
}

//Function to display the list
void displayList(){
	Node *ptr = start;
	while(ptr!=NULL){
		cout<<ptr->data<<"->";
		ptr = ptr->link;
	}
}

int main(){
	cout<<"---Insertion into the linked list---"<<endl<<endl;
	int n, value;
	cout<<"Enter the number of nodes: ";
	cin>>n;
	
	for(int i= 0; i<n; i++){
		cout<<"Enter value for "<<(i+1)<<" node: ";
		cin>>value;
		insertAtEnd(value);
	}
	
	cout<<endl<<"Initial Linked List: ";
	displayList();
	
	char choice;
	do{
		cout<<endl<<"Do you want to insert a new element? (y/n): ";
		cin>>choice;
		
		if(choice == 'y'){
			int option, loc;
			cout<<"Enter the value to insert: ";
			cin>>value;
			cout<<"Where do you want to insert? "<<endl;
			cout<<"(1.) At the beginning"<<endl<<"(2.) At a given Location"<<endl<<"(3.) At the End"<<endl<<endl;
			cin>>option;
			
			switch(option){
				case 1:
					insertAtBeginning(value);
					break;
				case 2:
					cout<<"Enter the location after which to insert: ";
					cin>>loc;
					insertAfterLocation(loc, value);
					break;
				case 3:
					insertAtEnd(value);
					break;
				default: 
					cout<<"Invalid option"<<endl;
			}
			cout<<endl<<"Updated Linked List: ";
			displayList();
		}
	}
	while(choice == 'y');
	return 0;
}
