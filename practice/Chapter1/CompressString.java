
public String compressBad(String str){
	String mystr="";
	char last=str.charAt(0);
	int count=1;
	for(int i=1;i<str.length();i++){
		if(str[i]==last){
			count++;
		}
		else{
			mystr+=last + ""+ count;
			last=str.charAt(i);
			count=1;
		}
	}
	return mystr+last+count;

}