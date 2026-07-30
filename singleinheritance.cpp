//Single inhertance program
#include<iostream>
using namespace std;
class Base
{
	public: 
	void shape()
	{
		cout<<"Base method";
	}
};

class Derived : public Base
{
    public:
	void shape()
	{
		cout<<"Derived method";
	}
	
};

int main()
{
	Derived d;
	d.shape();
}