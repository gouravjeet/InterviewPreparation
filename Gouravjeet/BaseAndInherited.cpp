#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <array>
#include <cmath>

using namespace std;
class BaseAndInherited
{
	int a;
public:
	BaseAndInherited(){
		cout<<" Base Constructor"<<"\n";
	}
	BaseAndInherited(int d){
		a=d;
		cout<<" Base Paramterized Constructor"<<"\n";
	}
	~BaseAndInherited(){
		cout<<" Base Destructor"<<"\n";
	}
	void displayBase(){
		cout<<"Base"<<"\n";
	}
	
};
class Inherited: public BaseAndInherited{

	int b;	
	typedef BaseAndInherited super;
public:
	Inherited(){
		cout<<" Derived Constructor"<<"\n";
	}
	Inherited(int d){
		super::BaseAndInherited();
		b=d;
		cout<<" Derived Param Constructor"<<"\n";
	}
	~Inherited(){
		cout<<" Derived Destructor"<<"\n";
	}
	void displayBaseAndInherited(){
		cout<<"Inherited"<<"\n";
	}
	void displayBase(){
		cout<<"Base in Derived "<<"\n";
	}

};

int main(){
	//BaseAndInherited b;
	Inherited i(1);
	i.displayBase();


}