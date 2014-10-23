#include<iostream>
using namespace std;

class Base
{
private:
		int a ;
protected:
		
public:
		int c ;
		Base()
		{
			a=10;
			c = 11;
			cout<<"\nIn Base Constructor\n";
		}
		~Base()
		{
			cout<<"\nIn Base Destructor\n";
		}
		void display()
		{
			cout<<"\nTest Display in Base Class\n";
		}
		void displayA()
		{
			cout<<"\ndisplaying A from Base class : "<<a<<"\n";	
		}
		void displayC()
		{
			cout<<"\ndisplaying C from Base class : "<<c<<"\n";	
		}
};

class Derived : public Base	
{
private:
		int b ;	
public:
		Derived()
		{
			b = 20;	
			cout<<"\nIn Derived Constructor\n";
		}
		~Derived()
		{
			cout<<"\nIn Derived Destructor\n";
		}
		void displayB()
		{
			cout<<"\ndisplaying B from Derived class : "<<b<<"\n";	
		}
		void displayCTest()
		{
		 cout<<"\ndisplaying C from Derived class : "<<c<<"\n";	
		}
		void display()
		{
			cout<<"\nTest Display in Derived Class\n";
		}
};

class Derived1 : public Base	
{
private:
		int d ;	
public:
		Derived1()
		{
			d = 25;	
			cout<<"\nIn Derived1 Constructor\n";
		}
		~Derived1()
		{
			cout<<"\nIn Derived1 Destructor\n";
		}
		void displayD()
		{
			cout<<"\ndisplaying D from Derived1 class : "<<d<<"\n";	
		}
		void displayDTest()
		{
		 cout<<"\ndisplaying D from Derived1 class : "<<d<<"\n";	
		}
		void display()
		{
			cout<<"\nTest Display in Derived1 Class\n";
		}
};

class Derived2 : virtual Derived, virtual Derived1	
{
private:

public:

};

int main()
{
	Derived2 d2;	
	d2.display();
	// Derived1 d1 ;
	// Base *b = new Derived;
	// b->display();
	// delete b;
	// Base b;
	// Derived d;
	// d.display();
	// d.displayCTest();
	// d.displayB();
	return 0 ;
}