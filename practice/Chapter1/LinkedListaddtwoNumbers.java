public class Node{
	int val;
	Node next;
	Node(int d){
		data=d;
		next=null;
	}
}
public Solution {
	public Node addTwoNumbers(Node l1,Node l2){
		Node p1=l1;
		Node p2=l2;
		ListNode newHead = new ListNode(0);
        ListNode p3 = newHead;

		boolean flag=false;//flag will be true if greater than 10
		while(p1!=null || p2!=null){

			if(p1 != null && p2 != null){
			if(flag){
				val=p1.val +p2.val+1;
			}
			else{
				val=p1.val+p2.val;
			}
			if(val>=10){
				flag=true;
			}
			else{
				flag=false;
			}
			p3.next=new Node(val%10);
			p1=p1.next;
			p2=p2.next;

		}// p1 is null
		else if (p2!=null){
			if(flag){
				val=p2.val+1;
				if(val>=10){
					flag=true;
				}
				else{
					flag=false;
				}
			}
			else{
				vl=p2.val;
				flag=false;
			}
			p3.next=new Node(val%10);
			p2=p2.next;
		}
		// p2 is null
		else if (p1!=null){
			if(flag){
				val=p1.val+1;
				if(val>=10){
					flag=true;
				}
				else{
					flag=false;
				}
			}
			else{
				vl=p1.val;
				flag=false;
			}
			p3.next=new Node(val%10);
			p1=p1.next;
		}
		if(p1==null && p2==null && flag){
			p3.next=new Node(1);
		}
		return newHead.next;
	}

	}
}
