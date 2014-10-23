import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;


public class whitespace {
	protected static Map<Character,Integer> freqMapper = new HashMap<Character,Integer>();
	
	public static void evaluate(String input)
	{
		ArrayList<Character> charTraced = new ArrayList<Character>();
		for(int i=0;i<input.length();i++)
		{
			char temp = input.charAt(i);
			if(!charTraced.contains(temp)){ charTraced.add(temp);}
			if(!freqMapper.containsKey(temp))
			{
				System.out.println("false");
				return;
			}
			else
			{
				if(freqMapper.get(temp)>0)
				{
					freqMapper.put(temp, freqMapper.get(temp)-1);
				}
				else
				{
					if(freqMapper.get('*')>0)
					{
						freqMapper.put('*', freqMapper.get('*')-1);
					}
					else
					{
						System.out.println("false");
						return;
					}
				}
			}
				
		}
		for(int i=0;i<charTraced.size();i++)
		{
			if(freqMapper.get(charTraced.get(i))!=0 && charTraced.get(i)!='*')
			{
				System.out.println("false");
				return;
			}				
		}
		System.out.println("true");
		
	}
	public static void main(String args[])
	{
		String one = "apdfco*dt";

		for(int i=0;i<one.length();i++)
		{
			if(freqMapper.containsKey(one.charAt(i)))
			{freqMapper.put(one.charAt(i),freqMapper.get(one.charAt(i))+1);}
			else
			{freqMapper.put(one.charAt(i),1);}
			
		}
		evaluate("dads");
	}
}

