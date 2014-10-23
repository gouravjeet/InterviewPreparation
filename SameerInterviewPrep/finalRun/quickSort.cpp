#include <iostream>

using namespace std;

int getPIndex(int a[],int low,int high)
{
	int pivot = high;
	int wall = low;
	int traversor = low;
	while(traversor!=pivot)
	{
		if(a[traversor]<a[pivot])
		{
			int temp = a[traversor];
			a[traversor] = a[wall];
			a[wall] = temp;
			wall++;
			traversor++;	
		}
		else
		{
			traversor++;
		}
	}
	int temp = a[pivot];
	a[pivot] = a[wall];
	a[wall] = temp;
	pivot = wall;
	return pivot;
}

void quickSort(int a[5],int low,int high)
{

 if(low>=high)
 {
 	return;
 }
 int pIndex = getPIndex(a,low,high);
 quickSort(a,low,pIndex-1);
 quickSort(a,pIndex,high);

}

int main()
{

	int a[5] = {6,2,0,5,7};
	cout<<"\nBefore Sorting : \n";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}

	quickSort(a,0,4);

	cout<<"\nAfter Sorting : \n";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}