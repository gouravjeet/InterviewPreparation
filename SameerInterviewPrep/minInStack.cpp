//Finding minimum element in a stack

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	stack<int> stack1;
	stack<int> stack2;
	vector<int> values;
	values.push_back(2); 
	values.push_back(6);
	values.push_back(4);
	values.push_back(1);
	values.push_back(5);
	int min = values[0];
	for(unsigned int i=0;i<values.size();i++)
	{
		stack1.push(values[i]);
		if(values[i]<min)
		{
			min = values[i];
		}
		stack2.push(min);
	}

	cout<<"Push finished\n";

	cout<<"Pop starting\n";
	while(!stack1.empty())
	{	
		cout<<"\nMinimum when popping out "<< stack1.top() << " is " << stack2.top() << "\n";
		stack1.pop();
		stack2.pop();	
	}


	return 0;



}