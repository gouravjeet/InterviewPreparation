#include <iostream>

using namespace std;

int giveOne()
{
	return 1;
}

int getTwo()
{
	return 2;
}

int main()
{
	int array[] = {1,2,3,4,5};
	int left = 1,right = 2;
	int maxNumber  = left>right?array[left]:array[right];
	cout<<maxNumber;
	return 0;
}