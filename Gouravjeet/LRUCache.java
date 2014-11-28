import java.util.HashMap;
public class LRUCache{
	private HashMap<Integer,Node> map=new HashMap<Integer,Node>();
	private Node head;
	private Node end;
	private int capacity;
	private int len;
	public LRUCache(int capacity){
		this.capacity=capacity;
		len=0;
	}
	//1. retrieve hashmap's cache entry
    // 2. adjust entries's order in the internal doubly linked list
	public int get(int key){
		if(map.containsKey(key)){
			queue.removeKey(key);
		}
	}
	 /* 
     * insert a new cache entry into the LRU cache
     * 1. update hashmap
     * 2. update linkedlist
     */
	public void put(int key, int value){
		if(map.containsKey(key)){
			queue.remove(key);
		}
		while(queue.size()>=maxSize){
			Key oldestKey=queue.poll();
			if(null!=oldestKey){
				map.remove(oldestKey);
			}
		}
		queue.add(key);
		map.put(key,value);
	}
	public void removeNode(Node node){
		Node current=node;
		Node pre=current.pre;
	}
}