#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
using namespace std;
int main (){
	
	vector<int> v;
	for(int i=0;i<100;i++){
		v.push_back(i+1);
	}
	int temp=2;
	v[0]=0;
	for(int i=2;i<=100;i++){
		for(int j=2;j*i<=100;j++){
			v[i*j-1]=0;
		}
		
	}
	for(int i=0;i<100;i++){
		if(v[i]==0){
		}
		else{
			cout<<v[i]<<"\n";
		}
	}
	return 0;
}	