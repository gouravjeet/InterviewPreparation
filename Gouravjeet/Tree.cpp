
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
int searchInorder(int *io, int elem, int startindex,int endindex ){
	int i;
	for(int i=startindex;i<=endindex-1;i++){
		if(io[i]==elem){
			return i;
		}
	}
	return -1;
}
Node* constructTree(int *io, int *pre, int startindex,int endindex){
	static int preIndex=0;
	int i=0;
	
	if(startindex>endindex){
		return NULL;
	}

	Node* newNode=new Node(pre[preIndex++]);
	if(startindex==endindex)
	{
		cout<<newNode->data;
		return newNode;
	}	

	int index=0;
	index=searchInorder(io,newNode->data,startindex,endindex);
	// cout<<index;
	cout<<newNode->data;
	// //return NULL;
	newNode->left=constructTree(io,pre,startindex,index-1);
	newNode->right=constructTree(io,pre,index+1,endindex);
	return newNode;
	

}
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
	// Tree *l=new Tree();
	//  l->addElement(4);
	//  l->addElement(1);
	//  l->addElement(9);
	//  l->TreeSerialization();
	//  Tree *l1=new Tree();
	//  Deserialization(l1);

	 int io[]={13,9,17,6,5,11,2};
	 int pre[]={6,9,13,17,11,5,2};
	 int startindex=0;
	 int endindex=sizeof(io)/sizeof(int);
	 //cout<<"length"<<endindex<<"HMM";
	 int bitMask=1; 
	 int b=io[0] & bitMask;
	 cout<<"Bit "<<b;
	 //Node * rootTree=constructTree(io,pre,0,endindex-1);
	


}