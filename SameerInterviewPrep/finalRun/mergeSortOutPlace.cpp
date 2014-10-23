#include <iostream>

using namespace std;

void display(int a[5])
{
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}

void merge(int a[5],int finalArray[5],int low, int mid, int high)
{
	int i=	low;
	int j = mid+1;
	int k = low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			finalArray[k] = a[i];
			i++;
			k++;
		}
		else
		{
			finalArray[k] = a[j];
			j++;
			k++;
		}
	}
	if(i<=mid)
	{
		while(i<=mid)
		{
			finalArray[k] = a[i];
			i++;k++;
		}
	}
	if(j<=high)
	{
		while(j<=high)
		{
			finalArray[k] = a[j];
			j++;k++;
		}
	}

	for(int h=low;h<=high;h++)
	{
		a[h] = finalArray[h];
	}
}

void mergeSort(int a[5],int finalArray[5],int low,int high)
{
 if(low>=high)
 {
 	return;
 }
 int mid = (low+high)/2;
 // int temp1[mid-low];
 // for(int i=0;i<mid;i++)
 // {
 // 	temp1[i] = a[i];
 // }
 // int temp2[high-mid+1];
 // for(int i=mid,j=0;i<=high;i++,j++)
 // {
 //   	temp2[j] = a[i];
 // }

 mergeSort(a,finalArray,low,mid);
 // cout<<"\n1. ";
 // display(a);
 // cout<<"\n.1";

 mergeSort(a,finalArray,mid+1,high);
 // cout<<"\n2. ";
 // display(a);
 // cout<<"\n.2";

 merge(a,finalArray,low,mid,high);
 cout<<"\n3. ";
 display(a);
 // cout<<"\n";
 // display(finalArray);
 // cout<<"\n.3";
}



int main()
{

	int a[5] = {6,2,0,5,7};
	int finalArray[5];
	cout<<"\nBefore Sorting : \n";
	display(a);
	mergeSort(a,finalArray,0,4);

	cout<<"\nAfter Sorting : \n";
	display(finalArray);
	return 0;
}