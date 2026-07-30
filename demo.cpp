#include <iostream>
using namespace std;
class Demo
{
	private:
	int val;
	public:
	Demo(int v):val( v)
	{		
		cout<<"value of" <<val;
	}
};
int main()
{
	Demo d(10);
}