import java.util.*;
public class one {
	
	public static void main(String args[])
	{
		LinkedHashMap<Integer,String> temp = new LinkedHashMap<Integer,String>();
		temp.put(new Integer(0)," ");
		temp.put(new Integer(1),"abc");
		temp.put(new Integer(4),"song");
		StringBuilder a = new StringBuilder();
		for(@SuppressWarnings("unused") Map.Entry<Integer, String> entry : temp.entrySet())
		{
			a.append(entry.getValue());
			a.append(" ");
		}
		System.out.println("Ye lo "+a);
		
	}
	
}
