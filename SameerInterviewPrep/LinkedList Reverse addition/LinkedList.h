#include "Node.h"
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
class LinkedList
{
public:
	Node *head;
	int sizeOfList;
	LinkedList()
	{
		head = NULL;
	}	

	void insert(int value)
	{
		Node *temp = new Node(value);
		Node *traverser = head;
		if(head == NULL)
		{
			head = temp;
			sizeOfList++;
			return;
		}

		while(traverser->getNext()!=NULL)
		{
			traverser = traverser->getNext();
		}

		sizeOfList++;
		traverser->setNext(temp);

		return;
	}


	void display()
	{
		Node *traverser = head;
		if(head==NULL)
		{
			cout<<"\nNothing to display\n";
		}
		while(traverser!=NULL)
		{
			cout<<"\n"<<traverser->getValue()<<"\n";
			traverser = traverser->getNext();
		}
		return;
	}

	double convertToReversedNumber()
	{	
		double sum=0;
		int count=0;
		Node* traverser = head;
		if(head==NULL)
		{
			cout<<"\nList is Empty\n";
		}
		while(traverser!=NULL)
		{
			sum = sum + traverser->getValue() * pow(10,count);
			count++;
			traverser = traverser->getNext();
		}
		return sum;
	}
};