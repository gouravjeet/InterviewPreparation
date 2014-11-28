import java.util.Stack;
public class ReversePolishNotation{
	// we need to use a stack 
	// On a sign , pop the element from the stack and in case of number, pushing into the stack
	public static void calculateValue(String[] str,String operators){
		Stack<String> stack=new Stack<String>();
		
		for(int i=0;i<str.length;i++){
			if(operators.contains(str[i])){
				int a=Integer.valueOf(stack.pop());
				int b=Integer.valueOf(stack.pop());
				int index=operators.indexOf(str[i]);
				switch(index){
					case 0:
						stack.push(String.valueOf(a+b));
						break;
					case 1:
						stack.push(String.valueOf(a-b));
						break;
					case 2:
						stack.push(String.valueOf(a/b));
						break;
					case 3:
						stack.push(String.valueOf(a*b));
						break;
				}
				//System.out.println(str[i]);
			}
			else{
				stack.push(str[i]);
			}
		}
		System.out.println(Integer.valueOf(stack.pop()));
	}
	public static void main(String[] args) {
			String operators="+-/*";
			String[] str={"2", "1", "+", "3", "*"};
			calculateValue(str,operators);

	}
}