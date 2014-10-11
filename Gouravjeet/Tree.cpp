
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <array>
#include <fstream>
//You are given two sorted arrays, of sizes n and m respectively. 
//Your task (should you choose to accept it), is to output the largest k sums of the form a[i]+b[j].
using namespace std;
class Node{
public:
	int data;
	Node *left;
	Node *right;

	Node(int d){
		this->data=d;
	}
};
class Tree{
public:
	Node *root;
	void addElement(int element){
		Node *newNode=new Node(element);
		Node *current=root;
		if(root==NULL){
			root=newNode;
			cout<<"root Elements"<<root->data;
			return;
		}
		while(current->left!=NULL && current->right!=NULL){
			if(element<current->data){
				current=current->left;
			}
			else {
				current=current->right;
			}	
		}
		if(element<current->data){
			current->left=newNode;
			cout<<"left Elements"<<current->left->data;
		}
		else {
			current->right=newNode;
			cout<<"right Elements"<<current->right->data;
		}		
	}
	void preOrder(Node *root,ofstream &myfile){
		if(root==NULL){
			myfile<<"#";
			return;
		}
			myfile<<root->data;
			preOrder(root->left,myfile);
			preOrder(root->right,myfile);
	}
	void TreeSerialization(){
		ofstream myfile;
		myfile.open("example.txt");
		preOrder(root,myfile);
		myfile.close();
	}
	
};
void Deserialization(Tree *l1){
	ifstream istr;
	char c;
	istr.open("example.txt");
	c=istr.get();
	while(!istr.eof()){
		if(c=='#'){
			c=istr.get();
		}
		else{
			//cout<<c;
			int a=(c-48);
			//cout<<a;
			l1->addElement(a);
			c=istr.get();
		}
		
	}
	istr.close();
}
int main (){
	Tree *l=new Tree();
	 l->addElement(4);
	 l->addElement(1);
	 l->addElement(9);
	 l->TreeSerialization();
	 Tree *l1=new Tree();
	 Deserialization(l1);
	


}