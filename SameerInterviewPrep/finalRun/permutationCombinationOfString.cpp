#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void perm(string &one,int k,int &count)
{
	if(k==0)
	{
		count++;
		cout<<"\n"<<count<<". "<<one<<"\n";
		if(one=="I AM LORD VOLDEMORT")
		{
			cout<<"\nHarry Potter : Found you buddy... at "<<count<<"\n";
			exit(0);
		}
		return;
	}

	for(int i=k;i>=0;i--)
	{
		char temp = one[i];
		one[i] = one[k];
		one[k] = temp;

		perm(one,k-1,count);

		temp = one[i];
		one[i] = one[k];
		one[k] = temp;

	}
}

int main()
{
	string one = "TOM MARVOLO RIDDLE";
	int count = 0;
	perm(one,one.size()-1,count);
	return 0;
}
