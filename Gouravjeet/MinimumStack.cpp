#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
using namespace std;
//function minimumElement();
int main (){
	stack<int> snormal;
	stack<int> smin;
	vector<int> v;
	v.push_back(2);
	v.push_back(6);
	v.push_back(4);
	v.push_back(1);
	v.push_back(5);

	for(int i=0;i<v.size();i++){
		snormal.push(v[i]);
		if(i==0){
			smin.push(v[0]);
		}
		else{
			if(smin.top()<v[i]){
				smin.push(smin.top());
			}
			else{
				smin.push(v[i]);
			}
		}
	}
	while(!snormal.empty()){
		cout<<smin.top();
		smin.pop();
		snormal.pop();
	}
	
	return 0;

}