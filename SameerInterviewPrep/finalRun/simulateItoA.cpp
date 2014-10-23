#include<iostream>
#include<string>
#include<stack>
using namespace std;

void simulateItoA(int a)
{
	stack<int> one;
	one.push(a%10);
	a = a/10;
	while(a>=1)
	{
		one.push(a%10);
		a = a/10;
	}
	cout<<"\n";
	
	while(!one.empty())
	{
		char c = one.top()+48;
		one.pop();
		cout<<c;
	}
	cout<<"\n";
}

int main()
{
 int one = 1234;
 simulateItoA(one);
}