#include<iostream>
using namespace std;

class Date
{
	public: int day,month,year;
	
	Date(int d,int m,int y)
	{
	    day=d;
		month=m;
		year=y;
    }
		
		
		string getMonthName(int month)
		{
		   string monthNames[]={" ","January","February","March","April","May","June","July","August","September","October","November","December"};
		   return monthName[month];	
		}	
};

int main()
{
	Date d1;
	d1(17,5,2004);
	
	string monthName=getMonthName();
	cout<<"Month:"<<monthName<<endl;
	
	return 0;
}

