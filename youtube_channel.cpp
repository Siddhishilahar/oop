#include<iostream>
#include<list>
using namespace std;

class Youtube_channel
{
public:	string name;
	int value;
	int no_of_user;
	
	public:Youtube_channel(string Channel_name,int subscriber)
	{
		this->name=Channel_name;
		this->no_of_user=subscriber;
	}
	
/*	void Display()
	{
		cout<<"\n Channel name is:="<<name;
		cout<<"\n Number of subscriber:="<<no_of_user;
	}*/
};

class Mycollection
{
	public: list<Youtube_channel>mylist;
	public:  void operator+=(Youtube_channel &channel)
	        {
	        	mylist.push_back(channel);
			}
};
ostream& operator<<(ostream &COUT,Youtube_channel &yt)
{
	COUT<<yt.name;
	COUT<<yt.no_of_user;
	return COUT;
}

ostream&  operator<<(ostream &COUT,Mycollection &mc)
{
	for(Youtube_channel yt: mc.mylist)
	{
		COUT<<yt;
	}
	return COUT;
}




int main()
{
	Youtube_channel yt1("apnacollege",70000);
	Youtube_channel yt2("code with harry",20000);
	Mycollection mc;
	mc+= yt1;
	mc+=yt2;
	cout<<mc;
//	yt1.Display();
//	yt2.Display();
	return 0;
}
