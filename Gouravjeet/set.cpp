#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <array>
#include <cmath>
#include <algorithm>
#include <string>
#include <list>
#include <set>
using namespace std;

int main(){
	string names[]={"george","aayush","chetan","krishna"};
	set<string, greater<string> > nameset(names,names+5);
	set<string, greater<string> >::iterator iter;
	nameset.insert("dara");
	nameset.insert("sameer");
	nameset.insert("mayur");
	nameset.insert("harsh");
	nameset.erase("mayur");
	iter=nameset.begin();
	while(iter!=nameset.end()){
		cout<<*iter++<<endl;
	}



}