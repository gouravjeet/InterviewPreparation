#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <array>
#include <cmath>
//You are given two sorted arrays, of sizes n and m respectively. 
//Your task (should you choose to accept it), is to output the largest k sums of the form a[i]+b[j].
using namespace std;

int countConsecutive(char *a){
	int length=sizeof(a);
	int count=0;
	for(int i=0;i<length;i++){
		if(a[i]>=48 && a[i]<=57){
			count++;
		}
	}
	return count;
}
int aTOI(char *a){
		int length=sizeof(a);
		int d=0;
		int number=0;
		if(a[0]>=97 && a[0]<=122){
			return 0;
		}
		int times=0;
		times=countConsecutive(a);
		//cout<<times;
		for(int i=0;i<length;i++){
			if(a[i]>=48 && a[i]<=57){
				//cout<<"hi";
				number=number+((a[i]-48)*pow(10,times-1));
				times--;	
			}
		}
	return number;
	}


int main (){
	//string to Integer
	// char a[]="b233b";
	// int b=atoi(a);
	// cout<<b;
	char a[]="233b";
	char c='5';
	//int b=c;
	int b =aTOI(a);
	cout<<b;
	return 0;
}