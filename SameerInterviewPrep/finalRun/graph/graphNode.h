#include "LinkedList.h"
#include <vector>

using namespace std;

class graphNode
{
 private:
 	int V;
 	LinkedList adjList;
 	graphNode *next;

 public:
 	graphNode()
 	{
 		next = NULL;
 	}

 	graphNode(int inputI)
 	{
 		V = inputI;
 		next = NULL;
 	}

 	int getV()
 	{
 		return V;
 	}

 	graphNode* getNext()
 	{
 		return next;
 	}

 	void setNext(graphNode* inputGN)
 	{
 		next = inputGN;
 	}

 	LinkedList getAdjList()
 	{
 		return adjList;
 	}

 	void setAdjList(LinkedList inputLL)
 	{
 		adjList = inputLL;
 	}

};