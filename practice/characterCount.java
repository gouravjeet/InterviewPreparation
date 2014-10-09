// Since we need to check for permutation, we will check whther it has the same character count 
// because if two string have same character count, then one is the permutation of the other

public class characterCount{

	
	public boolean permutation(String s1, String s2){
		if(s1.length!=s2.length){
			return false;
		}
		int[] letters=new int[256];
		char[] s_array=s.toCharArray();
		for(char c: s_array){
			letters[c]++;
		}
		// Why this for loop
		for(int i=0; i<)
	}
	public static void main(String args[]){
		String s1="abc";
		String s2="cba";

		boolean truth=permutation(s1,s2);
		System.out.println(truth);

	}


}

