#include <iostream>
//#include <cstddef> // Include this header for nullptr
using namespace std;
class Node {
public:
    int data;
    Node* next;
    
//    Node(int value){
//    	data = value;
//    	next = NULL;
//	}
    Node(int value) : data(value), next(NULL) {} // Use NULL instead of nullptr
};

int main() {
	//Simple code to print data and next of Head.
//	Node *Head;
//	Head = new Node(4);
//	
//	cout<<Head->data<<endl;
//	cout<<Head->next<<endl;
        // Create three nodes
    Node* head = 	NULL; // Initialize an empty list
    Node* firstNode = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);

    // Link the nodes together
    head = firstNode;
    firstNode->next = secondNode;
    secondNode->next = thirdNode;

    // Traverse and print the linked list
    Node* current = head;
    while (current != NULL) {
        std::cout << current->data << " ";
        current = current->next;
    }

    // Clean up: delete allocated memory
    delete firstNode;
    delete secondNode;
    delete thirdNode;

    return 0;
}

