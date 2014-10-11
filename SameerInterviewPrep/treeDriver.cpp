#include "BST.h"

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

int main()
{
	BST one;
	one.insert(3);
	one.insert(1);
	one.insert(4);
	one.preOrder();

	char a[]="hello.txt";
	one.serialize(a);	
	deSerialize(a);
	return 0;
}
