#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

void calculate_k_highest(vector<int> &sorted1,vector<int> &sorted2,int k)
{

 		
 	assert(k <= sorted1.size() + sorted2.size());
 	int i = sorted1.size()-1;
 	int j = sorted2.size()-1;
 	unsigned sorted2DiffPartTwo = 0;
 	unsigned sorted1DiffPartTwo = 0;
 	cout<<"\n";
 	for(unsigned int h=1;h<=k;h++)
 	{
 		cout<<h<<". "<<sorted1[i]+sorted2[j]<<"\n";
 		if(i!=0)
 		{
 			sorted1DiffPartTwo = sorted1[i-1];
 		}
 		
 		if(j!=0)
 		{
 			sorted2DiffPartTwo = sorted2[j-1];	
 		}

 		int sorted1Diff = sorted1[i] - sorted1DiffPartTwo;
 		int sorted2Diff = sorted2[j] - sorted2DiffPartTwo;
 		if(sorted1Diff<sorted2Diff)
 		{
 			if(i!=0)
 			{
 			 i--;
 			}
 			else
 			{
 			 j--;
 			}
 		}
 		else
 		{
 			if(j!=0)
 			{
 			 j--;
 			}
 			else
 			{
 			 i--;	
 			}
 		}
 	}	
}

int main()
{
	vector<int> sorted1;
	vector<int> sorted2;

	sorted1.push_back(2);
	sorted1.push_back(3);
	sorted1.push_back(4);
	sorted1.push_back(6);
	sorted1.push_back(50);
	sorted1.push_back(55);
	
	sorted2.push_back(2);
	sorted2.push_back(88);
	sorted2.push_back(90);
	sorted2.push_back(145);	

	calculate_k_highest(sorted1,sorted2,8	);
	return 0;
}