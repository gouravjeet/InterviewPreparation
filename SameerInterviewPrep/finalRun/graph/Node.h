#include <cstdlib>

class Node
{
private:
	Node *next;
	int value;
public:

	Node()
	{
		next = NULL;
	}
		
	Node(int iValue)
	{
	 value = iValue;
	 next = NULL;
	}	
	~Node()
	{
	 next = NULL;	
	}

	int getValue()
	{
	 return value;
	}

	Node* getNext()
	{
		return next;
	}

	void setNext(Node* a)
	{
		next = a;
	}

};