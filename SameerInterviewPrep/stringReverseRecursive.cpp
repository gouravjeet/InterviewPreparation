#include<iostream>
#include<string>
using namespace std;

void rR(string &a,int i,int j)
{
	if(i>=j)
	{
		return;
	}
	char temp = a[i];
	a[i] = a[j];
	a[j] = temp;

	rR(a,i+1,j-1);
	return;
}

// void reverseEntireString(string &a)
// {
//  int i=0,j=0;
//  while(i>a.size())
//  {
//  	if(a[i]==' ')
//  	{
//  		rR(a,i,j);
//  		i++;
//  	}
//  }
// }
int main()
{
	string a = "i like this program very much";

	cout<<"\nBefore "<<a<<"\n";
	rR(a,0,a.size()-1);
	cout<<"\nAfter "<<a<<"\n";

	return 0;
}