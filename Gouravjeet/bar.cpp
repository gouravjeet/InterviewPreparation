si#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <array>
#include <fstream>

using namespace std;
bool subSequence(string input, string abbr,int index1,int index2){
		if(index2==0) return true;
		if(index1==0) return false;
		if(input[index1-1]==abbr[index2-1]){
			return subSequence(input,abbr,index1-1,index2-1);
		}
		return subSequence(input,abbr,index1-1,index2);
	}

	
	bool Abbr(string input,string abbr,int index1,int index2){
		int a=input.size();
		int b=abbr.size();
		
		if(a<b){
			return 0;
		}
		else{
			while(index2<b && index1<a){
				if(input[index1]==' '){
					index1++;
				}
				if(abbr[index2]==' '){
					index2++;
				}
				if(input[index1]==abbr[index2]){
					cout<<index1<<"<--index1 index2-->"<<index2<<"i";
					index1++
					;
					index2++;
				}
				else{
					index1++;
				}
			}
			if(index2==abbr.size()-1){
				cout<<"this is a abbr";
				return 1;
			}
			else{
				cout<<"Not an abbreviation";
				return 0;
			}
		}

	}
int main()
{

	string input="this was our jeep";
	string abbr="th ws or jp";
	// check whether abbr is the abbreviation of the input or not
	int index1=0,index2=0;
	bool checkAbbr=Abbr(input,abbr,index1,index1);
	index1=input.size();
	index2=abbr.size();

	bool checkSubsequence=subSequence(input,abbr,index1,index2);
	if(checkSubsequence==true){
		cout<<"This is a subSequence";
	}
	else{
		cout<<"This is not a subSequence";	
	}
	
	return 0;
}