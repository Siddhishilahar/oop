#include<iostream>
using namespace std;

class Number
{
	private: 
	        int value;
	        
	public: 
	       Number(int val)
	       {
	       	value=val;
		   }
		   
	Number operator+(const Number &other) const{
	return Number(this->value + other.value);
	}
	
	//overloading the '-' operator
	
	Number operator-(const Number &other) const{
	return Number(this->value-other.value);
	}
	
	void display()
	{
		cout<<"\n value:="<<value;
	}
};

int main()
{
	Number num1(6);
	Number num2(4);
	
	Number result_add = num1+num2;
	cout<<"\n addition result:=";
	result_add.display();
    
	Number result_sub = num1-num2;
	cout<<"\n substraction result:=";
	result_sub.display();
	
	return 0;	
}
