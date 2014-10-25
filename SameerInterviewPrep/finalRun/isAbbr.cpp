#include <iostream>
#include <string>

using namespace std;

bool isAbbr(string input,string abbr)
{
	if(abbr.size()>input.size()){return false;}
	int i=0,j=0;
	while(i<input.size() && j<abbr.size())
	{
		if(input[i]==abbr[j])
		{
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	if(i<input.size())
	{
		return true;
	}
	else if(j<abbr.size()) { return false;}
	return false; 
}

int main()
{
	string input = "sameer sawla was here";
	string possibleAbbr = "sswh";
	cout<<isAbbr(input,possibleAbbr);
	return 0;
}