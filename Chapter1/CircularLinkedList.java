// 1) We will first make two pointers fast and slow and we will look for first meeting point.
// 2) after finding first meeting point, we will make 2 slow pointer and both will again meet at the start of the loop
class CirculList{
	private Node head;
	private int listCount;

	Node circularduplicate(Node head){
		Node slow=head;
		Node fast=head;

		if(head==null){
			return null;
		}
		// we found first meeting point
		while(fast!=null && fast.next!=null){
			slow=slow.next;
			fast=fast.next.next;
			if(slow==fast){
				break;
			}
		}
		if(fast==null ||fast.next==null){
			return null;
		}
		slow=head;
		while(slow!=fast){
			slow=slow.next;
			fast=fast.next;
		}
		return fast;

	}	
}

class Node{
	Node next=null;
	int data;

	public Node(int d){
		this.data=d;
	}
	
}
public class CircularLinkedList{
	public static void main(String args[]){
		CirculList a=new CirculList();
		
		a.circularduplicate(head);

	}	
}
