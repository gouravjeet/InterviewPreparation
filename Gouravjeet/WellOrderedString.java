public class WellOrderedString {

	private static int stringCount=0;
	public static void allPossibleCominations(String prefix , String str) {
		
		int n = str.length();
		if(n==0)  {
		set.add(prefix);
		}
		else {
			
		//	System.out.println(str);
			set.add(str);
			for(int i=0;i<n;i++) {
				
				allPossibleCominations(prefix+str.charAt(i), str.substring(0,i)+str.substring(i+1,n));
			}
		}
	}	
	private static void getWellOrderedString(String currentString,int charsLeft)
	{
		if(charsLeft==0)
		{
			System.out.println(currentString);
			stringCount++;
		}
		char i;
		if(currentString.isEmpty()) i='a';
		else
			i=(char) (currentString.charAt(currentString.length()-1)+1);
		for (;i<='z';i++)
		{
			getWellOrderedString(currentString+i, charsLeft-1);
		}
	}
	public static void main(String args[])
	{
		getWellOrderedString_Intf(3);
		System.out.println("Total count: "+stringCount);
		allPossibleCominations();
	}
	private static void getWellOrderedString_Intf(int i) {
		getWellOrderedString("",i);
		
	}
}