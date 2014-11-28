public class LongestPalindrome{

	public static String longestP(String s){
		String longestPalindrome=null;
		int max=0;
		int length=s.length();

		// check all possible sub strings
		for(int i=0;i<length;i++){
			for(int j=i+1;j<length;j++){
				int len=j-i;
				String curr=s.substring(i,j+1);
				if(isPalindrome(curr)){
					if(len>max){
						longestPalindrome=curr;
						max=len;
					}
				}
			}
		}
		return longestPalindrome;
	}
	public static boolean isPalindrome(String s){
		for(int i=0;i<s.length()-1;i++){
			if(s.charAt(i)!=s.charAt(s.length()-1-i)){
				return false;
			}
		}
		return true;
	}
}