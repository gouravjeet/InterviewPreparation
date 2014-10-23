#include <iostream>
#include "trie.h"

using namespace std;

int main()
{
 Trie testObj;
 testObj.insert("bed");
 testObj.insert("bedd");
 testObj.insert("bem");
 cout<<testObj.search("bed");
 cout<<testObj.search("bedd"); 
 cout<<testObj.search("bem");
}