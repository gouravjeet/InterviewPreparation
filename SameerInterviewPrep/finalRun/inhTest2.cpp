#include <iostream>

using namespace std;

class A
{
private:
	int a;
public:
	A()
	{
		a = 10;
	}
};

class B : public A
{
public:
	void displayA()
	{
		cout<<a;
	}
};
int main()
{
	
	return 0;
}