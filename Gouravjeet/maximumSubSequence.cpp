#include <iostream>
using namespace std;
int max(int x, int y){
	return (y>x)?y:x;
}
int maxSubArraySum(int a[], int size){
	int max_so_far=a[0],i;
	int current_max=a[0];
	for(i=1;i<size;i++){
		cout<<"<<";
		cout<<i<<"";
		cout<<">>";
		current_max=max(a[i],current_max+a[i]);
		
		max_so_far=max(max_so_far,current_max);
		cout<<max_so_far<<"\n";
	}
	return max_so_far;
}
int main(){
	int a[]={2,4,5,-3,6,12};
	int n=sizeof(a)/sizeof(a[0]);
	int max_sum=maxSubArraySum(a,n);
	//cout<< max_sum;
	return 0;
}