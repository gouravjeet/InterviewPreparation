public static boolean isPalindrome(String s){
	int i=0;
	int j=s.length()-1;
	while(i<j){
		if(s.charAt(i)!=s.charAt(j)){
			return false;
		}
		i++;
		j--;
	}
	return true;
}
public static String DecimaltoOctal(int decimal){
	StringBuilder sb=new StringBuilder();
	int reminder;
	while(decimal!=0){
		reminder=decimal%8;
		decimal/=8;
		sb.append(String.valueOf(remainder));
	}
	return sb.toString();
}
public static void getTwoTypePalindrome(int bound){
	
}