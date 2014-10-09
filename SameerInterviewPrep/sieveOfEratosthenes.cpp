#include<iostream>
#include<vector>

using namespace std;
void sieveOfEratosThenes(vector<int> &input)
{
	input[0] = 0;
	for(unsigned int i=1;i<input.size();i++)
	{
		if(input[i]!=0)
		{
			int tempMultiplierIndice = 2;
			int calculatedValue = input[i] * tempMultiplierIndice;
			while(calculatedValue<=input.size())
			{
				input[calculatedValue-1]=0;
				tempMultiplierIndice++;
				calculatedValue = input[i] * tempMultiplierIndice;
			}
		}
	}
}
int main()
{
	vector<int> values;

	for(int i =1;i<101;i++)
	{
		values.push_back(i);
	}

	sieveOfEratosThenes(values);

	cout<<"\nPrinting prime numbers\n";

	for(unsigned int i =0;i<values.size();i++)	
	{
		if(values[i]!=0)
		{
			cout<<values[i]<<"\n";
		}
	}

}