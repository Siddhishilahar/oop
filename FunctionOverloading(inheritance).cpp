#include<iostream>
using namespace std;

const double PI = 3.1415;

class Shape{
	public:
		virtual double area()
		const = 0;
};

class Square : public Shape{
	private :
		double sidelength;
		
	public: 
	      Square(double side) : sidelength(side) {}
		  
		 double area() const override{
		 return sidelength * sidelength;
		 }	
};

class Reactangle : public Shape{
	private:
		int length;
		int breadth;
	 
	public:
	   Reactangle(int l, int b) : length(l),breadth(b) {}
	   
	   double area() const override{
	       return length * breadth;
		   }	
};

class Circle : public Shape{
	private : 
	        double radius;
	        
	public :
	        Circle(double r ) : radius(r) {}
			
			double area() const override{
			   return PI * radius * radius;
			   }        
};

int main(){
	Square square(4.0);
	Reactangle reactangle(6,8);
	Circle circle(4.0);
	
	cout<<"Area of Square :"<<square.area()<<endl;
	cout<<"Area of Reactangle :"<<reactangle.area()<<endl;
	cout<<"Area of Circle :"<<circle.area()<<endl;
	
	return 0;
	
}
