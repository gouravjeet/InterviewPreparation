#include "BST.h"
#include <vector>
using namespace std;

 void deSerialize(char* a)
 {
 	ifstream iFile(a);
 	BST two;
 	char ch;
 	while (EOF != (ch = iFile.get()))
 	{
 		if(ch!='#')
 		{
 			int chTemp = ch - 48;
 			two.insert(chTemp);
 		}
 	}

 	cout<<"\nTree successfully processed from file...\n";
 	cout<<"\nTable looks as follows : \n";
 	two.preOrder();
 }

 int findInOrder(vector<int> &inOrder,int x)
 {
  for(int i=0;i<inOrder.size();i++)
  {
    if(x==inOrder[i])
    {
      return i;
    }
  }
 } 

 treeNode* generateFromPreAndInorder(vector<int> &preOrder,vector<int> &inOrder,int start,int end)
 {
  static int preIndex = 0;
  cout<<"\npreIndex "<<preIndex<<"\n";
  if(start>end)
  {
  	return NULL;
  }	
    treeNode* node = new treeNode(preOrder[preIndex++]);
  if(start==end)
  {
  	return node;
  }

  int inIndex = findInOrder(inOrder,node->getValue());
  node->setLeft(generateFromPreAndInorder(preOrder,inOrder,start,inIndex-1));
  node->setRight(generateFromPreAndInorder(preOrder,inOrder,inIndex+1,end));

  return node;

 }

 
 void preOrder(treeNode* inputPtr)
 {
 	if(inputPtr == NULL
 		)
 	{
 		return;
 	}

 	cout<<inputPtr->getValue()<<" ";
 	preOrder(inputPtr->getLeft());
 	preOrder(inputPtr->getRight());
 }
int main()
{
	BST one;
	// one.insert(13);
	// one.insert(3);
	// one.insert(1);
	// one.insert(4);
	// one.insert(2);
	// one.insert(12);
	// one.insert(14);
	// one.insert(18);
	// one.preOrder();

	int io[]={13,9,17,6,5,11,2};
	vector<int> ioV(io,io+sizeof(io)/sizeof(int));

 	int pre[]={6,9,13,17,11,5,2};
 	vector<int> preV(pre,pre+sizeof(pre)/sizeof(int));

	treeNode* head = generateFromPreAndInorder(preV,ioV,0,preV.size());
	preOrder(head);
	// char a[]="hello.txt";
	// one.serialize(a);	
	// deSerialize(a);
	return 0;
}
