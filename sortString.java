// We need to find whether one string is a permutation of the other
// 
// We need to sort the string and check whether the permutation of one string is same as the other string
public class sortString{

	public String sort()
	{
		char[] content=s1.toCharArray();
		java.util.Arrays.sort(content);
		return new String(content);
	}
	public boolean permutation(String s1, String s2){
		if(s1.length!=s2.length){
			return false;
		}
		return sort(s1).equals(sort(s2));
	}
	public static void main(String args[]){
		String s1="abc";
		String s2="cba";

		boolean truth=permutation(s1,s2);
		System.out.println(truth);

	}


}

