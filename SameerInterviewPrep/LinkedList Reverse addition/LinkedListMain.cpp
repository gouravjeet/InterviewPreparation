#include <iostream>
#include <cmath>
#include "LinkedList.h"
using namespace std;



int main()
{
	LinkedList one;
	LinkedList two;
	one.insert(1);
	one.insert(2);
	one.insert(3);
	// one.display();


	two.insert(1);
	two.insert(2);
	two.insert(3);
	// two.display();



	cout<<one.convertToReversedNumber() + two.convertToReversedNumber()	<<"\n";
	return 0;
}