#include "graphNode.h"
#include <iostream>

using namespace std;

class graph
{
public:
	graphNode* start;
	graph()
	{
		start = NULL;
	};	

	bool nodeExists(int inputV)
	{
		graphNode* traversor = start;
		if(traversor==NULL)
		{
			return false;	
		}
		while(traversor!=NULL)
		{
			if(traversor->getV()==inputV)
			{
				return true;
			}
			traversor = traversor->getNext();
		}
		return false;

	}

	void addNode(int inputI)
	{
		if(!nodeExists(inputI))
		{
			graphNode* newNode = new graphNode(inputI);
			{
				newNode->setNext(start);
				start = newNode;
			}
		}
	}

	void addEdge(int src,int dest)
	{
		addNode(src); addNode(dest);
		graphNode* traversor = start;

		while(traversor!=NULL)
		{
			if(traversor->getV()==src)
			{
		     LinkedList temp = traversor->getAdjList();
		     temp.insert(dest);
			 traversor->setAdjList(temp);
			 traversor = traversor->getNext();
			 continue;
			}
			if(traversor->getV()==dest)
			{
			 LinkedList temp = traversor->getAdjList();
		     temp.insert(src);
			 traversor->setAdjList(temp);
			 traversor = traversor->getNext();
			 continue;
			}
			traversor = traversor->getNext();

		}
	}

	void printGraph()
	{
		graphNode* traversor = start;
		cout<<"\nNodes in the graph are : \n";
		while(traversor!=NULL)
		{
			cout<<"Node-"<<traversor->getV()<<", the adjacency list of it is as follows : \n";
			traversor->getAdjList().display();
			cout<<"\n";
			traversor = traversor->getNext();
		}	
		cout<<"\n";
	}

};