#include<iostream>
using namespace std;

//Implement it with array
class Stack
{
	int *arr;
	int size;
	int top;
	
	public:
	
	//Constructor
	Stack(int s)
	{
		size = s;
		top = -1;
		arr = new int[s];
	}
	
	
	//Push
	void push(int value)
	{
		if(top==size-1)
		{
			cout<<"Stack Overflow"<<endl;
			return;
		}
		else
		{
			top++;
			arr[top]=value;
			cout<<"Pushed "<<value<<" into the stack"<<endl;
		}
	}
	//Pop
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack Underflow"<<endl;
		}
		else
		{
			cout<<"Popped "<<arr[top]<<" from the stack"<<endl;
			top--;
//			cout<<"Popped "<<arr[top + 1]<<" from the stack"<<endl;
		}
	}
	//Peek
	int peek()
	{
		if(top==-1)
		{
			cout<<"Stack is empty"<<endl;
			return -1;
		}
		else
		{
			return arr[top];
		}
	}
	//IsEmpty
	bool IsEmpty()
	{
		return top==-1;
	}
	//IsSize
	int IsSize()
	{
		return top+1;
	}
};
int main(){
	Stack S(5);
	S.push(5);
	S.push(6);
	S.push(8);
//	S.push(9);
	S.pop();
	cout<<S.peek()<<endl;
	cout<<S.IsEmpty()<<endl;
	cout<<S.IsSize()<<endl;
	return 0;
}
