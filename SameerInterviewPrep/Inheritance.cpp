#include<iostream>

using namespace std;

class A
{
protected:
	int a;
public:
	A()
	{
		cout<<"\nIn Default Constructor of A\n";
		a= 48;
	}
	A(int aI)
	{
		cout<<"\nIn Param Constructor of A\n";
		a = aI;
	}
	virtual ~A()
	{
		cout<<"\nIn Destructor of A\n";		
	}
	virtual void displayA()
	{
		cout<<"\nValue of a is : "<<a<<"\n";
	}

	virtual void testPureVirtualFunction()
	{

	}
};


class B : public A
{
private:
	int b;
public:
	B()
	{
		cout<<"\nIn Default Constructor of B\n";
		b= 50;
	}
	B(int bI)
	{	
		cout<<"\nIn Param Constructor of B\n";
		b = bI;
	}
	~B()
	{
		cout<<"\nIn Destructor of B\n";		
	}

	void displayB()
	{
 		cout<<"\nValue of b is : "<<b<<"\n";
 		displayA();
	}

	void accessA()
	{
		cout<<"\nValue of a  is "<<a<<"\n";	
	}

	virtual void displayA()
	{
 		cout<<"\nValue of b is : "<<b<<"\n";
	}

	void testPureVirtualFunction()
	{
		cout<<"\nBhyau\n";	
	}
};

// class C : public B
// {
// private:
// 	int c;
// public:
// 	C()
// 	{
// 		cout<<"\nIn Default Constructor of C\n";
// 		c= 51;
// 	}
// 	C(int cI)
// 	{	
// 		cout<<"\nIn Param Constructor of C\n";
// 		c = cI;
// 	}
// 	~C()
// 	{
// 		cout<<"\nIn Destructor of C\n";		
// 	}

// 	void displayC()
// 	{
//  		cout<<"\nValue of c is : "<<c<<"\n";
// 	}

// 	void accessA()
// 	{
// 		cout<<"\nValue of a  is "<<a<<"\n";	
// 	}

// 	void displayA()
// 	{
//  		cout<<"\nValue of c is : "<<c<<"\n";
// 	}
// };


int main()
{	
	// A one;
	// A two(1);	

	// B three(1);	
	// three.displayB();
	// three.displayA();
	// three.accessA();		

	// A* four = new C();
	// four->displayA(	);
	// delete four;	

	// C five;
	// five.displayA();

	// A* sameer = new B();

	A *a = new B;
	delete a;
	return 0;
}