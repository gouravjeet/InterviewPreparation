class Stack{
	Node top;
	
	int pop(){
		if(top!=null){
			Node item=top.data;
			top=top.next;
			return item;
		}
		return null;
	}
	void push(int item){
		Node t=new Node(item);
		t.next=top;
		top=t;
	}
	int peek(){
		return top.data;
	}
}