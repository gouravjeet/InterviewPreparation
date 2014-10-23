#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <stack>
#include <cassert>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

bool isOperator(string input)
{
	if(input=="+" || input=="-" || input=="*" || input=="/")
	{
		return true;
	}
	return false;
}

string calc(string operatorC,string op1,string op2)
{
	int opI1 = boost::lexical_cast<int>(op1);
	int opI2 = boost::lexical_cast<int>(op2);
	if(operatorC=="+"){ return boost::lexical_cast<string>(opI1+opI2);}
	if(operatorC=="-"){ return boost::lexical_cast<string>(opI1-opI2);}
	if(operatorC=="*"){ return boost::lexical_cast<string>(opI1*opI2);}
	else
	{
		assert(opI2!=0);
		return boost::lexical_cast<string>(opI1/opI2);
	}

	
}
	
 void display(vector<string> inputV)
 {
 	cout<<"\n";
 	for(int i=0;i<inputV.size();i++)
 	{
 		cout<<inputV[i]<<" ";
 	}
 	cout<<"\n";
 }
	
int main()
{
	string one = "-,+,*,2,3,*,5,4,9";
	vector<string> splitStrings;
	stack<string> containerStack;
	boost::split(splitStrings,one,boost::is_any_of(","));
	display(splitStrings);
	for(int i=splitStrings.size()-1;i>=0;i--)
	{	
		if(!isOperator(splitStrings[i]))
		{
			cout<<"\n"<<"If"<<"\n";
			containerStack.push(splitStrings[i]);
		}
		else
		{
			cout<<"\n"<<"Else"<<"\n";
			
			if(containerStack.empty())
			{
				cout<<"\nempty\n";
				break;
			}
			string op1 = containerStack.top();
			containerStack.pop();

			if(containerStack.empty())
			{
				cout<<"\nempty\n";
				break;
			}
			string op2 = containerStack.top();
			containerStack.pop();

			containerStack.push(calc(splitStrings[i],op1,op2));

		}
		cout<<i<<" "<<splitStrings[i];
	}
	cout<<"\n"<<"Out for"<<"\n";
	cout<<containerStack.top()<<"\n";
	containerStack.pop();


}