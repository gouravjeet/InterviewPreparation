#include <iostream>

using namespace std;

class Base{
public:
	Base(){
		cout<<"b constructor        ";
	}
	virtual void display(){
		cout<<"base ";
	}
};
class Derived1 : virtual public Base{
public:	
	Derived1(){
		cout<<"D1 constructor   ";
	}
	virtual void display(){
		cout<<"D1 ";
	}
};
class Derived2: virtual public Base{
public:	
	Derived2(){
		cout<<"D2 constructor       ";
	}
	virtual void display(){
		cout<<"D2 ";
	}
};
class Derived3 : virtual public Derived2,virtual public Derived1{
public:	
	Derived3(){
		cout<<"D3 constructor        ";
	}
	 void display(){
		cout<<"D3 ";
	}
};
int main(){
	//Base b;
	//Derived1 d1;
	 //Derived2 d2;
	// Derived3 d3;
	// b.display();
	// d1.display();
	// d2.display();
	// d3.display();
	Base *b1=new Derived3();
	b1->display();

}