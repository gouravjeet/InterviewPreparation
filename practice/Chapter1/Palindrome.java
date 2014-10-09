// we will use runner technique --> when slow will reach middle, fast will be at the end.

boolean isPalindrome(Node head){
	Node slow=head;
	Node fast=head;
	Stack<Integer> stack=new Stack<Integer>();
	while(fast!=null && fast.next!=null){
		stack.push(slow.data);
		slow=slow.next;
		fast=fast.next.next;
	}
	// odd number of elements so will skip middle element
	if(fast!=null){
		slow=slow.next;
	}
	// we are at the middle, we just need to iterate till the last element and compare it with values in stack one by one.
	while(slow!=null){
		int top=stack.pop();
		if(top!=slow.data){
			return false;
		}
		slow=slow.next;
	}
	return true;
}