#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <array>
//You are given two sorted arrays, of sizes n and m respectively. 
//Your task (should you choose to accept it), is to output the largest k sums of the form a[i]+b[j].
using namespace std;
int main (){
	int k=5;
	int arr1[]={2,3,5,6,50,55};
	int arr2[]={2,88,90,145};  // largest elements would be 200,195,145,143,140
	
	int i=sizeof(arr1)/sizeof(int);
	int j=sizeof(arr2)/sizeof(int);
	i=i-1;
	j=j-1;	
	for(k=5;i>0 && j>0 && k>0;k--){
		if(arr1[i]>arr2[j]){ // if array 1 last element is greater than array2
			cout<<"Numbers are :"<<arr1[i]+arr2[j]<<"\n";
			j--;
		}
		else{

			cout<<"Numbers are :"<<arr1[i]+arr2[j]<<"\n";
			i--;

		}
	}
	return 0;
}	