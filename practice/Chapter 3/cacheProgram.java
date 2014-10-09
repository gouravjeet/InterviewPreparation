import java.util.Scanner;
import java.io.*;


public class CacheProgram{


	public static void main(String arg[]) throws IOException{
		int size=11;
		
		int [] CacheKey= new int[size];
		int [] CacheValues= new int[size];
		int num;
		ABC abc= new ABC();
		while(true){
			System.out.println("Enter a number between 1 and 100");
			Scanner sc=new Scanner(System.in);
			num=sc.nextInt();
			int result=abc.calculateCache(num,CacheKey,CacheValues,size);
			System.out.println("Result is "+result);	
		}
	}
}
 class ABC{
	
	static int count=0;
	int calculateAnswer(int num,int size){
		int sum=0;
		try{
			System.out.println("Cache created ");
			for(int i=1;i<=num;i++){
				sum=sum+num;
			}
			Thread.sleep(3000);
		}
		catch(Exception e){
			System.out.println("Exception");
		}
		return sum;
	}


	int calculateCache(int num,int [] CacheKey,int [] CacheValues,int size){
		
		System.out.println(count);
		for(int i=0;i<size;i++){
			if(CacheKey[i]==num){
				System.out.println("Cache hit");
				return CacheValues[i];
		//cache hit	
			}
		}
		//cache miss
		if(count==11){
			count=0;
		}
		System.out.println("Cache miss");
		CacheKey[count]=num;
		CacheValues[count]=calculateAnswer(num,size);
		count++;
		return CacheValues[count-1];
	}
}
	

