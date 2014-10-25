#include <iostream>
int binarySearch(int arr[],int low, int high, int no){
	if(high<low){
		return -1;
	}
	int mid=low+high/2;
	if(no==arr[mid]){
		return mid;
	}
	if(arr[mid]>arr[low]){ // checking whether left half is sorted or not
		if(arr[low]<=key && arr[mid-1]>=key){
			return binarySearch(arr,key,low,mid-1);
		}
		else{
			return binarySearch(arr,key,mid+1,high);
		}
	}
	//if right half is sorted
	else{
		if(arr[mid+1]>key && key<arr[high]){
			return binarySearch(arr,key,mid+1,high);
		}
		else{
			return binarySearch(arr,key,low,mid-1);
		}
	}
}

int main(){
	return 0;
}