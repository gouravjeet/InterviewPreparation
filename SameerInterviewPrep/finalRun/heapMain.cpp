#include "heap.h"

using namespace std;

int main()
{
	Heap one;
	one.display();
	
	one.insert(10);
	one.display();

	one.insert(6);
	one.display();

	one.insert(4);
	one.display();


	one.insert(18);
	one.display();
	return 0;
}