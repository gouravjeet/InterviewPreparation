
public String compressBetter(String str){
	// Check if compress would create a longer string 
	int size=countCompression(str);
	if(size>str.length()){
		return str;
	}
	StringBuffer mystr=new StringBuffer();

	char last=str.charAt(0);
	int count=1;
	for(int i=1;i<str.length();i++){
		if(str.charAt(i)==last){
			count++;
		}
		else{
			mystr.append(last);
			mystr.append(count);
			last=str.charAt(i);
			count=1;
		}
	}
	mystr.append(last);
	mystr.append(count);
	return mystr.toString();

}
int countCompression(String str){
	char last=str.charAt(0);
	int size=0;
	int count=1;
	for(int i=1;i<str.length();i++){
		if(str.charAt(i)==last){
			count++;
	
		}
		else{
			last=str.charAt(i);
			size+=1+String.valueOf(count).length();
			count=1;

		}
	}		
	size+=1+String.valueOf(count).length();
	return size;

}