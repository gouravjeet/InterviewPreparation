package dara.tree;
import java.util.*;
import java.util.LinkedList;

// first i will start with making the node class
// then i need to write 2 functions for writing into a tree
//insert and delete

class Node{
	int data;
	public int getData() {
		return data;
	}
	public void setData(int data) {
		this.data = data;
	}
	Node left;
	Node right;
	Node(int d){
		this.data=d;
		this.left=null;
		this.right=null;
	}
}

 class Tree {
	private Node root;
	Node parent;
	void Traversal(){
		postOrder(root);
	}
	
	public Node getRoot() {
		return root;
	}

	public void setRoot(Node root) {
		this.root = root;
	}

	void insert(int value){
		Node newNode=new Node(value);
		//System.out.println(newNode.data);
		if(root==null){
			root=newNode;
			System.out.println("first");
		}
		else{
			Node current=root;
			while(true){
				// since in case of insertion, we need a way of finding where to insert too.
				//so we need to save the parent also
				parent=current;
				if(current.data>value){								// go left
					current=current.left;
					if(current==null){// since at this step , we know that it is null and we need to insert the new element as 
						// either its first child or second
						parent.left=newNode;
						//System.out.println(parent.data);
						System.out.println("parent left child");
						
						return;
					}
				}
				else if(current.data<value){						// go right
					current=current.right;
					if(current==null){
						parent.right=newNode;
						//System.out.println(parent.data);
						System.out.println("parent  right child");
						return;
					}
				}
			}
		}
		
		
		
	}
	boolean delete(int value){ // value to be deleted
		// 1) the node to be deleted is a leaf  
		// 2) the node to be deleted has one child
		// 3) the node to be deleted has two child
		// Best thing about java is that we don't need to take care of garbage collection
		Node current=root;
		Node parent=root;
		boolean isLeftChild=true;
		while(current.data!=value){
			//first search for node and then delete it
				parent=current;
				if(value<current.data){//go left
					isLeftChild=true;
					current=current.left;
				}
				else {
					isLeftChild=false;
					current=current.right;
				}
				if(current==null){
					return false;
				}	
		} // Till this point, we found that the element to be deleted , so next step is to delete it since we have stored where it is
		
		// if no children, delete it
				if(current.left==null && current.right==null){
					if(current==root){
						root=null ;// since we know that it does not have any child and it is root , that means it is the only element
					}
					else if(isLeftChild){
						parent.left=null;
					}
					else{
						parent.right=null;
					}	
				}
				
				// if one children 										2
																	//	  \\
															//		4		5
																//
															//	3
				else if(current.right==null){      // if no right child, replace with left sub tree. 
					if(current==root){
						root=current.left;
					}
					else if(isLeftChild){
						parent.left=current.left;
					}
					else{
						parent.right=current.right;
					}
				}
				else if(current.left==null){       // if no left child, replace with right sub tree
					if(current==root){
						root=current.right;
					}
					else if(isLeftChild){
						parent.right=current.left;
					}
					else {
						parent.right=current.right;
					}
					
				}
				else {  // case of two children
					// we find the successor of node to delete
					Node successor=getSuccessor(current);
					// connect parent of current with successor
					if(current==root){
						root=successor;
					}
					else if(isLeftChild){
						parent.left=successor;
					}
					else {
						parent.right=successor;
						successor.left=current.left;
					}
					
				}
														// if two children
				// we need to replace the node with its  successor
				return true;
				
	}
	// first we need to find the successor and return it to the previous function
	Node getSuccessor(Node delnode){
		Node successorParent=delnode;
		Node successor=delnode;
		Node current=delnode.right;  // go to right child
		while(current!=null){
			// go to leftchild
			successorParent=successor;
			successor=current;
			current=current.left; // go till the end of left child
		} // at this point, we have the delete node successor
		if(successor!=delnode.right){
			successorParent.left=successor.right;
			successor.right=delnode.right;
		}
		return successor;
		
	}
	void printAll(){
		Node d=root;
		while(d!=null){
			System.out.println(d.data);
			d=d.left;
		}
	}
	void inOrder(Node localRoot){
		if(localRoot!=null){
			inOrder(localRoot.left);
			System.out.println(localRoot.data);
			inOrder(localRoot.right);
		}
	}
	void preOrder(Node localRoot){
		if(localRoot!=null){
			System.out.println(localRoot.data);
			preOrder(localRoot.left);
			preOrder(localRoot.right);
		}
	}
	void postOrder(Node localRoot){
		if(localRoot!=null){
			postOrder(localRoot.left);
			postOrder(localRoot.right);
			System.out.println(localRoot.data);
		}
	}
	
	
	Node find(int value){
		Node current=root;
		if(current==null){
			System.out.println("Not found");
		}
		while(current.data!=value){ // it will loop through till the time it finds the node
			if(current.data>value){
				current=current.left;
			}
			else if(current.data<value){
				current=current.right;
			}
			if(current==null){
				return null;
			}
		}
		return current;
	}
	Node minimum(Node root){
		Node current;
		Node last=null;  //we need to remember what the last element is , because current will be out of the loop when null
		current=root;
		while(current!=null){
			last=current;
			current=current.left;
		}
		return last; 
	}
	Node maximum(Node root){
		Node current;
		Node last=null;  //we need to remember what the last element is , because current will be out of the loop when null
		current=root;
		while(current!=null){
			last=current;
			current=current.right;
		}
		return last; 
	}
	int isBalanced(Node root){
		Node current=root;
		if(current==null){
			return 1;
		}

		int leftHeight=isBalanced(root.left);
		int rightHeight=isBalanced(root.right);
		// we will start the method by checking whether the current node is balance , 
		//then whether his left child is balanced and then whether its right child is balanced
		
		if(leftHeight==-1){  // left child balanced or not otherwise -1
			return -1;
		}
		if(rightHeight==-1){  // right child balanced or not otherwise -1
			return -1;
		}
		int heightDiff=leftHeight-rightHeight;
		if(Math.abs(heightDiff)>-1){   			// check for current node to be balanced
			return -1;
		} else{
			return Math.max(leftHeight,rightHeight)+1;
		}	
 	}
	int TreeHeight(Node r){								// Height Function
		if(r==null){
			return 0;
		}
		else {
			int lheight=TreeHeight(r.left);
			int rheight=TreeHeight(r.right);
			
			if(lheight>rheight){
				return (lheight+1);
			}
			else 
				return (rheight+1);
		}
	}
	public boolean BalancedOrNot(Node root){					// Check whether a tree is a balanced or not
		if(isBalanced(root)==-1){
			return false;
		}
		else {
			return true;
		}
	}
	Node sortedArrayBST(int arr[], int start, int end){         // Converting an array to tree 
		
		if(start>end){
			return null;
		}
		int mid=(start+end)/2;
		Node newNode=new Node(arr[mid]);
		newNode.left=sortedArrayBST(arr,start,mid-1);
		newNode.right=sortedArrayBST(arr,mid+1,end);
		return root;
	}
	//  Level Order Traversal is same as making a linked list of numbers at each level
	void printLevelOrderTraversal(Node root){
		int h=TreeHeight(root);
		LinkedList<Node>[] ver = new LinkedList[h];
		for(int i=1;i<=h;i++){
			ver[i-1]=new LinkedList<Node>();
			PrintGivenLevel(root,i,ver[i-1]);
			
		}
		for (int j = 0; j < ver[2].size(); j++) {
			System.out.print(ver[2].get(j).data + " , ");
		}
		
	}
	void PrintGivenLevel(Node root,int level,LinkedList<Node> l1){					// print given level
		if(root==null){
			return;
		}
		if(level==1){
			
			l1.add(root);
			System.out.println(root.data+"Level"+level);
		}
		else if(level>1){
			PrintGivenLevel(root.left,level-1,l1);
			PrintGivenLevel(root.right,level-1,l1);
		}
	}
	Node CommonAncestor(Node root, int i1,int i2){ 					// common ancestor problem
		Node current=root;
		if(current==null){
			return null;
		}
		if(current.data==i1 || current.data==i2){
			return current;
		}
		else {
			Node leftchild=CommonAncestor(root.left,i1,i2);
			Node rightchild=CommonAncestor(root.right,i1,i2);
			if(leftchild==null && rightchild==null){
				return null;
			}
			else if(leftchild!=null && rightchild==null){
				return leftchild;
			}
			else if(leftchild==null && rightchild!=null)
			{
				return rightchild;
			}
			else if(leftchild!=null && rightchild!=null){
				return current;
			}
		}
		
		return current;
		
	}
	int getLeafCount(Node node){
		if(node==null){
			return 0;
		}
		else if(node.left==null && node.right==null){
			return 1;
		}
		else return getLeafCount(node.left)+getLeafCount(node.right);	
	
	}
	
	void findsum(Node node, int sum, int[] path, int level){			// find linked list in a tree which is equal to a sum
		if(node==null){
			return;
		}
		path[level]=node.data;
		int t=0;										//look for the nodes with a sum that ends at this node
		for(int i=level;i>=0;i--){
			t=t+path[i];
			if(t==sum){
				print(path,i,level);
			}
		}
		findsum(node.left,sum,path,level+1);
		findsum(node.right,sum,path,level+1);
		path[level]=Integer.MIN_VALUE;
		
	}
	boolean isSumProperty(Node root){										//isSum property
		int ldata=0,rdata=0;
		if(root==null || (root.left==null && root.right==null) ){
			return false;
		}
		else {
			if(root.left!=null){
				ldata=root.left.data;
			}
			if(root.right!=null){
				rdata=root.right.data;
			}
			if( (root.data==(ldata + rdata)) && (isSumProperty(root.left)) && (isSumProperty(root.right))){
				return true;
			}
			else{
				return false;
			}
		}
			
		
		
	}
	void print(int[] path, int start,int end){
		for(int i=start;i<=end;i++){
			System.out.println(path[i]+"paths");
		}
		System.out.println();
	}
	void findSumMain(Node node, int sum){
		int height=TreeHeight(node);
		int[] path=new int[height];
		findsum(node,sum,path,0);
	}
	int diameter(Node root){
		if(root==null){
			return 0;
		}
		int lheight=TreeHeight(root.left);
		int rheight=TreeHeight(root.right);
		
		int ldiameter=diameter(root.left);
		int rdiameter=diameter(root.right);
		// return max of diameter of left subtree and diameter of right subtree and (height of left subtree and height of right subtree +1)  
		return max(lheight+rheight+1,max(ldiameter,rdiameter));
		
	}
	int max(int a, int b){
		return (a>=b)?a:b;
	}
	
	boolean sumTree(Node root){
		if(root==null || (root.left==null && root.right==null)){
			return true;
		}
		else {
			int lsum=sum(root.left);
			int rsum=sum(root.right);
			if((lsum+rsum==root.data) && sumTree(root.left) && sumTree(root.right)){
				return true;
			} 
			return false;
			
		}
	}
	int sum(Node root){
		if(root==null ){
			return 0;
		}
		else {
			return sum(root.left)+sum(root.right)+root.data;
		}
	}
	
	
	boolean isBST(Node root){
		if(root==null){
			return true;
		}
		else{
			if((root.left!=null)&&(root.right!=null)){
				Node lmax=maximum(root.left);   // maximum of the left subtree
				Node lmin=minimum(root.right);	// minimum of the right subtree
				System.out.println("max"+lmax.data);
				System.out.println("min"+lmin.data);
				if(root.data>lmax.data && root.data <lmin.data){
					boolean l=isBST(root.left);
					boolean r=isBST(root.right);
					if(l && r){
						return true;
					}
					return false;
				}
				else {
					return false;
				}

			}
			else
				return true;
			
		}
	}
 
}
 	
 
  class TreeMain{
	public static void main(String[] args){
		Tree t=new Tree();
		
		
		t.insert(30);
		t.insert(20);
		t.insert(40);
		t.insert(15);
		t.insert(25);
		t.insert(35);
		t.insert(45);
		Tree tm=new Tree();
	
		int arr[]={2,6,8,10,20};
		//t.printAll();
		//Node found=t.find(10);
		//System.out.println(found.data);
		//boolean a=t.delete(0);						// delete an elements Non-Recursion
		//System.out.println(a);
		t.Traversal();
		Node min=t.minimum(t.getRoot());							// minimum element
		System.out.println("minimum child"+min.data);		
		//int isbal=t.isBalanced(t.getRoot());			// whether a tree is balanced or not
		//System.out.println(isbal);
		int start,end;
		int n=arr.length;
		//Node head=t.sortedArrayBST(arr,0,n-1);		// convert a sorted array to BST
		int height=t.TreeHeight(t.getRoot());			
		System.out.println("Height is "+height);		// height of a tree
		t.printLevelOrderTraversal(t.getRoot());		//level order traversal
		Node d=t.CommonAncestor(t.getRoot(),25,15);
		System.out.println("common ancestor"+d.data);	// common ancestor problem
		System.out.println();
		t.findSumMain(t.getRoot(),75);                  // find sum equal to some value
		int leafcount=t.getLeafCount(t.getRoot());		// leaf count problem
		System.out.println(leafcount);
		boolean isSumProperty=t.isSumProperty(t.getRoot());					// children sum property
		System.out.println(isSumProperty);
		t.diameter(t.getRoot());												// diameter of a tree
		//t.sumTree(t.getRoot());
		boolean bst=t.isBST(t.getRoot());									//is BST or not
		System.out.println("BST"+ bst);
		boolean sumtree=t.sumTree(t.getRoot());
		System.out.println("Sumtree"+ sumtree);								//is Sumtree or not
	}
}
