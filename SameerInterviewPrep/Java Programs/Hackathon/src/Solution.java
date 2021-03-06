import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;


public class Solution {
 public static ArrayList<Integer> returnRange(int input,int maxDistance)
 {
  ArrayList<Integer> rangeArray = new ArrayList<Integer>();	 
  for(int i=4;i>=0;i--)
  {
	  if(input-i>=0)
	  {
		  rangeArray.add(input-i);
	  }
  }
  
  for(int i=0;i<=4;i++)
  {
	  if(input+i<=maxDistance)
	  {
		  rangeArray.add(input+i);
	  }
  }
  return rangeArray;
 }
 
 public static void main2(String args[])
 {
	 String test = "4 1 3 6 10";
	 String[] splitted = test.split("\\s+");
	 ArrayList<Integer> houseLocations = new ArrayList<Integer>();
	 LinkedHashMap<Integer,Set<Integer>> countMap = new LinkedHashMap<Integer,Set<Integer>>();
	 LinkedHashMap<Integer,Set<Integer>> countMapHousesWithDist = new LinkedHashMap<Integer, Set<Integer>>();
	 int maxDistance=0;;
	 for(int i=0;i<splitted.length;i++)
	 {
		 if(Integer.parseInt(splitted[i])>maxDistance)
		 {
			 maxDistance = Integer.parseInt(splitted[i]);
		 }
		 houseLocations.add(Integer.parseInt(splitted[i]));
	 }
	 Collections.sort(houseLocations);

	 for(int i=0;i<maxDistance;i++)
	 {
		 ArrayList<Integer> range = returnRange(i,maxDistance);
		 for(int iter : range)
		 {
			 Set<Integer> tempSet;
			 Set<Integer> tempSet2;
			 if(houseLocations.contains(iter))
			 {
			 if(countMap.containsKey(i))
			 {
				 tempSet2 = countMap.get(i);
				 tempSet2.add(iter);
				 countMap.put(i,tempSet2);
			 }
			 else
			 {
				 tempSet2 = new HashSet<Integer>();
				 tempSet2.add(iter);
				 countMap.put(i,tempSet2);
			 }
			 }
		 }
	 }

	 
	 Iterator it = countMap.entrySet().iterator();
	 int maxValue = -1;
	 while (it.hasNext()) {
	        Map.Entry pairs = (Map.Entry)it.next();
	        if(((Set<Integer>)pairs.getValue()).size()>maxValue)
	        {
	        	maxValue = ((Set<Integer>)pairs.getValue()).size();
	        }
	    }
	 
	 getPairsWithMaxValue
	 System.out.println(maxValue);
	 
 }
}
