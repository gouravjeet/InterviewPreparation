#include <iostream>
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <array>
#include <fstream>

bool pairSum(int A[],int arr_size,int sum){
	int l,r;
	//After sorting
	l=0;
	r=arr_size-1;
	while(l<r){
		if(A[l]+A[r]==sum){
			return 1;
		}
		else if(A[l]+A[r]<=sum){
			l++;
		}
		else if(A[l]+A[r]>=sum){
			r--;
		}
	}
	return 0;
}
// time complexity is O(n)
bool pairSum(int A[],int arr_size,int sum){
	int i,temp;
	bool map[];
	for(int i=0;i<arr_size;i++){
		temp=sum-A[i];
		if(temp>=0 && map[temp]==1){
			cout<<"Find the sum";
		}
		map[arr[i]]=1;
	}
}
int main(){
	int A[]={1,4,5,6,33,-5};
	int n=11;
	int arr_size=6;


}
