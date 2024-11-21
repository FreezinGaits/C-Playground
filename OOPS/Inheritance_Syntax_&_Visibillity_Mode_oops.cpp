#include<iostream>
using namespace std;

//Base Class
class Employee{
	public:
	int id;
	float salary; 
	Employee(int inpId){
		id = inpId;
		salary = 34.0;
}
	Employee(){}
};

//Derived Class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
	//class memberss/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public visibility mode: Public members of the class becomes Public members of the derived class
3. Private visibility mode: Public members of the class becomes Private members of the derived class
4. Private members are never Inherited.
*/

//Creating a Programmer class derived from Enployee Base class
class Programmer : Employee{
	public:
		Programmer(int inpId){
			id=inpId;
		}
	int laguageCode = 9;
};

int main(){
	Employee Gautam(1), Ritik(2), Piyush(3);
	cout<<Gautam.salary<<endl;
	cout<<Ritik.salary<<endl;
	cout<<Piyush.salary<<endl;
	
	Programmer skillF(1);
	return 0;
}
