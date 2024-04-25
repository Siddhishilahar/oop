#include<iostream>
using namespace std;

class Person{
	protected: 
	    string Name;
	public:
		Person(const string& Name) : Name(Name){
		}
		void display(){
			cout<<"Name :"<<Name<<endl;
					}
};

class Employee:virtual public Person{
	protected:
		int EmployeeID;
	public:
	    Employee(const string name,int EmployeeID) :
		 Person(Name),EmployeeID(EmployeeID) {}
     
	void displayEmployee(){
		display();
		cout<<"EmployeeID :"<<EmployeeID<<endl;
	}	
};

class Customer:virtual public Person{
	protected:
		int CustomerID;
	public:
	    Customer(const string& Name,int CustomerID)
		:Person(Name),CustomerID(CustomerID){}
		
		void displayCustomer(){
			display();
		cout<<"Customer ID :"<<CustomerID<<endl;
		}	
};

class EmployeeCustomer : public Employee,public Customer{
	public:
		EmployeeCustomer( const string& Name,int EmployeeID,int CustomerID):
		Person(Name),Employee(Name,EmployeeID),Customer(Name,CustomerID){}
		
		void displayEmployeeCustomer(){
			display();
			cout<<"Employee ID :"<<EmployeeID<<endl;
			cout<<"Customer ID :"<<CustomerID<<endl;
		}
	};
	
int main(){
	EmployeeCustomer ec("Sanika Patil",2296,22);
	ec.displayEmployeeCustomer();
	return 0;
}

