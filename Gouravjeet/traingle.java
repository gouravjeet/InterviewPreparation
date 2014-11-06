public class TriangleOfNumbers{
	public static void main(String[] args){
		int[] input=new int[]{4,5,3,7};
		print(input);
		display(input);
	}
	public static void print(int[] input){
		if(input!=null && input.length>0){
			int newLength=input.length-1;
			int newArray=new int[newLength];
			for(int i=0;i<input.length-1;i++){
				newArray[i]=input[i]+input[i+1];
			}
			print(newArray);
			display(newArray);
		}
	}
	public static void display(int[] input){
		if(input!=null && input.length>0){
			System.out.println("{{");
			for(int i =0;i<input.length;i++){
				System.out.println(input[i]);
				if(i+1,input.length){
					System.out.println(", ");
				}
			}
			System.out.println("}}");
		}

	}
}
