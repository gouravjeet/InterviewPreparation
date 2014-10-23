#include <string>
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	string str = "s,a,m,e,e,r";
	vector<string> results;
    boost::split(results, str, boost::is_any_of(","));
    cout<<"\n";
    for(int i=0;i<results.size();i++)
    {
    	cout<<results[i]<<" ";
    }
    cout<<"\n";

	return 0;
}