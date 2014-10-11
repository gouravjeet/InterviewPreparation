
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <array>
//You are given two sorted arrays, of sizes n and m respectively. 
//Your task (should you choose to accept it), is to output the largest k sums of the form a[i]+b[j].
using namespace std;
class Node{
public:
	int data;
	Node *next;
	Node(int d){
		this->data=d;
	}
};


class LinkedList{
public:
	Node *root;
	void addElement(int element){
		Node *newNode=new Node(element);
		Node *current=root;
		if(root==NULL){
			root=newNode;
			//cout<<root->data;
			return;
		}
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=newNode;
	}
	void reverse(){
		Node* a=root;
		Node* b=root->next;
		Node* c=root->next->next;
		a->next=NULL;
		while(c!=NULL){
			b->next=a;
			a=b;
			b=c;
			c=c->next;
		}
		b->next=a;
		
		c=b;
		root=c;
	}
	void deleteElement(int delElem){
		Node *current=root;
		if(current==NULL){
			cout<<"LinkedList is empty";
		}
		if(root->data==delElem){
			root=root->next;
			cout<<"element deleted";
			return;
		}
		while(current->next!=NULL) {
			if(current->next->data==delElem){
				current->next=current->next->next;
				cout<<"element deleted";
				return;
			}
			current=current->next;
		}//reaches last element or where it needs to delete addElement
		cout<<"Element not found";
	}
};
class UsageClass{
public:
	void AddNumberFromTwoLinkedList(LinkedList *l,LinkedList *l1,LinkedList *l3){
		Node* current1=l->root;
		Node* current2=l1->root;
		int carry=0;
		Node* current3=l3->root;
		int number=0;
		int sum=0;
		while(current1!=NULL && current2!=NULL){

			if(current1->data+current2->data>9){
				
				number=current1->data+current2->data-10+carry;
				l3->addElement(number);
				carry=1;
			}
			else{
				number=current1->data+current2->data+carry;
				l3->addElement(number);
				carry=0;
			}
			current1=current1->next;
			current2=current2->next;
		}
		if(current1!=NULL){
			while(current1!=NULL){
				l3->addElement(current1->data);
			}
		}
		else if(current2!=NULL){
			while(current2!=NULL){
				l3->addElement(current2->data);	
				current2=current2->next;
			}
		}
		l3->reverse();
		current3=l3->root;

		while(current3!=NULL){
			cout<<current3->data;
			current3=current3->next;
		}
	}

};

int main (){
	LinkedList *l=new LinkedList();
	l->addElement(4);
	l->addElement(1);
	l->addElement(9);
	LinkedList *l1=new LinkedList();
	l1->addElement(9);
	l1->addElement(5);
	l1->addElement(2);
	//l1->addElement(2);
	LinkedList *l3=new LinkedList();
	UsageClass *uc=new UsageClass();

	uc->AddNumberFromTwoLinkedList(l,l1,l3);
	 // l->deleteElement(4);
	 // l->deleteElement(43);
	


}