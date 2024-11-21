#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *link;
	
};

Node *Head = NULL;


void createLL(){
		Node *temp = Head;
	    while(temp!=NULL){
		cout<<temp->data<<"\t";
		temp = temp->link;
	}
}
	
	

int main(){
	insertLL();
	createLL();
	int t=4;
	for(int i=0;i<5;i++){
		if(Head==NULL){
			Head=new Node();
		}
		else{
			Node *tail = Head;
			while(tail->link != NULL){
				tail = tail->link;
			}
			Node *temp = new Node();
			tail->link = temp;}}
	return 0;
}
