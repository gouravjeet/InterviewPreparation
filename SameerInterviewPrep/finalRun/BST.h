#include <iostream>
#include <fstream>
#include <string>
#include <vector> 
#include <queue>
#include "treeNode.h"
using namespace std;
class BST
{
public:
 treeNode *root;	
 BST()
 {
 	root = NULL;
 }

 treeNode* insert(treeNode *node,int valueI)
 {
  treeNode *temp = new treeNode(valueI);	
  treeNode *traverser = root;	
  if(node==NULL)
  {
   return temp; 
  }
  if(valueI<=node->getValue())
  {
   node->setLeft(insert(node->getLeft(),valueI));	
  }
  else
  {
   node->setRight(insert(node->getRight(),valueI));	
  }
  return node;
 }

 void insert(int valueI)
 {
 	root = insert(root,valueI);
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
 
 void preOrder(treeNode* inputPtr,ofstream &ost)
 {
 	if(inputPtr == NULL)
 	{
 		ost<<"#";
 		return;
 	}

 	ost<<inputPtr->getValue();
 	preOrder(inputPtr->getLeft(),ost);
 	preOrder(inputPtr->getRight(),ost);
 }

 void preOrder()
 {
   treeNode *temp = root;	
   preOrder(temp);
 }

 void serialize(char* a)
 {
   // char b[]	 = "hello.txt";	
   ofstream oFile(a);
   treeNode *temp = root;		
   preOrder(temp,oFile);
   oFile.close();
 }

  void BFS(treeNode *node)
  {
    if(node==NULL)
    {
      return;
    }
    cout<<"\n";
    cout<<node->getValue()<<" ";
    std::queue<treeNode*> Q;
    Q.push(node->getLeft());
    Q.push(node->getRight());

    while(!Q.empty())
    {
      treeNode *temp = Q.front();
      Q.pop();
      if(temp!=NULL)
      {
        std::cout<<temp->getValue()<<" ";
        Q.push(temp->getLeft());
        Q.push(temp->getRight());
      }
    }
    cout<<"\n";
  }
  void BFS()
  {
    BFS(root);
  }
};