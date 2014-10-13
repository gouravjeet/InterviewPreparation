#include <iostream>
#include <string>
#include "Trie.h"
using namespace std;

int main()
{
	Trie one;
	string input = "bameer";
	one.insert(input);


	input = "bameer";
	if(one.search(input)==1)
	{
		cout<<"\nMil gaya bhyau\n";
	}
	else
	{
		cout<<"\nNi Mila bhyau\n";
	}
	return 0;
}