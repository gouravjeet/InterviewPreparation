#include <iostream>
#include <string>
using namespace std;

void reverseRec(string &input,int i,int j)
{
 if(i>j)
 {
 	return;
 }
 char temp = input[i];
 input[i] = input[j];
 input[j] = temp;
 reverseRec(input,i+1,j-1);
}

void reverseInternal(string &input)
{
	int i=0,j=0;
	while(j<=input.size())
	{
		if((input[j]==' ') || j>input.size()-1)
		{
			reverseRec(input,i,j-1);
			i=j+1;j++;		
		}
		else
		{
			j++;
		}
	}
	return;
}

void driverFunction(string &input)
{
	cout<<"\nBefore reverse "<<input<<"\n";
	reverseRec(input,0,input.size()-1);
	cout<<"\nindermediate reverse "<<input<<"\n";
	reverseInternal(input);
	cout<<"\nAfter reverse "<<input<<"\n";
}
int main()
{
 string input= "Sameer Sawla was here";
 driverFunction(input);
}