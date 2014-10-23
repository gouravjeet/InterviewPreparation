#include <iostream>
#include <string>
#include <cstring>

//Function to simulate strcmp function defined in 'cstring.h' header file
int strcmpImplementation(const std::string &compareStringOne, const std::string &compareStringTwo)
{
 const int sizeStringOne = compareStringOne.size();
 const int sizeStringTwo = compareStringTwo.size();

 if(sizeStringOne == sizeStringTwo)
 {
 	int iterator=0;
 	while(iterator<sizeStringOne)
 	{
 		char charOne = compareStringOne[iterator];
 		char charTwo = compareStringTwo[iterator];
 		if(charOne!=charTwo)
 		{
 			return charOne-charTwo;
 		}
 		iterator++;
 	}	
 	return 0;
 }
 else
 {
 	return sizeStringOne>sizeStringTwo?compareStringOne[sizeStringTwo]:-compareStringTwo[sizeStringOne];
 }
}

int main()
{
 std::string inputOne = "Sameer";
 std::string inputTwo = "sameer";	

 //Call the simulator function
 std::cout<<strcmpImplementation(inputOne,inputTwo);
}