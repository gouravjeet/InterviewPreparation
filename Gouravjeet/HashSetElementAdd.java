import java.util.ArrayList;
import java.util.HashSet;

public class HashSetElementAdd{
	public static ArrayList<String> addList(String[] l1, String[] l2){
		HashSet<String> hashset=new HashSet<String>();
		ArrayList<String> combinedList=new ArrayList<String>();
		for(int i=0;i<l1.length;i++){
			if(hashset.add(l1[i].toLowerCase())){
				combinedList.add(l1[i]);
			}
		}
		for(int i=0;i<l2.length;i++){
			if(!hashset.contains(l2[i].toLowerCase())){
				combinedList.add(l2[i]);
			}
		}
		return combinedList;

	}
	public static void main(String[] args){
		String[] l1={"a","b","c","d"};
		String[] l2={"b","d","e","g"};
		ArrayList<String> combinedList=addList(l1,l2);
		for(String item:combinedList){
			System.out.println(item);
		}
	}
}