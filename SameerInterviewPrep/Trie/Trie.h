#include "TrieNode.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class Trie
{
public:
 TrieNode* root;

 Trie()
 {
 	root = NULL;
 }
 
 void insert(std::string &one)
 {	
 	if(root==NULL)
 	{
     TrieNode* nodeA = new TrieNode();
     root = nodeA;
     TrieNode* nodeB = new TrieNode(one[0]);
     int index = (int)one[0] - (int)'a';
     root->children[index] = nodeB;
 	}
 	TrieNode *iNode = root;
 	for(int i=0;i<one.size();i++)
 	{
 		int index = (int)one[i] - (int)'a';
 		if(iNode->children[index]==NULL)
 		{
 		 TrieNode* nodeC = new TrieNode(one[i]);
 		 iNode->children[index] = nodeC;	
 		}	
 		else
 		{
 		 cout<<i;		
 		}
 		iNode = iNode->children[index];
 	}
 	return;
 }

 

 int search(std::string &one)
 {
 	if(root==NULL)
 	{
 		return 0;
 	}
 	TrieNode* iNode = root;

 	for(int i=0;i<one.size();i++)
 	{
 		int index = (int)one[i] - (int)'a';
 		if(iNode->children[index]!=NULL)
 		{
 		cout<<"\n i "<<i<<" "<<iNode->children[index]->getValue()<<" "<<one[i]<<"\n"; 			
 		}
 		if(iNode->children[index]==NULL || iNode->children[index]->getValue()!=one[i])
 		{
 			return 0;
 		}
 		iNode = iNode->children[index];
 	}
 	return 1;	
 }


};