import java.util.Map;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.ArrayList;

public class DisjointSet {

	private List<Map<Integer,Set<Integer>>> disjointSet;
	
	public DisjointSet()
	{
		disjointSet = new ArrayList<Map<Integer,Set<Integer>>>();
	}
	
	public void createSet(int inputElement)
	{
		Map<Integer,Set<Integer>> tempMap = new HashMap<Integer,Set<Integer>>();
		Set<Integer> tempSet = new HashSet<Integer>();
		Integer tempInteger = new Integer(inputElement);
		tempSet.add(tempInteger);
		tempMap.put(tempInteger,tempSet);
		disjointSet.add(tempMap);
	}
	
	public Integer find_set(int inputElement)
	{
		for(int i=0;i<disjointSet.size();i++)
		{
			 Map<Integer,Set<Integer>> tempMap = disjointSet.get(new Integer(inputElement));
			 Set<Integer> keySet = tempMap.keySet();
			 for(Integer tempInt : keySet)
			 {
				 Set<Integer> tempSet = tempMap.get(tempInt);
				 if(tempSet.contains(new Integer(inputElement)))
				 {
					 return tempInt;
				 }
			 }
		}
		return -1;
	}
	
	public void union(int inputelement1,int inputElement2)
	{
	 Set<Integer> set1 = new HashSet<Integer>();
	 Set<Integer> set2 = new HashSet<Integer>();
	 
	 for(int i=0;i<disjointSet.size();i++)
	 {
		 Map<Integer,Set<Integer>> tempMap = disjointSet.get(i);
		 if(tempMap.containsKey(new Integer(inputelement1)))
		 {
			 set1 = tempMap.get(new Integer(inputelement1));
		 }
		 else if()
	 }
	}
}

