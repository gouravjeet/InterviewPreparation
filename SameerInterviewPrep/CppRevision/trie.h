#include "trieNode.h"
#include <cstdlib>
using namespace std;
class Trie
{
public:
	trieNode *root;
	Trie()
	{
		root = new trieNode;
	}
	int rIndex(char inputC)
	{
		return (int)inputC - (int)'a';
	}
	void insert(trieNode *node,string inputS)
	{
        for(int i=0;i<inputS.size();i++)
        {
        	int index = rIndex(inputS[i]);
        	if(node->children[index]==NULL)
        	{
        	 trieNode *temp = new trieNode(inputS[i]);
        	 node->children[index] = temp;
        	}
        	node = node->children[index];
        }
        node->setBreakPoint();
	}

	void insert(string inputS)
	{
		insert(root,inputS);
	}

	bool search(trieNode* node,string inputS)
	{
     for(int i=0;i<inputS.size();i++)
     {
     	int index = rIndex(inputS[i]);
     	if(node->children[index]==NULL){return false;}
     	else
     	{
     		node = node->children[index];
     	}
     } 
     if(node->getBreakPoint())
     {
     	return true;
     }
     return false;
	}

	bool search(string inputS)
	{
		return search(root,inputS);
	}


};