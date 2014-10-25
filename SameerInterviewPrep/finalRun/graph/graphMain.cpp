#include "graph.h"

int main()
{
	graph a;
	a.addEdge(1,2);
	a.addEdge(1,3);
	a.addEdge(1,4);
	a.addEdge(1,5);
	a.addEdge(4,5);
	a.printGraph();
	return 0;
}