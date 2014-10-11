#include<cstdlib>	
class treeNode
{
 private:
 	int value;
 	treeNode *left;
 	treeNode *right;
 public:
 	treeNode()
 	{
 	 left=NULL;
 	 right=NULL;
 	}

 	treeNode(int valueI)
 	{
 		value = valueI;
 	}

 	~treeNode()
 	{
 		
 	}

 	int getValue()
 	{
 		return value;
 	}

 	treeNode *getLeft()
 	{
 		return left;
 	}


 	treeNode *getRight()
 	{
 		return right;
 	}

 	void setLeft(treeNode* leftI)
 	{
 		left = leftI;
 	}

 	void setRight(treeNode* rightI)
 	{
 		right = rightI;
 	}
};