#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdlib>	
#include<cmath>	
using namespace std;

int filledSpacesInCharArray(char *a)
{
	int count = 0;
	int i=0;
	while(a[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}	
int lengthOfConsecutiveFirstNumbers(char *a,int len)
{
 int count =0 ;
 for(int i =0;i<len;i++)
 {
 	if(a[i]<48 || a[i]>57)
 	{
 		break;
 	}
 	if(a[i]>=48 && 	a[i]<=57)
 	{
      count++;
 	}

 }	
 return count;	
}

int simAtoi(char *a,int len)
{
 int times = lengthOfConsecutiveFirstNumbers(a,len);
 int sum=0;

 if(times==0){return sum;}

 for(int i =0;i<len;i++)
 {
 	if(a[i]>=48 && a[i]<=57)
 	{
      sum = sum + (a[i]-48)*pow(10,times-1);
      times--;
 	}

 }
 return sum;
}

int main()
{	
	char a[10] = "1234567";
	int len = filledSpacesInCharArray(a);
	cout<<simAtoi(a,len);	
	return 0;
}