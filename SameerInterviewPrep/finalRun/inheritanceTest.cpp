#include <iostream>
using namespace std;

class A
{
public:
	void display()
	{
		cout<<"\nin A\n";
	}	
	A()
	{
		cout<<"\nconstructor A\n";

	}
	A(int a)
	{
		cout<<"\nconstructor A with param "<<a<<"\n";
	}
};

class B 
{
public: 
	void display()
	{
		cout<<"\nin B\n";
	}
	B()
	{
		cout<<"\nconstructor B\n";

	}
	B(int a)
	{
		cout<<"\nconstructor B with param "<<a<<"\n";
	}
	
};

class C : public A,public B
{
public:
	C(int a,int b) : B(b),A(a)
	{
		cout<<"\nconstructor C with param\n";
	}
};
int main()
{
	C obj(2,4);
	return 0;
}