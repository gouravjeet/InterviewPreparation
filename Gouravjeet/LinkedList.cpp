
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
		//cout<<current->next->data;


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
int main (){
	LinkedList *l=new LinkedList();
	l->addElement(4);

	 l->addElement(10);
	 l->addElement(245);
	 l->deleteElement(4);
	 l->deleteElement(43);

}