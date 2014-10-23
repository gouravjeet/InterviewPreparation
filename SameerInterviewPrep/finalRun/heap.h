#include <iostream> 
#include <vector>

using namespace std;

class Heap
{
public:
 vector<int> items;

 void siftup()
 {
 	if(items.size()==1)
 	{
 		return;
 	}
 	int end = items.size()-1;
 	while(end>0)
 	{
 		int p = (end-1)/2;
 		if(p>=0)
 		{
 			if(items[end]>items[p])
 			{
	 			int temp = items[end];
	 			items[end] = items[p];
	 			items[p] = temp;
	 			end = p;
	 		}
	 		else
	 		{
	 			break;
	 		}
 		}
 		else
 		{
 			break;
 		}
 	}
 	return;
 }
 
 void siftdown()
 {
 	int i=0;
 	while(i<=items.size())
 	{
 		int left = 2*i+1;
 		int right = 2*i+2;
 		if(right>items.size())
 		{
 			if(items[i]<items[left])
 			{
	 			int temp = items[i];
	 			items[i] = items[left];
	 			items[left] = temp;
	 			i=left;
 			}
 			else
 			{
 				break;
 			}
 		}
 		else
 		{
 			int max = items[left]>items[right]?left:right;
 			int temp = items[i];
 			items[i] = items[max];
 			items[max] = temp;	
 			i = max;
 		}
 	}
 }

void insert(int inputI)
{
	items.push_back(inputI);
	siftup();
}
void display()
{
	if(items.size()==0)
	{
	cout<<"\nEmpty Vector\n";
	return;		
	}
	cout<<"\n";
	for(int i=0;i<items.size();i++)
	{
		cout<<" "<<items[i]<<" ";		
	}
	cout<<"\n";
	return;
}
};