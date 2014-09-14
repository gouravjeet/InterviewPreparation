// Program will define the linked list 

class Node{
	Node next=null;
	int data;
}
public Node(int d){
	this.data=d;
}
void appendToTail(int d){
	Node end=new Node(d);
	Node n =this;
	while(n.next != null){
		n=n.next;
	}
	n.next=end;
}
Node deleteNode(Node head, int d){
	Node n=head;
	if(d==n.data){
		return head.next;
	}// we will delete the head and move the head by one location
	while(n.next!=null){
		if(n.next.data==d){
			n.next=n.next.next;
			return head;
		}
		n=n.next;
	}
	return head;
}
// this function will remove the duplicates from the linked list
//Here we used a hash table to store the value and then we will compare to see if it is there or not

public  void removeDuplicates(Node head){
	HashTable table=new HashTable();
	Node prev=null;
	Node n=head;
	while(n!=null){
		if(table.containskey(n.data)){
			prev.next=n.next;
		}
		else{
			table.put(n.data);
			prev=n;
		} 
		m=n.next;
	}
}
//O(N) time and O(n) space
public  void removeDupNoBuffer(Node head){
	if(head==null){
		return;
	}
	Node current=head;
	while(current!=null){
		Node runner=current;
		while(runner.next!=null){
			if(runner.next.data=current.data){
				runner.next=runner.next.next;
			}
			else{
				runner=runner.next;
			}
		}
		current=current.next;
		//O(N2) time and O(1) space
	}
}
// Implement a method so that we can find kth to last element in the linked list
// we will use two pointers p1 and p2 and then we will make one pointer to k elements and when it reaches that point , it needs to cover n-k elements 
// to reach the end and now we will use both pointer, one from p1 and second from kth ..so, after p2 will reach last element , p1 will reach kth and 
public  void kthLastElem(Node head, int k){
	if(k<=0) return null;
	
	Node p1=head;
	Node p2=head;

	for(int i=0;i<k;i++){
		if(p2==null){
			return null;
		}
		p2=p2.next;
	}
	if(p2==null{
		return null;
	}

	while(p2.next!=null){
		p1=p1.next;
		p2=p2.next;
	}
	return p1;
}
public  void deleteN(Node n){
	if(n==null || n.next==null){
		return null;
	}
	Node next=n.next;
	n.data=next.data; //copy the data from next node to current node
	n.next=next.next;//delete the next node
	return true;
}
// we need to make a functioon such that values in the linked list that are less than x are on the left side and on the right side will be greater than x

public  void merge(Node n, int x){
	if(n==null){
		return null;
	}
	Node current=n;
	Node before;
	Node after;
	while(current!=null){
		Node next=current.next;

		if(current.data<x){
			current.next=before;
			before=current;
		}
		else if(current.data>=x){
			current.next=after;
			after=current;
		}
		current=next;
	}// we now know that we get 2 lists one is before and after.. so now, we need to merge both the lists

	// we will find where the first list ends and then we will merge both the lists
	if(before==null){
		return after;
	}
	Node head=before;
	while(before.next!=null){
		before=before.next;
	}
	before.next=after;
	return head;
}

public Node addTwoNumbers(Node l1,Node l2){
	int carry=0;
	Node newhead=new Node(0);
	Node p1=l1,p2=l2,p3=newHead;

	while(p!=null || p2 !=null){
		//three cases will be there when p1 is null or p2 is null or same length
		if(p1!=null){
			carry+=p1.val;
			p1=p1.next;
		}
		if(p2!=null){
			carry+=p2.val;
			p2=p2.next;
		}
		p3.next=new node(carry%10);
		p3=p3.next;
		carry =carry/10;

	}
	if(carry==1){
		p3.next=new Node(1);
	}
	return newhead.next;
}


