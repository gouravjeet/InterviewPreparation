#include <iostream>
#include <vector>
#include <string>	
#include <cstring>

using namespace std;

void display(vector<string> inputV)
{
	cout<<"\n";
	for(int i=0;i<inputV.size();i++)
	{
		cout<<inputV[i]<<",";
	}
	cout<<"\n";
}

vector<string> split(string &input,char delim)
{
	vector<string> result;
	string tempBuffer="";

	for(int i=0;i<input.size();i++)
	{
		if(input[i]==delim)
		{
			if(tempBuffer.size()!=0)
			{
				result.push_back(tempBuffer);
				tempBuffer="";
			}
			else
			{
				string temp(1,input[i]);
				tempBuffer = tempBuffer + temp;
			}
		}
		else
		{
			string temp(1,input[i]);
			tempBuffer = tempBuffer + temp;
		}
	}
	if(tempBuffer.size()!=0)
	{
		result.push_back(tempBuffer);
	}
	display(result);
	return result;
}



int main()
{
 string one = "sameer sawla was here";
 split(one,' ');
}