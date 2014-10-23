#include "BST.h"
using namespace std;

int main()
{
	BST one;
	one.insert(10);
	one.insert(6);
	one.insert(3);
	one.insert(9);
	one.insert(12);
	one.insert(11);
	one.insert(13);
	one.preOrder();
	one.BFS();
}