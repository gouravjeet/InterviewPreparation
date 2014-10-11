#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <array>
#include <cmath>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
bool sortCheck(char* s1,char* s2);
int main(){

	char* names[]={"george","aayush","chetan","krishna"};
	sort(names,names+4,sortCheck);
	for(int j=0;j<4;j++){
		cout<<names[j]<<endl;
	}
	list<int> l;
	list<int>::reverse_iterator itr;
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	int data=0;
	itr=l.rbegin();
	
	for(itr=l.rbegin();itr!=l.rend();itr++){
		cout<<*itr;
	}
	int size=l.size();
	for(int j=0;j<size;j++){
		cout<<l.front();
		l.pop_front();

	}
	return 0;

}
bool sortCheck(char* s1,char* s2){
		return (strcmp(s1,s2)<0) ? true : false;
	}

