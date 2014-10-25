
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
	Node* root;
	Node* parent;
	void addElement(int element){
		Node *newNode=new Node(element);
		cout<<newNode->data;
		if(root==NULL){
			root=newNode;
			//cout<<"root Elements"<<root->data;
			return;
		}
		else{
			Node *current=root;
			parent=current;
			while(true){
				cout<<element;
				if(element<current->data){
					current=current->left;
					if(current==NULL){
						parent->left=newNode;
						cout<<newNode->data;
						return;
					}
				}
				else {
					current=current->right;
					if(current==NULL){
						parent->right=newNode;
						cout<<newNode->data;
						return;
					}
				}	
			}		
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
	int Height(){
		Node* current=root;
		return Height(current);
	}
	//The code you provided is a form of DFS. Since you have to process all
	 //nodes to find the height of the tree, there will be no runtime difference 
	 //between DFS and BFS, although BFS will use O(N) memory 
	//while DFS will use O(logN) memory. BFS is also slightly more complex 
	//to code, since it requires a queue while DFS makes use of the "built-in" 
	//recursive stack.
	int Height(Node* current){

		if(current==NULL){
			return 0;
		}
		else{
			int lHeight=Height(current->left);
			int rHeight=Height(current->right);
			if(lHeight>rHeight){
				return lHeight+1;
			}
			else{
				return rHeight+1;
			}
		}
	}
	bool isBalancedTree(){
		Node* current=root;
		cout<<root->data;
		return true;
		//return isBalancedTree(current);
	}
	bool isBalancedTree(Node* current){
		// we need to check that at each level, whether the tree is balance or not
		if(current==NULL){
			return true;
		}
		int lHeight=Height(current->left);
		int rHeight=Height(current->right);
		if(abs(lHeight-rHeight) <=1 && isBalancedTree(current->left) && isBalancedTree(current->right)){
			return true;
		}
		return false;

	}
	bool isBST(Node* root){

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



bool isBST(Node* root){
	if(root==NULL){
		return true;
	}
	else{
		Node* lmax=maximum(root->left);
		Node* lmin=minimum(root->right);
		if(root->data>lmax && root->data<lmin){
			bool l=isBST(root->left);
			bool r=isBST(root->right);
			if(l && r){
				return true;
			}
			else{
				return false;
			}

		}
		else{
			return false;
		}

	}
	return true;

}
Node * minimum(Node * node){
	Node* current=node;
	while(current->left!=NULL){
		current=current->left;
	}
	return current;

}
Node* maximum(Node * node){
	Node* current=node;
	while(current->right!=NULL){
		current=current->right;
	}
	return current;
}
// It needs to be a binary search tree
Node* InorderSuccessor(Node* root, Node* n){
	Node* current=root;
	if(n->right!=NULL){
		return minimum(n->right);
	}
	// if we find the next as null, then we need to go the parent 
	Node* p=n->parent;
	while(p!=NULL && n==p->right){
		n=p;
		p=p->parent;
	}
	return p;
}
Node* LCABST(Node* root, Node* n1,Node* n2){
	Node* current=root;
	if(current==NULL){
		return NULL;
	}
	else if(current->data>n1 && current->data>n2){
		LCABST(current->left);
	}
	else if(current->data>n1 && current->data<n2 || current->data<n1 && current->data>n2){
		return current;
	}
	else if(current->data<n1 && current->data<n2){
		LCABST(current->right);
	}
}
// void printAllNodesSumValue(Node * root){

// }
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
void swap(char& a, char& b){
	char temp;
	temp=a;
	a=b;
	b=temp;
}
void permutation(string s, int i, int n){
	int j;
	if(i==n)
		cout<<s<<"\t";
	else {
		for(j=i;j<s.length();j++){
			swap(s[i],s[j]);
			permutation(s,i+1,n);
			swap(s[i],s[j]);
		}
	}
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
	Tree *l=new Tree();
	 l->addElement(4);
	 l->addElement(1);
	 l->addElement(2);
	 l->addElement(3);
	 l->addElement(33);
	 l->addElement(45);
	 l->addElement(42);
	 l->addElement(19);
	 l->addElement(9);

	 l->TreeSerialization();
	 Tree *l1=new Tree();
	 Deserialization(l);
	 int len=l->Height();
	 cout<<"length is "<<len;
	 //bool val=l->isBalancedTree();
	 //cout<<val;
	 // int io[]={13,9,17,6,5,11,2};
	 // int pre[]={6,9,13,17,11,5,2};
	 // int startindex=0;
	 // int endindex=sizeof(io)/sizeof(int);
	 // //cout<<"length"<<endindex<<"HMM";
	 // int bitMask=1; 
	 // int b=io[0] & bitMask;
	 // cout<<"Bit "<<b;
	 // string s;
	 // cout<<"enter the string:";
	 // cin>>s;
	 // permutation(s,0,s.length()-1);
	 // cout<<endl;
	 //Node * rootTree=constructTree(io,pre,0,endindex-1);
	


}