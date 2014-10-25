#include <iostream>
#include <array>
using namespace std;

void mergeTwoArray(std::array<int,11> arr1,std::array<int,10> arr2){
		int m=arr1.size();
		int n=arr2.size();
		int index1=0,index2=0;
		cout<<"M and n"<<m<<n;
		if(m>n){
			for(index1=0;index1<m && index2<n;){
				if(arr1[index1]<=arr2[index2]){
					cout<<arr1[index1]<<" "<<"<==index1 ==>"<<index1<<" ";
					if(index1==m){
						
					}
					else{
						index1++;
					}
					
				}
				else{
					cout<<arr2[index2]<<" "<<"<==index2==>>"<<index2<<" ";
					if(index2==n){
						
					}
					else{
						index2++;
					}
					
				}				
			}
			while(index1<m){
				cout<<arr1[index1];
				index1++;
			}
			while(index2<m){
				cout<<arr2[index2];
				index2++;
			}

		}
		else{

		}
		
	}
int main(){
	std::array<int,11> arr1={1,4,7,8,9,17,19,29,56,67,89};
	std::array<int,10> arr2={11,14,17,18,20,24,25,26,34,56};
	
	mergeTwoArray(arr1,arr2);
	return 0;
}