// In this problem, we need to modify the string such that whenever we will find a space , we will replace it with "%20"

class StringManipulation1
{

	public void replaceSpaces(char [] str, int len){
		int spaceCount=0,newLength=0,i=0;
		// first we will count how many spaces are needed
		for(i=0;i<len;i++){
			if(str[i]==' '){
				spaceCount++;
			}	
			newLength=newLength+spaceCount*2;
		}
		str[newLength]='\0';
		for(i=len;i>0;i--){
			if(str[i]== ' '){
				str[newLength-1]='0';
				str[newLength-2]='2';
				str[newLength-3]='%';
				newLength=newLength-1;
			}
			else{
				str[newLength-1]=str[i];
				newLength=newLength-1;
			}
		}
		for(int j=0;j<newLength;i++){

			System.out.println(str[j]);
		}
		

	}
	public static void main(String args[]){
		char [] s1={'a','','c','w','','s';
		String s2="cba";

		replaceSpaces(s1,6);
		

	}
}