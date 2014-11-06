public class permu{
	public static void main(String[] args){
		String prefix="";
		String str="maharaja";
		Set<String> set=new TreeSet<String>();
		allPossibleCombinations(prefix,str,set);
		printPerms(set);
	}
	public static void allPossibleCombinations(String prefix, String str,Set<String> set){
		int n=str.length();
		if(n==0){
			set.add(prefix);
		}
		else{
			set.add(str);
			for(int i=0;i<n;i++){
				String sub1=str.substring(0,i);
				String sub2=str.substring(i+1,n);
				allPossibleCombinations(prefix+strcharAt(i),sub1+sub2,set);
				
			}
		}
	}
	public static void printPerms(Set<String> set){
		for(String word:set){
			int count=0;
			for(int i=0;i<word.length();i++){
				int wordlen=word.length()-1;
				int secondChar=word.charAt(i);
				int firstChar=word.charAt(i-1);
				int sum=secondChar-firstChar;
				if(sum>1){
					count++;
				}
				if(count==wordlen){
					System.out.println(word);
				}

			}
		}
	}

}
