#include<iostream>
#include "circularQueue.h"

using namespace std;

int main()
{
	CircularQueue one;
	one.display();
	one.insert(1);
	one.insert(2);
	one.insert(3);
	one.insert(4);
	one.display();

	one.pop();
	one.display();

	one.pop();
	one.display();

	one.pop();
	one.display();

	one.pop();
	one.display();

	one.pop();
	one.display();		
	return 0;
}