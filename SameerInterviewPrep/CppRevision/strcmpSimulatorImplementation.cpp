#include <iostream>
#include <string>

//Function to simulate strcmp function defined in 'cstring.h' header file
int strcmp(const char *compareStringOne, const char *compareStringTwo) {

const int sizeStringOne = sizeof(compareStringOne)/sizeof(char);
 const int sizeStringTwo = sizeof(compareStringTwo)/sizeof(char);

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
 const char* inputOne = "Room777";
 const char* inputTwo = "Room778";	

 //Call the simulator function
 std::cout<<strcmp(inputOne,inputTwo)<<std::endl;
}