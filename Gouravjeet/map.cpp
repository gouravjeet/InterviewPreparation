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
#include <map>
using namespace std;

int main(){
	string name;
	int pop;

	int pops[]={12,35,56,78,33};
	string names[]={"george","aayush","chetan","krishna","ss","vinay"};
	map<string,int, less<string> > namemap;
	map<string,int, less<string> >::iterator iter;
	for(int j=0;j<6;j++){
		name=names[j];
		pop=pops[j];
		namemap[name]=pop;
	}
	pop=namemap["george"];
	cout<<pop;
	for(iter=namemap.begin();iter !=namemap.end();iter++){
		cout<<"value of "<<(*iter).first<<"is"<<(*iter).second<<"\n";
	}

	return 0;



}