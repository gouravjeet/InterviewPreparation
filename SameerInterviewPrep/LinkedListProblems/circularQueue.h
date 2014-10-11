#include <iostream>
#include "Node.h"

using namespace std;		
class CircularQueue
{
public:	
	Node* front;
	Node* rear;

	CircularQueue()
	{
		front = NULL;
		rear = NULL;
	}

	void insert(Node* node,int valueI)
	{	
		Node* temp = new Node(valueI);
		if(front==NULL)
		{		
			front = rear = temp;
			return;
		}
		rear->setNext(temp);
		rear = rear->getNext();
		rear->setNext(front);
		return;
	}

	void insert(int valueI)
	{
		Node* temp = rear;
		insert(temp,valueI);
	}

	void display()
	{
		if(front==NULL)
		{
			cout<<"\nNothing to display\n";
			return;
		}
		Node* traverser = front;
		while(traverser!=rear)
		{
			cout<<"\n"<<traverser->getValue()<<"\n";
			traverser = traverser->getNext();
		}
			cout<<"\n"<<traverser->getValue()<<"\n";	
		return;
	}

	void pop()
	{
		if(front==NULL)
		{
			cout<<"\nNothing to pop\n";
			return;
		}
		if(front==rear)
		{
			cout<<"\n"<<front->getValue()<<" has been popped\n";
			front = rear = NULL;
			return;
		}
		cout<<"\n"<<front->getValue()<<" has been popped\n";
		front = front->getNext();
	}	

};	