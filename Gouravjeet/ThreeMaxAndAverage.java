//User inputs a series of numbers and terminates the series by a zero. Your 
//program should find the first three maximum values in the series and exclude //them from the series and compute the average of the remaining numbers. (
//excluding zero as well) 
//Ex - 3, 7, 12, 2, 25, 8, 9, 13, 10, 0 
//First three maximum numbers = 25, 13, 12 
//Average of the rest = (3 + 7 + 2 + 8 + 9 + 10) / 6 = 6.5
public class ThreeMaxAndAverage{

	public static void swap(int a,int b){
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
	public static void main(String[] args){
		int[] numbers={3, 7, 12, 2, 25, 8, 9, 13, 10, 0};
		int l,m,s;

		l=12;
		m=7;
		s=3;
		int sum=l+m+s;
		int count=3;
		do{
		sum=sum+numbers[count];
			if(numbers[count]>s){
				s=numbers[count];
			}
			if(s>m){
				swap(s,m);
			} 
			if(m>l){
				swap(m,l);
			}
		count++;
		//System.out.println(count);
		}
		while(count!=numbers.length);
		double avg=(sum-(s+m+l))/(count-3);
		System.out.println(sum-(s+m+l));
		System.out.println(s);
		System.out.println(m);
		System.out.println(count-3);
		System.out.println(45/7);

	}
}